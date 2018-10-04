#include "gradebook.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void printGrades(std::map<std::string,GradeRecord>&gradebook) {
    for(auto record : gradebook) {
        std::cout << record.first << '\t' << record.second.getGrade() << std::endl;
    }
}

void addGrade(std::map<std::string,GradeRecord>&gradebook) {
    std::string student_name;
    int score = 0;
    cin >> student_name;
    cin >> score;
    GradeRecord newGrade;
    newGrade.setGrade(score);
    gradebook[student_name] = newGrade;
}

int GradeRecord::getGrade() {
    return grade;
}

void GradeRecord::setGrade(int score) {
    grade = score;
}