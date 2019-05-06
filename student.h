//
// Created by mikh- on 05.05.2019.
//

#ifndef LABA_6_STUDENT_H
#define LABA_6_STUDENT_H

#include <string>
class student{
    std::string name;
    std::string sname;
    std::string group;
public:
    student(std::string  name = "Null", std::string sname = "Null", std::string group = "Null");
    void get_Student ();
    void set_Student ();
    ~student(){};
    friend std::ostream &operator<<(std::ostream &out, const student &student);
};

#endif //LABA_6_STUDENT_H
