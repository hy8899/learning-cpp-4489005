#include "records.h"

Student::Student(int new_id, std::string new_name) 
    : id{new_id}, name{new_name} {}

int Student::get_id() const {
    return id;
}
std::string Student::get_name() const {
    return name;
}

Course::Course(int i, std::string n, unsigned char c)
    : id{i}, name{n}, credits{c} {}

int Course::get_id() const{
    return id;
}
std::string Course::get_name() const{
    return name;
}
int Course::get_credits() const{
    return credits;
}

Grade::Grade(int s, int c, char g)
    : student_id{s}, course_id{c}, grade{g} {}

int Grade::get_student_id() const{
    return student_id;
}
int Grade::get_course_id() const{
    return course_id;
}
char Grade::get_grade() const{
    return grade;
}