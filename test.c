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
            printf("3 x 3 = %d \n",multiply(3, 3));
            printf("3 / 2 = %f \n",divide(3, 2));
            printf("3 + 3 = %d \n",sum(3, 3));
            printf("3 - 3 = %d \n",difference(3, 3));
            printf("\n");
        }

        else if (choice == 2){
            OddEven(5);
            printf("\n");
        }

        else if (choice == 3){
            convert(12);
            printf("\n");
        }

        else if (choice == 4){
            FILE *fp;
            fp = fopen("file.txt","r");
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
            binary (81);
            printf("\n\n");
        }
        else {
            printf("Please choose number from 1 to 5 \n\n");
        }
    }
}



