// Wap in C that accepts date as input in dd/mm/yyyy format and print next date if the input is valid. 

#include <stdio.h>

int main()
{
    int date, month, year;

    printf("\nEnter date & month & year (dd/mm/yyyy) format : ");
    scanf("%d %d %d", &date, &month, &year);

    // Check for year
    if( year > 1000 && year <= 9999)
    {
        // check for month
        if( month >= 1 && month <= 12)
        {
            // check for date
            if((date >= 1 && date <= 31) && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12))
                {
                    printf("\nDate is valid.");
                    printf("\nNext Date : ");
                    date++; // 01. 12. 2000
                    if(date > 31)
                    {
                        date = 1;
                        month++;
                    }
                    if(month > 12)
                    {
                        month = 1;
                        year++;
                    }
                    printf("%02d/%02d/%04d", date, month, year);
                }

            else if((date >= 1 && date <= 30) && (month == 4 || month == 6 || month == 9 || month == 11))
            {
                printf("\nDate is valid.");
                printf("\nNext Date : ");
                    date++; // 30. 04. 2000
                    if(date > 30)
                    {
                        date = 1;
                        month++;
                    }
                    printf("%02d/%02d/%04d", date, month, year);
            }
              
            else if((date >= 1 && date <= 28) && month == 2)
            {
                printf("\nDate is valid.");
                printf("\nNext Date : ");
                    date++; // 28. 02. 2000
                    if(date > 28)
                    {
                        date = 1;
                        month++;
                    }
                    printf("%02d/%02d/%04d", date, month, year);
            }
               
            else if((date == 29 && month == 2) && ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)))
            {
                printf("\nDate is valid.");
                printf("\nNext Date : ");
                date++; // 29. 02. 2004
                if(date > 29)
                {
                    date = 1;
                    month++;
                }
                printf("%02d/%02d/%04d", date, month, year);
            }    
            else
                printf("\nDate is invalid.");
        }
        else
            printf("\nMonth is invalid.");
    }
    else
        printf("\nYear is invalid.");
    return 0;
}