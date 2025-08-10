/*
filename = scores.txt

write score of  5 students to file
roll: <roll_number> , name: <student_name> , score: <score>

read the scores from file and print them

After reading , find the highest score and print the roll and name with the score
*/
#include <stdio.h>
#include<stdlib.h>
#include <string.h>
struct student
{
    int roll_no;
    char name[30];
    float score;
};
int main() 
{
    FILE *file;
    struct student s,max;
    int size,i;
    // Open for read/write: create new or truncate existing
    file = fopen("example.txt", "w+");
    if (file == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    printf("Enter the number of students: ");
    if (scanf("%d", &size) != 1 || size <= 0)
    {
        printf("Invalid number.\n");
        fclose(file);
        return 1;
    }

    // Write phase
    for (i = 0; i < size; i++)
    {
        printf("\nEnter roll no.: ");
        scanf("%d", &s.roll_no);

        printf("Enter name (no spaces): ");
        scanf("%29s",s.name);

        printf("Enter score: ");
        scanf("%f", &s.score);

        fprintf(file, "roll: %d , name: %s , score: %.2f\n",s.roll_no,s.name,s.score);
    }
    
    for(i=0;i<size;i++)
    {
        if(s.score>max.score)
        max=s;
    }
    printf("\n%.2f",max);
    // Reset file pointer to beginning for reading
    rewind(file);

    printf("\n=====================\n");

    // Read phase
    for (i = 0; i < size; i++)
    {
        if (fscanf(file,"roll: %d , name: %29s , score: %f\n",&s.roll_no,s.name,&s.score) == 3)
        {
            printf("\nThe Highest score");
            printf("\nYour roll no.: %d",max.roll_no);
            printf("\nYour name: %s",max.name);
            printf("\nYour score: %.2f",max.score);
        }
         else 
        {
            printf("Error reading record %d\n", i+1);
        }
    }

    fclose(file);
   return 0;
}