#include<stdio.h>
int main()
{
    int n[5];
    int sum=0;
    float avg;
    int i;

    printf("Enter The N:");
    for(i=0;i<5;i++)
    {
    scanf("%d",&n[i]);
    sum=sum+n[i];

    }
    avg=sum/5;
    printf("Average=%f",avg);
    return 0;

}
