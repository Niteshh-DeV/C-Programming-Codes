#include<stdio.h>
#include<stdlib.h>
    int main()
    {
       int p , t , r ;
       float I;
       printf("Enter Value of Principle or P");
       scanf("%d",&p);
       printf("Enter Time or T");
        scanf("%d",&t);
        printf("Enter Rate or R");
         scanf("%d",&r);

            I=(p*t*r)/100 ;

        printf("The simple interest is %f",I);
        return 0;
    }

