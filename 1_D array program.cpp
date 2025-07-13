// 1_D array program
#include <stdio.h>

int main() {
    int marks[5];
    int i, sum = 0, highest, lowest;
    float average;

    // Input marks
    printf("Enter marks of 5 students:\n");
    for(i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Initialize highest and lowest
    highest = lowest = marks[0];

    // Process data
    for(i = 0; i < 5; i++) {
        sum += marks[i];

        if(marks[i] > highest)
            highest = marks[i];

        if(marks[i] < lowest)
            lowest = marks[i];
    }

    average = sum / 5.0;

    // Output results
    printf("\n--- Results ---\n");
    printf("Average Marks: %.2f\n", average);
    printf("Highest Mark: %d\n", highest);
    printf("Lowest Mark: %d\n", lowest);

    // Pass/Fail check
    printf("\nPass/Fail Status (Pass mark = 35):\n");
    for(i = 0; i < 5; i++) {
        if(marks[i] >= 35)
            printf("Student %d: Pass (%d marks)\n", i + 1, marks[i]);
        else
            printf("Student %d: Fail (%d marks)\n", i + 1, marks[i]);
    }

    return 0;
}

