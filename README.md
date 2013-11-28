Jezyki programowania
==

 Program na dzisiaj : 


* oswajanie [notacji markdown] [daringfireball]
  - [dodawanie obrazków] [stackoverflow-screenshots]
* podstawy secure shell.
* edytory
* [ciekawe] <- Wbzyl
* [Sublimteks] <- Program Sublime Tekst :)
* [LightTable] <- Program php, html Bajka !
* konfiguracja srodowiska graficzne xfce
* [freebsd] <- strona manuala

## Generowanie kluczy publicznych

```sh
ssh-keygen -t rsa
Generating public/private rsa key pair.
Enter file in which to save the key (/home/użytkownik/.ssh/id_rsa):
Enter passphrase (empty for no passphrase):
Enter same passphrase again:
Your identification has been saved in /home/użytkownik/.ssh/id_rsa.
Your public key has been saved in /home/użytkownik/.ssh/id_rsa.pub.
The key fingerprint is:
xx:xx:xx:xx:xx:xx:xx:xx:xx:xx:xx:xx:xx:xx:xx:xx

```
## Konfiguracja Git'a
````sh
git config --global user.name "Imie i nazwisko"
git config --global user.email "twoj email"
```

## Zmiana hasła

```sh
passwd #ctrl+c aby przerwać
```

Być może trzeba bedzie się zalogować na Sigmę/ Wp.pl :

```sh
ssh k.a.s.z.u.b@w.pl
```
Przykładowy program w C:

```sh
#include<stdio.h>
main(){
print("hello word");
}
```
[freebsd]: http://www.freebsd.org/cgi/man.cgi
[daringfireball]: http://daringfireball.net/projects/markdown/basics
[stackoverflow-screenshots]:http://daringfireball.net/projects/markdown/basics
[ciekawe]:http://wbzyl.inf.ug.edu.pl/sp/
[Sublimteks]:http://www.sublimetext.com/
[LightTable]:http://www.lighttable.com/

## Edytor
* Rozpakowywanie

```sh
tar jxvf Sublime\ Text\ 2.0.2.tar.bz
cd Sublime\ Text\ 2
chmod 755 sublime_text
./sublime_text
```
