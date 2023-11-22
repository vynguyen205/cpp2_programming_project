#pragma once

#include <string>

/*
    Header Class for Student.
    Include:    Student ID, Name, Classes,
                Grade for each class, GPA.
*/

class Student {
    public:
        Student();
        void setStudentName(std::string studentName);
        void setStudentID(std::string studentID);
        std::string getStudentName() const;
        std::string getStudentID() const;
        ~Student();
    private:
        std::string mStudentName;
        std::string mStudentID;
};
