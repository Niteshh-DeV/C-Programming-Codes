#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n,i,a=0,b=1,c;
  printf("Enter the number of terms: ");
  scanf("%d",&n);
  printf("The fibanacii series is: \n");
  for(i=0;i<=n;i++)
    {
      c=a+b;
      printf("%d\n",c);
      a=b;
      b=c;
    }
return 0;
}
