#include <stdio.h>

int main() {
    int choice, numStudents = 0;
    char names[50][50];   // max 50 students, name max 49 chars
    int marks[50][5];     // 5 subjects per student
    int total[50];        // total marks per student

    do {
        printf("\nMenu:\n1. Add Student\n2. Submit Marks\n3. Show Total Marks\nChoice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: {
                int n;
                printf("How many students to add? ");
                scanf("%d", &n);
                for(int i = 0; i < n; i++) {
                    printf("Enter name of student %d: ", numStudents + 1);
                    scanf("%s", names[numStudents]);
                    total[numStudents] = 0; // initialize total
                    numStudents++;
                }
                break;
            }

            case 2: {
                int s;
                printf("Enter student number (1 to %d): ", numStudents);
                scanf("%d", &s);
                s--; // array index
                printf("Enter marks of 5 subjects for %s: ", names[s]);
                total[s] = 0;
                for(int i = 0; i < 5; i++) {
                    scanf("%d", &marks[s][i]);
                    total[s] += marks[s][i];
                }
                break;
            }

            case 3: {
                printf("\nStudent\tTotal Marks\n");
                for(int i = 0; i < numStudents; i++)
                    printf("%s\t%d\n", names[i], total[i]);
                break;
            }

            default:
                printf("Invalid choice!\n");
        }

        printf("\nDo you want to continue? 0 = YES, 1 = NO: ");
        scanf("%d", &choice);
    } while(choice == 0);

    return 0;
}
