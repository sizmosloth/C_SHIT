#include <stdio.h>
#include <string.h>

int main() {

    int choice, numStudents = 0;
    char names[500][50];   
    int marks[500][5];     
    int total[500];        
    int percent[500];

    do {
        printf("\nMenu:\n1. Add Student\n2. Submit Marks\n3. Show Total Marks\n4. Percentage \n5. Student Search \nChoice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: {
                int n;
                printf("How many students to add? ");
                scanf("%d", &n);
                for(int i = 0; i < n; i++) {
                    printf("Enter name of student %d: ", numStudents + 1);
                    scanf("%s", names[numStudents]);
                    total[numStudents] = 0; 
                    numStudents++;
                }
                break;
            }

            case 2: {
                int s;
                printf("Enter student number (1 to %d): ", numStudents);
                scanf("%d", &s);
                s--; 

                total[s] = 0;
                for(int i = 0; i < 5; i++) {
                    printf("Enter marks of subject %d for %s: ",i + 1, names[s]);
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
            case 4: {
                for(int i = 0; i < numStudents; i++){
                    percent[i] = (total[i]*100)/500;
                }
                printf("\nStudent\tPercentage\n");
                for(int i = 0; i < numStudents; i++){
                    printf("%s\t%d\n", names[i], percent[i]);
                }
                break;
            }
            case 5: {
                char sname[50];
                int found = 0;
                printf("Enter Student name to search: ");
                scanf("%s", sname);
                for(int i = 0; i < numStudents; i++){
                    if(strcmp(names[i], sname) == 0){
                        printf("Details of the Student: ");
                        for(int j = 0; j < 5; j++){
                            printf("Marks of Subject %d = %d\n", j + 1, marks[i][j]);
                        }
                        printf("Total = %d \nPercentage = %d", total[i], percent[i]);
                        found = 1;
                    }
                }
                if (found != 1) printf("Student not found!!!");
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
