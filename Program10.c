// Problem Statement : Accept radius from user and calculate the area of circle

// Step1 : Undestand the problem statement
// Conclusion : We are going to use the formula as PI*R*R

// Step 2 : Algorithm
/*
    START
        Accept radius from user and store into RADIUS
        Create variable as PI and store value 3.14
        Calculate area PI * RADIUS * RADIUS
        Display the value of Area to the user
    STOP
*/


#include<stdio.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function name :     CalaculateArea
//  Description :       It is used to calculate are of circle
//  Input :             Float
//  Output :            Float
//  Auther name :       Piyush Manohar Khairnar
//  Date :              02/10/2023
//
///////////////////////////////////////////////////////////////////////////

#define PI 3.14

float CalculateArea(float fValue)
{
    auto float fAns = 0.0f;

    fAns = PI * fValue * fValue;
    return fAns; 
}

///////////////////////////////////////////////////////////////////////////
//
//  Entry Point function
//
///////////////////////////////////////////////////////////////////////////
int main()
{
    auto float fRadius = 0.0f;
    auto float fArea = 0.0f;

    printf("Enter the radius of circle : \n");
    scanf("%f",&fRadius);

    fArea = CalculateArea(fRadius);

    printf("Area of circle is : %f\n",fArea);

    return 0;
}