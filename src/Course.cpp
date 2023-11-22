#include "course.h"

Course() {
    mCourseName = "Not Provided";
}
Course(std::string courseName) {
    mCourseName = courseName;
}
void setCourseName(std::string newCourseName) {
    mCourseName = newCourseName;
}
std::string getCourseName() const {
    return mCourseName;
}