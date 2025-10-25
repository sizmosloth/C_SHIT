#include<stdio.h>

int add(int, int);
int sub(int, int);
int prod(int, int);
float div(float, float);
int expo(int);

int main(){
    
    int repeat = 1;
    do{
        int choice, a, b;
        printf("\nA simple Maths calculator. Choose any one option:\n1. Addition \n2. Subtraction \n3. Product \n4. Division \n5. Exponential ");
        scanf("%d", &choice);

        switch (choice) {
            case 1 :
                printf("\nEnter 1st Number: ");
                scanf("%d", &a);
                printf("\nEnter 2nd Number: ");
                scanf("%d", &b);
                printf("\nResult of Addition: %d", add(a, b));
                break;
        
            case 2 :
                printf("\nEnter 1st Number: ");
                scanf("%d", &a);
                printf("\nEnter 2nd Number: ");
                scanf("%d", &b);
                printf("\nResult of Subtraction: %d", sub(a, b));
                break;

            case 3 :
                printf("\nEnter 1st Number: ");
                scanf("%d", &a);
                printf("\nEnter 2nd Number: ");
                scanf("%d", &b);
                printf("\nResult of Product: %d", prod(a, b));
                break;
        
            case 4 :
                printf("\nEnter 1st Number: ");
                scanf("%d", &a);
                printf("\nEnter 2nd Number: ");
                scanf("%d", &b);
                printf("\nResult of Divison: %.2f", div((float) a, (float) b));
                break;
            case 5 :
                printf("\nEnter Number: ");
                scanf("%d", &a);
                printf("\nResult of Exponential: %d", expo(a));
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
int expo(int x){
    return x * x;
}