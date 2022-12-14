//Author: Dhruuv Naik   Branch: IT  Roll no.: 39
//Write a C program to store roll no, name , percentage of 5 students using array of structure and display the records in ascending order of roll no.
#include <stdio.h>

struct student //defining structure
{
    int rn;
    char name[20];
    float p;
};

int main()
{
    struct student s[5], temp;
    int i, j;//declaration
    //Taking input from user
    printf("\n*Enter details separated by space*\n");
    for ( i = 0; i < 5; i++)
    {
        printf("\nEnter details of student %d :", i+1);
        printf("\nStudent's roll number, name and percentage : ");
        scanf("%d %s %f", &s[i].rn, &s[i].name, &s[i].p);
    }

     for ( i = 0; i < 4; i++) //loop for sorting
    {
        for ( j = i+1; j < 5; j++) //this loop compares the roll no of students
        {
            if (s[j].rn < s[i].rn) //sorts in ascending order of roll no.
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
            
        }
        
    }

    printf("\n**********************\nStudent details are :\n**********************\n");
    for ( i = 0; i < 5; i++)
    {
        printf("Roll no: %d\t Name: %s\t Percentage: %.2f\n", s[i].rn, s[i].name, s[i].p );
    }  
}