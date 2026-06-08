#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maths, science, english, total;
    float  average;
    char grade;
    char *result;

    //Inputs
    printf("Enter Mathematics marks (out of 100): ");
    scanf("%d",&maths);
    printf("Enter Science marks (out of 100): ");
    scanf("%d",&science);
    printf("Enter English marks (out of 100): ");
    scanf("%d",&english);

    //Calculations
    total = maths + science + english;
    average = total / 3.0;

    //Grade system
    if (average>=80)
        grade = 'A';
    else if (average>=70)
        grade = 'B';
    else if (average>=60)
        grade = 'C';
    else if (average>=50)
        grade = 'D';
    else
        grade = 'F';

    //Pass/Fail
    if (maths >= 40 && science >= 40 && english >= 40)
    result = "PASS";
else
    result = "FAIL";

    //Output
    printf("\nTotal: %d\nAverage: %.2f\nGrade: %c\nResult: %s\n",total,average,grade,result);
    return 0;
}
