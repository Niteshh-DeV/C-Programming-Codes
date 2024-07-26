#include <stdio.h>
int main(){
char name[20]="KATHMANDU"; // char *name;
int length;// name ="KATHMANDU";
char *cptr= name;
printf("%s\n",name);
while(*cptr !='\0')
 {
printf("%c is stored at address %d\n",*cptr,cptr);
cptr++;
 }
length=cptr-name;
printf("\n length of string = %d\n",length);
return 0;
}

