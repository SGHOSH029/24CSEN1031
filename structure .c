#include <stdio.h>
#include <string.h>
struct student {
    int rollno;
    char name[15];
    float age;
    char gender;
    char subject[15];
};
int main() {
    struct student s1;
printf("size of student structure is %d", sizeof(s1));
s1.rollno=2024155359;
strcpy(s1.name,"sunita");
s1.age=19.5;
s1.gender='F';
strcpy(s1.subject,"biotechnology");
printf("\nRoll no: %d", s1.rollno);
printf("\nName: %c", s1.name);
printf("\nAge: %f", s1.age);
printf("\nGender: %c", s1.gender);
printf("\nSubject: %s", s1.subject);
}
