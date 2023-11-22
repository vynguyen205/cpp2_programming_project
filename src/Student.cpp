#include "Student.h"

Student::Student() {}

void Student::setStudentName(std::string studentName) {
    mStudentName = studentName;
}

void Student::setStudentID(std::string StudentID) {
    mStudentID = StudentID;
}

std::string Student::getStudentName() const {
    return mStudentName;
}

std::string Student::getStudentID() const {
    return mStudentID;
}
