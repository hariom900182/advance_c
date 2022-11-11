#include <stdio.h>
#include <math.h>
union Student
{
    char letterGrade;
    int roundedGrade;
    float exactGrade;
};

void main()
{
    union Student var1, var2;
    var1.exactGrade = 3.0;
    var1.letterGrade = 'A';
    var1.roundedGrade = 5;
    // only rounded grade will contain value from below 3 lines
    printf("v1 rounded grade : %d\n", var1.roundedGrade);
    printf("v1 exact grade : %f\n", var1.exactGrade);
    printf("v1 letter grade : %c\n", var1.letterGrade);
    var2.letterGrade = 'c';
    var2.roundedGrade = 1;
    printf("v2 rounded grade : %d\n", var2.roundedGrade);
    var2.exactGrade = 2.0;
    printf("v2 exact grade : %f\n", var2.exactGrade);
}
