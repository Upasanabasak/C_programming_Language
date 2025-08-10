/*

union unionName{
 data_type member1;
 data_type member2;
 ....
};

*/

#include <stdio.h>
union Data
{
    int i;
    float f;
    char c;
};
int main()
{
    union Data sristi;
    sristi.i = 10;
    printf("Data as Integer: %d\n",sristi.i);
    sristi.f = 220.5;
    printf("Data as Float: %.2f\n",sristi.f);
    sristi.c = 'A';
    printf("Data as Character: %c\n",sristi.c);
    return 0;
}