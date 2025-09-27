#include <stdio.h>
#include <ctype.h>
int main() {
    char room, action;
    printf("Enter room (Living Room = L, Kitchen = K): ");
    scanf(" %c", &room);
    room = toupper(room);
    printf("Enter action (Lights = L, Thermostat = T): ");
    scanf(" %c", &action);
    action = toupper(action);
    switch (room) {
        case 'L': 
            switch (action) {
                case 'L':
                    printf("Adjusting ambient lighting.\n");
                    break;
                case 'T':
                    printf("Setting living room temperature.\n");
                    break;
                default:
                    printf("No applicable action for Living room.\n");
            }
            break;

        case 'K': 
            switch (action) {
                case 'L':
                    printf("Turning on bright task lighting.\n");
                    break;
                case 'T':
                    printf("Setting kitchen temperature.\n");
                    break;
                default:
                    printf("No applicable action for Kitchen.\n");
            }
            break;

        default:
            printf("No such room available to do action.\n");
    }

    return 0;
}
