 #include<stdio.h>
 int main()
{
    int a;
    int *p;
    a=10;
    p=&a;
    printf("%d\t%d\t%d",*p,p,*&a);

    return 0;

}
