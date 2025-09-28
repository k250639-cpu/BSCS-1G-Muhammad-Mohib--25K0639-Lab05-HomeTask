#include <stdio.h>
int main() {
    int permissions;
    printf("Enter the permission level: ");
    scanf(" %d", &permissions);
    if (permissions & 4){
        printf("Access granted: full control\n");
    }else if((permissions & 2) && (permissions & 1)){
        printf("Access granted: read & write\n");
    }else if(permissions & 1){
        printf("Access granted: read only\n");
    }else{
        printf("Access denied\n");
    }
    return 0;
}
