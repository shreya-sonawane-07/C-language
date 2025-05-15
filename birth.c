#include <stdio.h>

// Define a structure to hold a date
struct Date {
    int day;
    int month;
    int year;
};

int main() {
    // Declare a variable dob of type Date
    struct Date dob;

    // Input the date of birth and store in structure
    printf("Enter date of birth (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &dob.day, &dob.month, &dob.year);

    // Print the date of birth
    printf("Date of birth: %02d/%02d/%d\n", dob.day, dob.month, dob.year);

    return 0;
}