#include <stdio.h>

int main()
{
     float peso; //nota av1
     float altura;
     float imc;
     
     //atribuir valores av1 e av2
     
     printf("\nEntre com o seu peso:");
     scanf("%f", &peso);
     
     printf("\nEntre com a sua altura (em cm):");
     scanf("%f", &altura);
     
         //calcular imc=peso/(altura x altura)
     
     imc=peso/ (altura * altura);
     
     //imprimir o resultado
     
     printf("Seu imc é %.0f", imc);
     

     if(imc>=31)
{    
     printf(" Obeso ");
     
}    else
{    
     if(imc>26)
{
     printf(" Peso Ideal ");
     
}
     else 
     printf(" Magro ");
     
}
     return 0;

}

