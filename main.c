#include <stdio.h>
#include <ctype.h>

int main() {
    
    // Array med elevernas namn
    char names[5][10];
    
    // Elevernas totala poäng
    int totGradePoints[5];
    
    // Loop för att mata in namn och totalpoäng
    for (int i = 0; i < 5; i++) {
            int grade = 0;
            int gradeSum = 0;
            scanf("%s", names[i]);
            names[i][0] = toupper(names[i][0]);
            for (int j = 0; j < 13; j++) {

                scanf("%d", &grade);
                gradeSum += grade;

            totGradePoints[i] = gradeSum;
        }
        totGradePoints[i] = gradeSum;
    }
        // Variabler för att hålla reda på totalpoäng, högsta poäng, index för högsta poäng och genomsnitt
        int total = 0;
        int high = 0;
        int highestScoreIndex = 0;
        int avg = 0;

    for (int i = 0; i < 5; i++) {
        if (totGradePoints[i] > high) {
            high = totGradePoints[i];
            highestScoreIndex = i;
        }
        total += totGradePoints[i];

    }
    // Skriver ut namnet på den elev som har högst totalpoäng
    printf("%s\n", names[highestScoreIndex]);

    // Beräknar genomsnittet av totalpoängen
    avg = total / 5;

    // Skriver ut namnen på de elever som har totalpoäng under genomsnittet
    for (int i = 0; i < 5; i++) {
        if (totGradePoints[i] < avg) {
            printf("%s\n", names[i]);
        }
    }
    
    return 0;
}