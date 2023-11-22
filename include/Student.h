#ifndef STUDENT.H
#DEFINE STUDENT.H
#include "grade.h"
#include "course.h"
#include "studentlist.h"
#include "transcript.h"

/* 
    Header Class for Student.
    Include:    Student ID, Name, Classes, 
                Grade for each class, GPA.
*/

class Student {
    public:
        Student();
        Student(std::string studentName, std::string studentID);
        void setStudentName(std::string studentName);
        void setStudentID(std::string studentID);
        std::string getStudentName() const;
        std::string getStudentID() const;
        ~Student();
    private:
        std::string mStudentName;
        std::string mStudentID;
}





#endif
