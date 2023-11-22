#ifndef COURSE_H
#define COURSE_H

/* 
    Header Class for Courses.
    Include:    Course name
*/

class Course: public Student {
    public:
        Course();
        Course(std::string courseName);
        void setCourseName(std::string newCourseName);
        std::string getCourseName() const;
        ~Course();
    private:
        std::string mCourseName;
}





#endif
