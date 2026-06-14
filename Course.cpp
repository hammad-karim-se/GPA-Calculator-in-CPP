#include "Course.h"

Course::Course(){
    grade = "";
    credits = 0;
}

Course::Course(string g, int c){
    grade = g;
    credits = c;
}

void Course::setCourse(string g, int c){
    grade = g;
    credits = c;
}

string Course::getGrade(){
    return grade;
}

int Course::getCredits(){
    return credits;
}

float Course::gradeToPoints(){

    if(grade=="A" || grade=="a") return 4.0;
    else if(grade=="A-" || grade=="a-") return 3.67;
    else if(grade=="B+" || grade=="b+") return 3.33;
    else if(grade=="B" || grade=="b") return 3.0;
    else if(grade=="B-" || grade=="b-") return 2.67;
    else if(grade=="C+" || grade=="c+") return 2.33;
    else if(grade=="C" || grade=="c") return 2.0;
    else if(grade=="C-" || grade=="c-") return 1.67;
    else if(grade=="D+" || grade=="d+") return 1.33;
    else if(grade=="D" || grade=="d") return 1.0;
    else if(grade=="F" || grade=="f") return 0.0;
    return -1;
}