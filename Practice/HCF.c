#include<stdio.h>
int main()
{
  int a,b,i,hcf;
  printf("Enter the two numbers: ");
  scanf("%d%d",&a,&b);
  for(hcf=a<b?a:b;hcf>=1;hcf--)
    {
      if(a%hcf==0 && b%hcf==0)
      break;
    }
  printf("The HCF of %d and %d is %d",a,b,hcf);
  return 0;
}
