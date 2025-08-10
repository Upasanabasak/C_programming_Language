#include <stdio.h>
#include <string.h>
int main() 
{
    FILE *file;
    int size, i;
    int roll_no;
    char name[30];
    float score;

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
        scanf("%d", &roll_no);

        printf("Enter name (no spaces): ");
        scanf("%29s", name);

        printf("Enter score: ");
        scanf("%f", &score);

        fprintf(file, "roll: %d , name: %s , score: %.2f\n",roll_no, name, score);
    }

    // Reset file pointer to beginning for reading
    rewind(file);

    printf("\n=====================\n");

    // Read phase
    for (i = 0; i < size; i++)
    {
        if (fscanf(file,"roll: %d , name: %29s , score: %f\n",&roll_no, name, &score) == 3)
        {
            printf("Your roll no.: %d\n", roll_no);
            printf("Your name: %s\n", name);
            printf("Your score: %.2f\n\n", score);
        }
         else 
        {
            printf("Error reading record %d\n", i+1);
        }
    }

    fclose(file);
   return 0;
}