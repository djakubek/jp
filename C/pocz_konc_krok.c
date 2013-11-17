/*program, który wypisze tabelkę wartości pierwiastka kwadratowego.
 Program ma pytać o

    wartość poczatkową
    wartość końcową
    krok dla argumentu

i wypisywać tabelkę w podanym zakresie. Liczby powinny 
być wypisywane z dokładnością czterech miejsc po przecinku. 
Na przykład, jeżeli podamy 1 jako wartość poczatkową, 2 jako 
końcową i 0.5 jako krok, powinismy dostać:

1.0000  1.0000
1.5000  1.2247
2.0000  1.4142
*/
#include <stdio.h>
#include <math.h>

int main () {

  double a, b, c;

  printf("Podaj wartość początkową: \n");
  scanf("%lf", &a);

  printf("Podaj wartość koncową: \n");
  scanf("%lf", &b);

  printf("Podaj wartość kroku dla argumentu: \n");
  scanf("%lf", &c);

  while (a <= b) {
  printf("%6.4lf %6.4lf\n", a, sqrt(a));
  a=a+c;
  }
  
  return 0;
}
/* Przy kompilacji trzeba dodac cc -Wall nazwa_pliku.c -lm */