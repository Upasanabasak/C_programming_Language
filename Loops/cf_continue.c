/*
To_Do List:

1. phy
2. chem
3. math
4. homework
*/
#include<stdio.h>
int main()
{
 for(int i=1;i<=10;i++)
 {
    if(i==5)//if i is equal to 5
    {
        continue;//skip the rest the loop for this location
    }
    printf("%d ",i);//print the current value of i
 }
 return 0;
}