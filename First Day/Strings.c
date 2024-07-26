#include<stdio.h>
#include<stdlib.h>
    int main()
    {
        char a[20];
        printf("Input Any String");
        scanf("%[A-Z]%[^A-Z]",&a);
        printf("Your string is %s",a);
        return 0;
    }
