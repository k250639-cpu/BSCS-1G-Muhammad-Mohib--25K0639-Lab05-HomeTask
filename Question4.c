#include <stdio.h>
#include <string.h>

int main() {
    char username[] = "mohib";   //Already stored username
    char password[] = "8888";    //Already stored password
    char uName[50], passW[50];
    printf("Enter Username: ");
    scanf("%s", uName);
    if(strcmp(uName, username) == 0) {
        printf("Enter Password: ");
        scanf("%s", passW);
        if(strcmp(passW, password) == 0) {
            printf("Login Successful\n");
        } else {
            printf("Incorrect password\n");
        }
    } else {
        printf("Username not found\n");
    }
    return 0;
}
