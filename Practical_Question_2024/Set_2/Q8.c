/* Define a structure named point, which contains two members x and y co-ordinates. Define another structure line, 
    which contains two points pl and p2 as members. 
    Write a program in C to take two lines as input and check whether they are parallel or not.
*/

#include <stdio.h>

// Structure to represent a point
struct point
{
    float x;
    float y;
};

// Structure to represent a line with two points
struct line
{
    struct point p1;
    struct point p2;
};

int main()
{
    struct line l1, l2;
    float slope1, slope2;

    // Input first line
    printf("Enter coordinates of first line (x1 y1 x2 y2): ");
    scanf("%f %f %f %f", &l1.p1.x, &l1.p1.y, &l1.p2.x, &l1.p2.y);

    // Input second line
    printf("Enter coordinates of second line (x1 y1 x2 y2): ");
    scanf("%f %f %f %f", &l2.p1.x, &l2.p1.y, &l2.p2.x, &l2.p2.y);

    // Calculate slopes
    slope1 = (l1.p2.y - l1.p1.y) / (l1.p2.x - l1.p1.x);
    slope2 = (l2.p2.y - l2.p1.y) / (l2.p2.x - l2.p1.x);

    // Check for parallel lines
    if(slope1 == slope2)
        printf("\nThe lines are parallel.\n");
    else
        printf("\nThe lines are not parallel.\n");

    return 0;
}
