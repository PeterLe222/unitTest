#include <stdio.h>

int multiply(int number1, int number2)
{
    return number1 * number2;
}
float divide(int number1, int number2)
{
    return number1 / number2;
}
int sum(int number1, int number2)
{
    return number1 + number2;
}
int difference(int number1, int number2)
{
    return number1 - number2;
}

int OddEven(int number)
{
    int i;
    printf("Input number is %d \n", number);
    for (i = 1; i < number + 1; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d is even \n", i);
        }
        else
        {
            printf("%d is odd \n", i);
        }
    }
}

float convert(float number)
{
    printf("%.1f Celsius = %.1f Kelvin \n", number, (number + 273.15) );
    printf("%.1f Celsius = %.1f Fahrenheit \n", number, (number * 9/5 + 32) );
}

int sortfile(int *arrayfile, int sizearray)
{

    int a,b,temp,n;

    for(a=0;a<sizearray;a++){
        for(b= a + 1;b<sizearray;b++){
            if(arrayfile == NULL) break;
            if(arrayfile[a] > arrayfile [b]){
            temp=arrayfile[b];
            arrayfile[b] = arrayfile[a];
            arrayfile[a] = temp;
            }
        }
    }
    printf("Result:\n");
    for(a=0;a<sizearray;a++){
        printf("%d\n",arrayfile[a]);
    }

}

int binary (int number)
{
    int c, k;
    printf("%d in binary number system is:\n", number);

    for (c = 31; c >= 0; c--)
    {
        k = number >> c;

        if (k & 1)
        printf("1");
        else
        printf("0");
    }
}
