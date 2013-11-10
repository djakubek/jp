#include <stdio.h>
int main(){
	int k,n;
	printf("Podaj pierwsza liczbe calkowita: ");
	scanf("%i", &k);
	printf("Podaj druga liczbe calkowita :");
	scanf("%i", &n);

			/* & uzywany jest glownie do przypisywania wartosci zmiennnej liczbowej */
			/* printf("Wczytano liczby : %i i %i\n", k, n); */
			/* k>=n ? k : n */ /* inna mozliwos zapisania if()'a */
	
	//	printf("Wieksza liczba to %i\n", k>=n ? k : n);

		if (k > n){
			printf("Wieksza liczba : %i\n", k);
			}
			else {
				printf("Wieksza liczba : %i\n", n);
			}
	return 0;
}