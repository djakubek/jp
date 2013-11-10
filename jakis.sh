#!/bin/bash

sniadanie(){
while :
do
echo -e "Co miales na sniadanie ? \\n"
echo  " Mleko " 
echo "Tak"
echo " Nie " "?"
read wybor
case $wybor in
	[tT] ) return 0;;
	[nN] ) return 1;;
	* ) echo "Nie roumiesz o co cie pytaja ?"
esac
done
}
 if sniadanie
 	then 
 	echo "Bardzo dobrze"
 else
 	echo "NIe dobrze panie szanowny"
fi

exit 0
