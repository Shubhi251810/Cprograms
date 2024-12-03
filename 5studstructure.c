#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    int age;
    float marks;
};

int main() {
    
    struct Student students[5];
    int i;
    
    for (i = 0; i <=5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        
        
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);
        
        printf("Name: ");
        scanf("%s", &students[i].name);
        
        printf("Age: ");
        scanf("%d", &students[i].age);
        
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        
        printf("\n");
    }

    
    printf("\nDisplaying student details:\n");
    for (i = 0; i <= 5; i++) {
        printf("\nStudent %d details:\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNo);
        printf("Name: %s", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Marks: %.2f\n", students[i].marks);
    }
