/*Program, który pobiera Twój wiek w latach, a następnie przelicza go na sekundy.

Do sprawdzania czy rok jest jest przestępny skorzystaj z poniższego kodu (K&R, s. 153):

leap = year%4==0 && year%100!=0 || year%400 == 0*/

/* liczba sekund w roku 31536000 */
#include <stdio.h>
#include <math.h>

int main()
{
	int wiek, miesiace, dni, godziny, minuty;
	long int sekundy;
	printf("Podaj swoj wiek:");
	scanf("%d", &wiek);
	miesiace = wiek * 12;
	dni = wiek * 365;
	godziny = dni * 24;
	minuty = godziny * 60;
	sekundy = minuty * 60;

	printf("Twój wiek w sekundach:\n");
	printf("%d miesiecy\n", miesiace);
	printf("%d dni\n", dni);
	printf("%d godzin\n", godziny);
	printf("%d minut\n", minuty);
	printf("%ld sekund\n", sekundy);

	
	return 0;
}
