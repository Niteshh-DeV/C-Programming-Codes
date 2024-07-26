#include<stdio.h>
int main()
{
struct time
{
int hrs;
int mins;
};
struct date
{
int day;
char month[20];
int year;
};
struct flightschedule
{
int flightno;
struct time departuretime;
struct time arrivaltime;
struct date scheduledate;
};
struct flightschedule myflight;
printf("Enter the departure time in hours");
scanf("%d", &myflight.departuretime.hrs);
printf("Enter the departure time in minutes");
scanf("%d", &myflight.departuretime.mins);
printf("Enter the arrival time in hours");
scanf("%d", &myflight.arrivaltime.hrs);
printf("Enter the arrival time in Mins");
scanf("%d", &myflight.arrivaltime.mins);
printf("Enter the day of flight");
scanf("%d", &myflight.scheduledate.day);
printf("Enter the month of flight");
scanf("%s", myflight.scheduledate.month);
printf("Enter the year of flight");
scanf("%d", &myflight.scheduledate.year);
printf("The detail information of flight is\n");
printf("The flight time is %d : %d O-clock\n",myflight.departuretime.hrs,myflight.departuretime.mins);
printf("The arrival time is %d :%d O-clock\n", myflight.arrivaltime.hrs,myflight.arrivaltime.mins);
printf("The day of arrival of flight is %d th of %s %d",myflight.scheduledate.day,myflight.scheduledate.month, myflight.scheduledate.year);
return 0;
}
