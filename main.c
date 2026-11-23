#include <stdio.h> 
#include <string.h>

struct student {
    int ID;
    char name[30];
    float grade;
};

int main(void) {
    struct student s1;
    s1. ID = 2616569;
    strcpy(s1.name, "haein");
    s1.grade = 4.3;

    printf("student information: %i, %s, %f", s1.ID,s1.name, s1.grade);
 
    return 0;
}
