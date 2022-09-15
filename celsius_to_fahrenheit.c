#include<stdio.h>

int main(void) {
    int cels = 0;
    float fahr = 0;

    printf("Insert Celsius to convert to Fahrenheit: ");
    scanf("%i", &cels);

    fahr = ((float) cels * 9.0 / 5.0) + 32.0; //casting
    
    printf("Fahrenheit: %.2f\n", fahr);

    return 0;
}