#include<stdio.h>
#include<string.h>
struct Students
{
    char name[20];
    int rollno;
    char faculty[20];
    struct dob
    {
        int day;
        int month;
        int year;
    };
    struct dob date;
};
int main ()

{   
    int n;
    printf("Enter the number of students:\n");
    scanf("%d",&n);
    struct Students s[n] ;

    for(int i=0;i<n;i++)
    {
        printf("Enter the name of student : \n");
        scanf("%s",s[i].name);
        printf("Enter the roll number of student :\n");
        scanf("%d",&s[i].rollno);
        printf("Enter the faculty of student :\n");
        scanf("%s",s[i].faculty);
        printf("Enter the date of birth of student (dd mm yyyy):\n");
        scanf("%d %d %d",&s[i].date.day,&s[i].date.month,&s[i].date.year);
    }
    
    printf("The details of the students are:\n");
    for(int i=0;i<n;i++)
    {
        printf("Name: %s\n",s[i].name);
        printf("Roll Number: %d\n",s[i].rollno);
        printf("Faculty: %s\n",s[i].faculty);
        printf("Date of Birth: %d/%d/%d\n",s[i].date.day,s[i].date.month,s[i].date.year);
    }

    printf("The students belongs to CSIT faculty are:\n");
    for(int i=0;i<n;i++)
    {
        if(strcmp(s[i].faculty,"CSIT" || "csit")==0)
        {
            printf("Name: %s\n",s[i].name);
            printf("Roll Number: %d\n",s[i].rollno);
            printf("Faculty: %s\n",s[i].faculty);
            printf("Date of Birth: %d/%d/%d\n",s[i].date.day,s[i].date.month,s[i].date.year);
        }
    }
    return 0;
}