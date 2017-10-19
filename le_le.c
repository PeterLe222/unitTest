/*
 * Unit test
 *
*/

#include <stdio.h>
#include "ex2as1.h"


int main(void) {

    while (1)
    {
        printf("1. Pocket calculator \n");
        printf("2. Odd or even number from 1 to your input \n");
        printf("3. Celsius converts to Kelvin and Fahrenheit \n");
        printf("4. Input text file and see them sorted from smallest to largest \n");
        printf("5. Input integer and see it in binary form \n \n");

        int choice;

        printf("Enter your choice: ");
        scanf("%d",&choice);
        printf("\n");

        if (choice == 1){

            int op, a, b;

            printf("Enter your first number: ");
            scanf("%d",&a);
            printf("\n");
            printf("Enter your second number: ");
            scanf("%d",&b);
            printf("\n");

            printf("1. multiply \n");
            printf("2. divide  \n");
            printf("3. sum \n");
            printf("4. difference \n");
            printf("\n");
            printf("Enter your choice: ");
            scanf("%d",&op);
            printf("\n");

            if(op==1) {printf("%d x %d = %d \n",a,b,multiply(a, b));}
            else if(op==2) {printf("%d / %d = %d \n",a,b,divide(a, b));}
            else if(op==3) {printf("%d + %d = %d \n",a,b,sum(a,b));}
            else if(op==4) {printf("%d - %d = %d \n",a,b,difference(a, b));}
            else{printf("ERROR\n");}
            printf("\n");
        }

        else if (choice == 2){
            int a;
            printf("Enter a number: ");
            scanf("%d",&a);
            printf("\n");
            OddEven(a);
            printf("\n");
        }

        else if (choice == 3){
            float a;
            printf("Input Celsius degree: ");
            scanf("%f",&a);
            printf("\n");
            convert(a);
            printf("\n");
        }

        else if (choice == 4){

            char str1[20];

            printf("Enter file txt name: ");
            scanf("%s", str1);

            FILE *fp;
            fp = fopen(str1,"r");
            char c [81];
            int n, size =0;
            int array[81];

            for (n = 0; n < 81; n++)
            {
                if (fgets (c, sizeof(c), fp) == NULL)
                    break;
                array[n] = atoi(c);
                size++;
            }

            sortfile(array, size);
            printf("\n");
        }

        else if (choice == 5){
            int a;
            printf("Enter a number: ");
            scanf("%d",&a);
            printf("\n");
            binary (a);
            printf("\n\n");
        }
        else {
            printf("Please choose number from 1 to 5 \n\n");
        }
    }
}




