/*Pogram wczytujacy liczbe rzeczywista i wypisujacy jej pierwiastek kwadratowy */
/* Przy kompilkacji dodac " -lm " , inaczej wyskoczy blad przy linkierze*/
#include "stdio.h"
#include "math.h"
#include <stdlib.h> //Biblioteka dla exit 

int main()
{
	double x, z;

	printf("Wpisz dodatnia liczbe rzeczywista: ");
	scanf("%lf", &x);
	printf("Wpisano liczbe rzeczywista : %lf\n", x);

		while (x < 0){ //Wykonanie dzialan za pomoca petli while
			printf("Wpisales liczbe ujemna: %lf\n", x);
			printf("Wpisz liczbe dodatnia: ");
			scanf("%lf", &x);
		}
// Inna mozliwos przeprowadzenia dzialan z wykorzystaniem if'a
//		if (x < 0){
//			printf("Error: pierwiastek kwadratowy z %lf nie istnieje\n", x);
//			exit(1); /*"exit" wymusza koniec dzialania programu */
//	else { 
			z = sqrt(x);
		printf("Pierwiastek kwadratowy z %lf to %lf\n", x, z); /* "x" i "y" sa argumentami przekazanymi w miejsca %lf odpowiednio */
		return 0;
//	}
	
}