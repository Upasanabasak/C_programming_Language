/*
Hotel Reservation Record

contains structurs :
    guestName{
        fistName;
        lastName;
        },
    guestAge,
    guestDOB{
        day;
        month;
        year;
    },
    guestEmail{
        name;
        domain;
    },
    checkInDate{
        day;
        month;
        year;
    },
    checkOutDate{
        day;
        month;
        year;
    },
    roomType,


room rent
type    |  price
-------------------
single  |  $100
double  |  $150
suite   |  $200   

living duration = checkOutDate - checkInDate

totalCost = room rent * living duration
*/

#include<stdio.h>
#include<string.h>
struct GuestFullname
{
    char firstname[20];
    char lastname[20];
};
struct GuestDOB
{
    int day;
    int month;
    int year;
};
struct GuestAge
{
    int age;
};
struct guestEmail
{
    char username[20];
    char domain[20];
};
struct GuestcheckInDate
{
    int day;
    int month;
    int year;
};
struct GuestcheckOutDate
{
    int day;
    int month;
    int year;
};
struct GuestRoomtype
{
    int price;
    int single;
    int doublee;
    int suite;
};
struct Guest
{
    struct GuestFullname fullname;
    struct GuestDOB dob;
    struct GuestAge age;
    struct guestEmail mail;
    struct GuestcheckInDate indate;
    struct GuestcheckOutDate outdate;
    struct GuestRoomtype room;
};
int main()
{
    struct Guest guest;
    int living_duration=0,totalCost=0,opt=0,n=0;
    printf("\nEnter your First Name: ");
    scanf("%s",guest.fullname.firstname);
    printf("\nEnter your Last Name: ");
    scanf("%s",guest.fullname.lastname);
    printf("\nEnter your DOB(date,month,year): ");
    scanf("%d %d %d",&guest.dob.day,&guest.dob.month,&guest.dob.year);
    printf("\nEnter your Age: ");
    scanf("%d",&guest.age);
    printf("\nEnter your Email username: ");
    scanf("%s",guest.mail.username);
    printf("\nEnter your Email  domain name: ");
    scanf("%s",guest.mail.domain);
    printf("\nEnter your Entry Date(date,month,year): ");
    scanf("%d %d %d",&guest.indate.day,&guest.indate.month,&guest.indate.year);
    // m=guest.outdate.month-guest.indate.month;
    // y=guest.outdate.year-guest.indate.year;
    printf("\nEnter your Exit Date(date,month,year): ");
    scanf("%d %d %d",&guest.outdate.day,&guest.outdate.month,&guest.outdate.year);
    living_duration=guest.outdate.day-guest.indate.day;
    printf("\nRoom Type:");
    printf("\n1. Single \n2. Double  \n3. suite ");
    printf("\nEnter your choise: ");
    scanf("%d",&opt);
    n=opt;
    switch (opt)
    {
    case 1:
        printf("\nRoom Rent Type:Single.");
        totalCost=living_duration*100;
        printf("\nTotal Cost:%d rupee",totalCost);
        break;
    case 2:
        printf("\nRoom Rent Type:Double.");
        totalCost=living_duration*150;
        printf("\nTotal Cost:%d rupee",totalCost);
        break;
    case 3:
        printf("\nRoom Rent Type:Suite.");
        totalCost=living_duration*200;
        printf("\nTotal Cost:%d rupee",totalCost);
        break;
    default:
        printf("\nInvalid Room Type.");
    }
    printf("\n================================================================");
    printf("\n\t***HOTEL BOOKING RECIPT***");
    printf("\nYour Name:%s %s",guest.fullname.firstname,guest.fullname.lastname);
    printf("\nYour DOB:%d/%d/%d",guest.dob.day,guest.dob.month,guest.dob.year);
    printf("\nYour Age:%d",guest.age);
    printf("\nYour mail no.:%s@%s",guest.mail.username,guest.mail.domain);
    printf("\nYour Entry Date:%d/%d/%d",guest.indate.day,guest.indate.month,guest.indate.year);
    printf("\nYour Exit Date:%d/%d/%d",guest.outdate.day,guest.outdate.month,guest.outdate.year);
    switch (n)
    {
    case 1:
        printf("\nRoom Rent Type:Single.");
        totalCost=living_duration*100;
        printf("\nTotal Cost:%d rupee",totalCost);
        break;
    case 2:
        printf("\nRoom Rent Type:Double.");
        totalCost=living_duration*150;
        printf("\nTotal Cost:%d rupee",totalCost);
        break;
    case 3:
        printf("\nRoom Rent Type:Suite.");
        totalCost=living_duration*200;
        printf("\nTotal Cost:%d rupee",totalCost);
        break;
    default:
        printf("\nInvalid Room Type.");
    }
    printf("\n\t   VISIT AGAIN");
    printf("\n\t***THANK YOU***");
    return 0;
}