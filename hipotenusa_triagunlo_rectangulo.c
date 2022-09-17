/*get the hypotenuse of a righ triangle asking the user for the value of the 2 legs*/

#include<stdio.h>
#include<math.h>

int main(void){

    float valor1 ,valor2 , hipotenusa;

    printf("Ingresa el valor de los 2 catetos: ");
    scanf("%f",&valor1);
    scanf("%f",&valor2);

    hipotenusa = sqrt(pow(valor1,2)+ pow(valor2,2)); //sqrt sirve para sacar la raiz cuadrada y pow para elevar se coloca la variable o el numero que se quiere elevar y despues de la coma a que numero lo queres elevar.

    printf("La hipotenusa del triangulo es: %.2f", hipotenusa);
    
    return 0;
}