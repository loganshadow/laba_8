//
// Created by mikh- on 05.05.2019.
//

#include <iostream>
#include "student.h"

using std::cout;
using std::cin;
using std::endl;

student::student(std::string name, std::string sname, std::string group): name(name), sname(sname), group(group) {}
void student::get_Student() {
    cout << "Student name: " << name << endl;
    cout << "Student second name: " << sname << endl;
    cout << "Student group: " << group << endl;
}
void student::set_Student() {
    cout << "Enter name" << endl;
    cin >> name;
    cout << "Enter second name" << endl;
    cin >> sname;
    cout << "Enter group" << endl;
    cin >> group;
}
std::ostream &operator<<(std::ostream &out, const student &student) {
    out << "Name: " << student.name << endl <<  "Surname: " <<  student.sname << endl << "Group: " << student.group << endl;
    return out;
}