#ifndef COURSE_H
#define COURSE_H
#include <iostream>
using namespace std;

class Course{
private:
    string grade;
    int credits;
public:
    Course();
    Course(string g, int c);
    void setCourse(string g, int c);
    string getGrade();
    int getCredits();
    float gradeToPoints();
};
#endif