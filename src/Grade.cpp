#include "Grade.h"

Grade() {
    mGrade = -1;
}
Grade(int grade) {
    mGrade = grade;
}
void setGrade(int newGrade) {
    mGrade = newGrade;
}
int getGrade() const {
    return mGrade;
}
