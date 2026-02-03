#include <stdio.h>
int main() {
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    if (marks >= 90 && marks <= 100) {
        printf("Grade A");
    }
    else if (marks >= 80 && marks <= 100) {
        printf("Grade B");
    }
    else if (marks >= 70 && marks <= 100) {
        printf("Grade C");
    }
    else if (marks >= 60 && marks <= 100) {
        printf("Grade D");
    }
    else if (marks >= 50 && marks <= 100) {
        printf("Grade E");
    }
    else {
        printf("FAIL");
    }
    return 0;
}
