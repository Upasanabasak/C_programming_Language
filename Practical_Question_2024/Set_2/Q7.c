/* Define a structure named Time with members hours, minutes and seconds. 
    Write a C program to input two times, add them and display the result in proper time format.
*/

#include<stdio.h>
#include<string.h>

struct time
{
    int seconds;
    int minutes;
    int hours;
};

int main()
{
    struct time t1;
    struct time t2;
    int result,a=0,b=0,c=0,d=0,e=0;

    printf("\nFormat the time like:hours minutes seconds.");
    printf("\nEnter the first time: ");
    scanf("%d %d %d",&t1.hours,&t1.minutes,&t1.seconds);

    printf("\nEnter the second time: ");
    scanf("%d %d %d",&t2.hours,&t2.minutes,&t2.seconds);

    printf("---------------------------");

    a=t1.hours+t2.hours;
    b=t1.minutes+t2.minutes;   // 12+10=22
    c=t1.seconds+t2.seconds;  //20+55=75

    if(c>60)     // 75>60
    {
        d=c-60;   //75-60=15
        b++;     //22+1=23
    }

    if(b>60)   //23>60
    {
        e=b-60;
        c++;
    }

    printf("\nResultant Time:%d:%d:%d",a,b-e,d);
    
    return 0;
}