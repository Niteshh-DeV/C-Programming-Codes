#include<stdio.h>
#include<stdlib.h>
int main()
{
    for(int i=65;i<=122;i++)
    {
        if(i>90 && i<97)
            continue;
        else
            printf("%d=%c \n",i,i);

    }
    return 0;
}
