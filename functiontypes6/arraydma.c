#include <stdio.h>
#include <stdlib.h> 

struct Student {
    char name[30];
    int maths, sci, eng;
    float perc;
};

int main() {
    struct Student *s;// *S => it means pointer s

    s = (struct Student *)malloc(sizeof(struct Student));

    printf("Enter student name: ");
    scanf("%s", s->name);

    printf("Enter marks in Maths, Science and English: ");
    scanf("%d %d %d", &s->maths, &s->sci, &s->eng);

    s->perc = (s->maths + s->sci + s->eng) / 3.0;

    printf("Name: %s | Maths: %d | Science: %d | English: %d | Percentage: %.2f%%\n", s->name, s->maths, s->sci, s->eng, s->perc);

    free(s);
    return 0;
}
