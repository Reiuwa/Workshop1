#ifndef STUDENT_H
#define STUDENT_H

#include <string>

struct Student {
    Student(std::string firstName, std::string lastName);

    std::string firstName;
    std::string lastName;
};

#endif
