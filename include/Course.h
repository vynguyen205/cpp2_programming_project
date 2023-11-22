#pragma once

#include <string>

/*
    Header Class for Courses.
    Include:    Course name
*/

class Course {
    public:
        Course();
        void setCourseName(std::string newCourseName);
        std::string getCourseName() const;
        ~Course();
    private:
        std::string mCourseName;
};
