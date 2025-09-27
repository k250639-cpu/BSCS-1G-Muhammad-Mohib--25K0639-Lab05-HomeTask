#include <stdio.h>
int main() {
    int hasPrerequisite, isCourseFull;
    printf("Have you completed the prerequisite?(Yes = 1, No = 0 ):\n");
    scanf("%d", &hasPrerequisite);
    while(hasPrerequisite != 1 && hasPrerequisite != 0){
        printf("Invalid option, enter again\n");
        scanf("%d", hasPrerequisite);
    }
    printf("Is the course full? (Yes = 1, No = 0): ");
    scanf("%d", &isCourseFull);
    while(isCourseFull != 1 && isCourseFull != 0){
        printf("Invalid option, enter again\n");
        scanf("%d", isCourseFull);
    }
    if (hasPrerequisite == 1 && isCourseFull == 0) {
        printf("Enrolled successfully\n");
    }
    else if (hasPrerequisite == 0 && isCourseFull == 0) {
        printf("Cannot enroll: prerequisite missing\n");
    }
    else if (hasPrerequisite == 1 && isCourseFull == 1) {
        printf("Cannot enroll: course is full\n");
    }
    else {
        printf("Cannot enroll: prerequisite missing and course is full\n");
    }
    return 0;
}
