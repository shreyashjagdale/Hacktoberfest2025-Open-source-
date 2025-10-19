#include <stdio.h>
#include <string.h>



struct Student {
    int roll;
    char name[50];
    int joinYear;
    char address[100];
    int standard;
};

struct Student students[];
    
int main() {
    
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

 
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll number: ");
        scanf("%d", &students[i].roll);
        printf("Name: ");
        scanf(" %s", students[i].name);
        printf("Join year: ");
        scanf("%d", &students[i].joinYear);
        printf("Address: ");
        scanf(" %s", students[i].address);
        printf("Standard: ");
        scanf("%d", &students[i].standard);
    }

   
    
   int searchYear;
    printf("Enter the join year to search for student: ");
    scanf("%d", &searchYear);

    
   
    printf("Students who joined in %d:\n", searchYear);
    for (int i = 0; i < n; i++) {
        if (students[i].joinYear == searchYear) {
            printf("Name: %s\n", students[i].name);
            printf("Roll Number: %d\n", students[i].roll);
            printf("Address: %s\n", students[i].address);
            printf("Standard: %d\n", students[i].standard);
           
        }
        else {
            printf("No students found who joined in %d.\n", searchYear);
    }

    }



    
    int searchRoll;
    printf("Enter roll number to search: ");
    scanf("%d", &searchRoll);

   
    for (int i = 0; i < n; i++) {
        if (students[i].roll == searchRoll) {
            printf("\nStudent found:\n");
            printf("Name: %s\n", students[i].name);
            printf("Roll Number: %d\n", students[i].roll);
            printf("Join Year: %d\n", students[i].joinYear);
            printf("Address: %s\n", students[i].address);
            printf("Standard: %d\n", students[i].standard);
          
            break;
        }
        else {
            printf("Student with roll number %d not found.\n", searchRoll);
        }
    }


    return 0;
}
