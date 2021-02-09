#include <stdio.h>

int main() {
    int i, j, max_std, min_std;
    int subjects = 5, students = 10;
    int a[subjects][students];
    double average_marks_subjects[subjects], average_marks_student[students];
    double sum_students = 0, sum_subjets = 0;

    for ( i = 0; i < subjects; ++i) {
        for ( j = 0; j < students; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    int sub_count = 0, std_count = 0;
    for ( i = 0; i < subjects; ++i) {
        sum_students = 0;
        sum_subjets = 0;
        for ( j = 0; j < students; ++j) {
            sum_subjets += a[i][j];
            sum_students += a[j][i];

        }
        average_marks_subjects[sub_count++] = sum_subjets / subjects;
        average_marks_student[std_count++] = sum_students / students;

    }

    for (i = 0; i < students; ++i)
        printf("Averge Marks for Student %d : %lf\n", i + 1, average_marks_student[i]);
    printf("\n");

    for ( i = 0; i < students; ++i)
        printf("Averge Marks for Subject %d : %lf\n", i + 1, average_marks_subjects[i]);
    printf("\n");

    for ( i = 0; i < subjects; ++i) {
        int max = 0, min = 101; // Assumming max marks for each subjects is 100
        for (j = 0; j < students; ++j) {
            if (max < a[i][j]) {
                max = a[i][j];
                max_std = j;
            }
            if (min > a[i][j]) {
                min = a[i][j];
                min_std = j;
            }
        }
        printf("Student with max marks in subj %d : %d\n", i + 1, max_std + 1);
        printf("Student with min marks in subj %d : %d\n\n", i + 1, min_std + 1);
    }
    return 0;
}