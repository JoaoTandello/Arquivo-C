#include <stdio.h>
#include <locale.h>
int main() {
   setlocale(LC_ALL,"");
  float n1, n2, res;
  int operador;
   
   printf ("Escolha a operação\n");
   printf ("1 - Soma\n");
   printf ("2 - Subtração\n");
   printf ("3 - Multiplicação\n");
   printf ("4 - Divisão\n");
   scanf ("%d", &operador);
   
   switch(operador)
  {
      case 1:
      
          printf("Digite o primeiro numero; ");
          scanf("%f", &n1);
          printf("Digite o segundo numero; ");
          scanf("%f", &n2);
          res = n1 + n2;
          printf ("O resultado da soma é: %.2f", res);
          break;
     
     case 2:
     
          printf("Digite o primeiro numero; ");
          scanf("%f", &n1);
          printf("Digite o segundo numero; ");
          scanf("%f", &n2);
          res = n1 - n2;
          printf ("O resultado da subtração é: %.2f", res);
          break;
     
     case 3:     
         
          printf("Digite o primeiro numero; ");
          scanf("%f", &n1);
          printf("Digite o segundo numero; ");
          scanf("%f", &n2);
          res = n1 * n2;
          printf ("O resultado da multiplicação é: %.2f", res);
          break;
          
     case 4:
     
          printf("Digite o primeiro numero; ");
          scanf("%f", &n1);
          printf("Digite o segundo numero; ");
          scanf("%f", &n2);
          res = n1 / n2;
          printf ("O resultado da divisão é: %.2f", res);
          break;
          
        default:
            break;
            return 1;
  }
  return 0;
}
    
     