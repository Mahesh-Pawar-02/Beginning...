        #include<stdio.h>

        float CalculateArea(float fValue)
        {
            auto float fAns = 0.0f;
            auto const float PI = 3.14f;
            fAns = PI * fValue * fValue;
            return fAns; 
        }

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