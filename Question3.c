#include <stdio.h>

int main() {
    float a, b, c, discriminant;
    printf("Enter Coefficents accordingly:\n");
    scanf("%f %f %f", &a, &b, &c);
    while(a == 0){
        printf("This is not a quadratic equation, Try Again\n");
        scanf("%f", &a);
    }
    discriminant = (b*b) - (4*a*c);
    if(discriminant > 0){
        printf("This quadratic equation has two distinct real roots.");
    } else if(discriminant == 0){
        printf("This quadratic equation has one real root.");
    } else{
        printf("This quadratic equation has imaginary roots.");
    }
    return 0;
}
