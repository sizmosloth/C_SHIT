#include<stdio.h>

int add(int, int);
int sub(int, int);
int prod(int, int);
float div(float, float);

int main(){
    
    int repeat = 1;
    do{
        int choice, a, b;
        printf("\nA simple Maths calculator. Choose any one option:\n1. Addition \n2. Subtraction \n3. Product \n4. Division ");
        scanf("%d", &choice);

        printf("\nEnter 1st Number: ");
        scanf("%d", &a);
        printf("\nEnter 2nd Number: ");
        scanf("%d", &b);

        switch (choice) {
            case 1 :
                printf("\nResult of Addition: %d", add(a, b));
                break;
        
            case 2 :
                printf("\nResult of Subtraction: %d", sub(a, b));
                break;

            case 3 :
                printf("\nResult of Product: %d", prod(a, b));
                break;
        
            case 4 :
                printf("\nResult of Divison: %.2f", div((float) a, (float) b));
                break;
            
            }
            printf("\n\nDo you want to Do again???. 0 for YES and 1 for NO - ");
            scanf("%d", &repeat);


    } while(repeat == 0);

    return 0;
}

int add(int x, int y){
    return x + y;
}
int sub(int x, int y){
    return x - y;
}
int prod(int x, int y){
    return x * y;
}
float div(float x, float y){
    return x / y;
}