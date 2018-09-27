#include<map>
#include<iostream>
#include<string>

void printGrades(std::map<std::string,int>&gradebook); 

int main() {
    std::map<std::string,int>gradebook;

    while(true) {
    std::cout << "What command professor plum? ";
    std::string command;
    // Get Input
    std::cin >> command;

    // pritn grades on print command
    //        printGrades(gradebook);
    gradebook["carl"] = 100;

    // quit
        if( command == "quit"){
            return 0;
        } else if( command == "print") {
            printGrades(gradebook);
        } else {
            std::cout << "\n I don't know how to " << command << " professor." << std::endl;
        }
    }
    return 0;
}

void printGrades(std::map<std::string,int>&gradebook) {
    for(auto record : gradebook) {
        std::cout << record.first << '\t' << record.second << std::endl;
    }
}