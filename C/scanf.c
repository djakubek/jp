#include "stdio.h"
#include "math.h"
int main(){
	double deg, rad;
	printf("Podaj kat w stopniach : ");
	scanf("%lf", &deg);
	rad = 2 * M_PI *deg /360;
	printf("%lf deg = %.10lf rad\n", deg , rad); 
	return 0;
}