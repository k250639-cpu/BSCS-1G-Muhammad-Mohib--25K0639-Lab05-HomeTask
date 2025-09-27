#include <stdio.h>
#include <string.h>

int main() {
    int age;
    printf("Enter age of the ticket holder:\n");
    scanf("%d", & age);
    while(age < 0){
        printf("Invalid Age, Try Again.\n");
        scanf("%d", & age);
    }
    if(age < 5){
        printf("Free");
    }else if(age > 65){
        printf("Discount");
    }else{
        printf("Standard");
    }
    return 0;
}
