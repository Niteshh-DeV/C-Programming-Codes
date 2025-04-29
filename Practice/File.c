#include <stdio.h>

int main() {
    FILE *fptr;
    char name[20];
    int roll;
    float marks;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your roll number: ");
    scanf("%d", &roll);

    printf("Enter your marks: ");
    scanf("%f", &marks);


    fptr = fopen("Student.dat", "w");
    fprintf(fptr, "Name: %s\n", name);
    fprintf(fptr, "Roll number: %d\n", roll);
    fprintf(fptr, "Marks: %f\n", marks);

    fclose(fptr);

    return 0;
}