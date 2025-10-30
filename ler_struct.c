#include <stdio.h>
void std_det(){
    struct {
        int rno;
        float marks;
        char name[50];
        struct {
            int d, m, y;
        }doa,dob;
    }s[5];
    int i;
    for(i = 0; i < 2; i++){
        printf("Enter details for student %d\n", i + 1);
        printf("Enter Roll number of student %d\n", i + 1);
        scanf("%d",&s[i].rno);
        printf("Enter Marks of student %d\n", i + 1);
        scanf("%f",&s[i].marks);
        printf("Enter name of student %d\n", i + 1);
        scanf("%s",s[i].name);
        printf("Enter Date of admission of student %d\n", i + 1);
        scanf("%d %d %d",&s[i].doa.d, &s[i].doa.m, &s[i].doa.y);
        printf("Enter Date of Birth of student %d\n", i + 1);
        scanf("%d %d %d",&s[i].dob.d, &s[i].dob.m, &s[i].dob.y);
        printf("\n");
    }
    printf("=====Details of student=====\n");
    for(i = 0; i < 2; i++){
        printf("Details of student %d",i + 1);
        printf("\nroll number = %d\n", s[i].rno);
        printf("marks = %.2f\n", s[i].marks);
        puts(s[i].name);
        printf("Date of admission = %d-%d-%d\n",s[i].doa.d, s[i].doa.m, s[i].doa.y);
        printf("Date of Birth = %d-%d-%d\n",s[i].dob.d, s[i].dob.m, s[i].dob.y);
        printf("\n");
    }
}
int main() {
    std_det();
    return 0;
}