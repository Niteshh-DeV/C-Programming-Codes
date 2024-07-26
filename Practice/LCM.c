#include<stdio.h>
int main()
{
  int a,b,l,i;
  printf("Enter the two numbers: ");
  scanf("%d%d",&a,&b);
  l=a>b?a:b;
  for(i=l;i<=a*b;i++)
    {
      if(i%a==0 && i%b==0)
      break;
    }
  printf("The LCM of %d and %d is %d",a,b,i);
  return 0;
}
