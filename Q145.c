#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

struct Student getTopStudent(struct Student students[], int n) {
    struct Student top = students[0];
    
    for (int i = 1; i < n; i++) {
        if (students[i].marks > top.marks) {
            top = students[i];
        }
    }
    
    return top;
}

int main() {
    int n;
    
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }
    
    struct Student students[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%49s %d %d", students[i].name, &students[i].roll, &students[i].marks);
    }
    
    struct Student topStudent = getTopStudent(students, n);
    
    printf("Top Student: %s | Roll: %d | Marks: %d\n", 
           topStudent.name, topStudent.roll, topStudent.marks);
           
    return 0;
}
