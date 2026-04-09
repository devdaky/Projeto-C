#include <stdio.h>
#include <stdlib.h>

 int main (){
  float a,b;
  char op;
  
  printf("digite dois valores e a operacao: (+, -, *, /):" );
  scanf("%f %c %f", &a, &op, &b);
  
  if (op == '+')
   printf("%.2f\n", a + b);
    
  else if (op == '-') 
      printf("%.2f\n", a - b);

  else if (op == '*')
      printf("%.2f\n", a * b);
    
  else if (op == '/') 
    if (b !=0) {
    	  printf("%.2f\n", a / b);
      
	} else {
		 printf("Erro: divisao por zero!\n");
	}
	
	
   system("pause");
 
 return 0;
 
}
