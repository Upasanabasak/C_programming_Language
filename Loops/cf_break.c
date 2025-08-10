/*
jump statement- break
The 'break' statement is used to exit from a loop or switch statement prematurely.
*/

#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        if(i==6)// if i is equal toi 6
        {
            break;//exit the loop
        }
        //print the currnt value of i
        //this will print numbers 
       printf("%d \n",i);//print the current value of i
    }
    return 0;
}