#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include <map>
#include <string>

class GradeRecord {
    int grade;
public:
    int getGrade() const;
    void setGrade(int score);
};

std::ostream& operator<<(std::ostream& os, const GradeRecord &record);

void printGrades(std::map<std::string,GradeRecord>&gradebook);

void addGrade(std::map<std::string,GradeRecord>&gradebook);


#endif