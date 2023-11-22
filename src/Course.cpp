#include "Course.h"

Course::Course() : mCourseName("Not Provided") {}

void Course::setCourseName(std::string newCourseName) {
    mCourseName = newCourseName;
}

std::string Course::getCourseName() const {
    return mCourseName;
}
