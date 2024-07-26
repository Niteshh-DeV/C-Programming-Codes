#include<stdio.h>
struct employee
{
 char ename[10];
 int sal;
};
struct employee emp[5];
int i, j;
int main()
{
 for(i = 0; i < 3; i++)
 {
 printf("\nEnter %dst Employee record:\n", i+1);
 printf("\nEmployee name:\t");
 scanf("%s", emp[i].ename);
 printf("\nEnter Salary:\t");
 scanf("%d", &emp[i].sal);
 }
 printf("The information of three employees are\n");
 for(i = 0; i < 3; i++)
 {
 printf("\nEmployee name is %s\t",emp[i].ename);
 printf("\nThe salary of employee is %d\t",emp[i].sal );
 }
return 0;
}
