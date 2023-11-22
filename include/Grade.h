#ifndef GRADE.H
#DEFINE GRADE.H

/* 
    Header Class for Grades.
    Include:    Grade
*/

class Grade: public Student {
    public:
        Grade();
        Grade(int grade);
        void setGrade(int newGrade);
        int getGrade() const;
        ~Grade();
    private:
        std::string mGrade;
}





#endif
