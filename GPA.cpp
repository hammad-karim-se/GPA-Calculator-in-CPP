#include "GPA.h"
#include <iomanip>

GPA::GPA(){
    totalCourses = 0;
    totalGradePoints = 0;
    totalCredits = 0;
}

void GPA::inputCourses(){
    cout << "Enter Total Number of Courses: ";
    cin >> totalCourses;
    
    for(int i=0; i<totalCourses; i++){
        string grade;
        int credits;
        cout << "\n--- Course " << i+1 << " ---" << endl;
        cout << "Enter Grade: ";
        cin >> grade;
        cout << "Enter Credit Hours: ";
        cin >> credits;
        if(credits <= 0){
            cout << "Invalid Credits!" << endl;
            i--;
            continue;
        }

        courses[i].setCourse(grade, credits);
        if(courses[i].gradeToPoints() == -1){
            cout << "Invalid Grade!" << endl;
            i--;
            continue;
        }
    }
}

void GPA::calculateGPA(){
    totalGradePoints = 0;
    totalCredits = 0;

    for(int i=0; i<totalCourses; i++){
        totalGradePoints += courses[i].gradeToPoints() * courses[i].getCredits();
        totalCredits += courses[i].getCredits();
    }
}

void GPA::displayResult(){
    float gpa = totalGradePoints / totalCredits;
    cout << endl;
    cout << setw(30) << "--- Result ---" << endl;
    cout << "Grade Points: " << totalGradePoints << setw(25) << "Total Credits: " << totalCredits << endl;
    cout << "GPA: " << fixed << setprecision(2) << gpa << endl;
}