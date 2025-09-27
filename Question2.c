#include <stdio.h>

int main() {
    int powerState;
    char lightColor;

    printf("Enter whether power is ON or OFF:\nPower On = 1\nPower Off = 0\n");
    scanf("%d", &powerState);

    while (powerState != 0 && powerState != 1) {
        printf("Invalid State, Enter Again: ");
        scanf("%d", &powerState);
    }

    if (powerState == 1) {
        printf("Enter the color of the traffic light.\nRed --> 'R'\nYellow --> 'Y'\nGreen --> 'G'\n");
        scanf(" %c", &lightColor);

        while (!(lightColor == 'R' || lightColor == 'r' ||
                 lightColor == 'Y' || lightColor == 'y' ||
                 lightColor == 'G' || lightColor == 'g')) {
            printf("Invalid Color of traffic light, Enter Again: ");
            scanf(" %c", &lightColor);
        }

        if (lightColor == 'R' || lightColor == 'r') {
            printf("Stop\n");
        } else if (lightColor == 'Y' || lightColor == 'y') {
            printf("Caution\n");
        } else if (lightColor == 'G' || lightColor == 'g') {
            printf("Go\n");
        }
    } else {
        printf("Signal Off\n");
    }

    return 0;
}
