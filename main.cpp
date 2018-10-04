#include "gradebook.h"
#include <iostream>
#include <map>
#include <string>


int main() {
    std::map<std::string,GradeRecord>gradebook;

    while(true) {
    std::cout << "What command professor plum? ";
    std::string command;
    // Get Input
    std::cin >> command;

        if( command == "quit"){
            return 0;
        } else if( command == "print") {
            printGrades(gradebook);
        } else if( command == "add") {
            addGrade(gradebook);
        } else {
            std::cout << "\n I don't know how to " << command << " professor." << std::endl;
        }
    }
    return 0;
}
