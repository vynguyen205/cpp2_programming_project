#pragma once

#include <string>

/*
    Baxter, Tyler (Team Leader)
    Nguyen, Vy

    Project: Grade Report
    CS A250
    Fall 2023
*/

class Course {
    public:
        Course();
        
        std::string getCourseName() const;
        int getCourseNumber() const;
        int getCourseUnits() const;
        
        void setCourseName(std::string newCourseName);
        void setCourseNumber(int courseNumber);
        void setCourseUnits(int courseUnits);

        //TODO: IMPLETEMENT mystery()

        ~Course();

    private:
        std::string mCourseName;
        int mCourseNumber;
        int mCourseUnits;
};
