#include<stdio.h>

//  Logical OR  || -> If any of the condition is TRUE then it enters inside the if 
//  Logical AND  && -> If all of the conditions are TRUE then it enters inside the if 

void DisplayClass(float fMarks)
{
    if((fMarks < 0.00) || (fMarks > 100.00))    // Filter
    {
        printf("Invalid Marks...\n");
    }

    if((fMarks >= 0.0) && (fMarks < 35.00))
    {
        printf("You are fail..\n");
    }
    else if((fMarks >= 35.00) && (fMarks < 50.00))
    {
        printf("Your class is Pass class\n");
    }
    else if((fMarks >= 50.00) && (fMarks < 60.00))
    {
        printf("Your class is Second class\n");
    }
    else if((fMarks >= 60.00) && (fMarks < 75.00))
    {
        printf("Your class is First class\n");
    }
    else if((fMarks >= 75.00) && (fMarks <= 100.00))
    {
        printf("Your class is First with Distinction\n");
    }
}

int main()
{
    float fValue = 0.0f;

    printf("Enter your percentage : \n");
    scanf("%f",&fValue);

    DisplayClass(fValue);

    return 0;
}