#include "Course.h"

Course::Course() : mCourseName("Not Provided"), mCourseNumber(0), mCourseUnits(0) {}

void Course::setCourseName(std::string newCourseName) {
    mCourseName = newCourseName;
}

void Course::setCourseNumber(int newCourseNumber) {
    mCourseNumber = newCourseNumber;
}

void Course::setCourseUnits(int newCourseUnits) {
    mCourseUnits = newCourseUnits;
}

std::string Course::getCourseName() const {
    return mCourseName;
}

int Course::getCourseNumber() const {
    return mCourseNumber;
}

int Course::getCourseUnits() const {
    return mCourseUnits;
}
