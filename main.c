#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float a,b,res;
    char operator;
    printf("Enter Calcuations: \n");
    scanf(" %f %c %f",&a,&operator,&b);


    switch(operator)
    {
        case '+':
        res=a+b;
        //printf("%d",res);
        break;

        case '-':
        res=a-b;
        //printf("%d",res);
        break;

        case '*':
        res=a*b;
        //printf("%d",res);
        break;

        case '/':
        res=a/b;
        //printf("%d",res);
        break;

        default: 
        goto fail;
       // printf("Inavlid entry");

    }
    printf("%.9g%c%.9g = %.6g\n\n",a,operator,b,res);
    goto exit;
    fail:
    printf("Fail \n ");

    exit:
    return 0;



 
    return 0;




}