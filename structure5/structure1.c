#include <stdio.h>

struct Student {
    char studentName[50];  
    int math;
    int sci;
    int eng;
    float percentage;
};

int main() {
    struct Student s;

    printf("Enter the Name: ");
    scanf("%s", s.studentName);  

    printf("Enter Math marks: ");
    scanf("%d", &s.math);

    printf("Enter Science marks: ");
    scanf("%d", &s.sci);

    printf("Enter English marks: ");
    scanf("%d", &s.eng);

    
    s.percentage = (s.math + s.sci + s.eng) / 3.0;

    
    printf("\n--- Student Details ---\n");
    printf("Name       : %s\n", s.studentName);
    printf("Math       : %d\n", s.math);
    printf("Science    : %d\n", s.sci);
    printf("English    : %d\n", s.eng);
    printf("Percentage : %.2f%%\n", s.percentage);

    return 0;
}