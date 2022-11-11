#include<stdio.h>

struct Student{
    int id;
    float cgpa;
    char name[20];
};

int main(){
    struct Student s;
    printf("Enter your id: ");
    scanf("%d",&s.id);
    printf("Enter your CGPA: ");
    scanf("%f",&s.cgpa);
    printf("Enter your Name: ");
    scanf("%s",s.name);

    printf("Name: %s\n id: %d\n cgpa: %.2f\n",s.name,s.id,s.cgpa);


    return 0;
}
