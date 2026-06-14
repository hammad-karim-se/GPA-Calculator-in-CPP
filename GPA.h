#ifndef GPA_H
#define GPA_H
#include "Course.h"

class GPA{
private:
    Course courses[50];
    int totalCourses;
    float totalGradePoints;
    int totalCredits;

public:
    GPA();
    void inputCourses();
    void calculateGPA();
    void displayResult();
};

#endif