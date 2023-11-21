#include "student.h"

Student() {
    mStudentName = "Not Provided";
    mStudentID = "Not Provided";
}
Student(std::string studentName, std::string StudentID) {
     mStudentName = studentName;
     mStudentID = StudentID;
}
void set_name(std::string studentName) {
    mStudentName = studentName;
}
void setStudentID(std::string StudentID) {
    mStudentID = StudentID;
}
std::string get_name() const {
    return mStudentName;
}
std::string getStudentID() const {
    return mStudentID;
}
