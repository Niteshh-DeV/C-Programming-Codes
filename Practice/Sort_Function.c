#include<stdio.h>
void sort_array(int[],int);
void display(int[],int);
int main()
{
    int b[20],t,i,j,n;
    printf("Enter array size:");
    scanf("%d",&n);
    printf("Enter array members:");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    sort_array(b,n);
    display(b,n);
    return 0;

}
void sort_array(int b[],int n)
{
    int i,j,t;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[i]>b[j])
            {
                t=b[i];
                b[i]=b[j];
                b[j]=t;
            }
        }
    }
}
void display(int b[],int n)
{
    int i;
    printf("your array in sorted form is:");
    for(i=0;i<n;i++)
        printf("%d \t",b[i]);

}
