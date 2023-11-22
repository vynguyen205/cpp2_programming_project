#ifndef GRADE.H
#DEFINE GRADE.H

/* 
    Header Class for Grades.
    Include:    Grade
*/

class Transcript: public Student {
    public:
        Transcript();
        Transcript(Student student);
        void setStudent(int newStudent);
        int getStudent() const;
        ~Transcript();
    private:
        std::string mStudent;
}





#endif