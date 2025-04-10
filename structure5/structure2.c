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
    struct Student t[30];
    

    for (int i = 0; i < 2; i++)
    {
    printf("Enter the Name: ");
    scanf("%s",t[i].studentName);  

    printf("Enter Math marks: ");
    scanf("%d", &t[i].math);

    printf("Enter Science marks: ");
    scanf("%d", &t[i].sci);

    printf("Enter English marks: ");
    scanf("%d", &t[i].eng);

    
    t[i].percentage = (t[i].math + t[i].sci + t[i].eng) / 3;

    
    }
   for (int i = 0; i < 2; i++)
   {
    printf("Name       : %s\n", t[i].studentName);
    printf("Math       : %d\n", t[i].math);
    printf("Science    : %d\n", t[i].sci);
    printf("English    : %d\n", t[i].eng);
    printf("Percentage : %f\n", t[i].percentage);

   }
    
   
    return 0;
}