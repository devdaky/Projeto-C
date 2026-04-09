#include <stdio.h>
#include <stdlib.h>

 int main (){
  int segundos, horas, minutos, resto;
 
 printf("digite os segundos:");
 scanf("%d", &segundos);

    horas = segundos / 3600;
    resto = segundos % 3600;

    minutos = resto / 60;
    segundos = resto % 60;

    printf("%d h %d min %ds\n", horas, minutos, segundos);
 
 system ("pause");
 
 return 0;
}
 
 
