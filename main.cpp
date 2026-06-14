#include "GPA.h"

int main(){
    cout << "\n------ GPA Calculator ------\n" << endl;
    GPA g;
    g.inputCourses();
    g.calculateGPA();
    g.displayResult();
    return 0;
}