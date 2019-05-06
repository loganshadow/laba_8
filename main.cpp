#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include "student.h"
#include "complex.h"
#include "Car.h"

using std::cout;
using std::cin;
using std::endl;
int main() {
//8_1
    std::vector <student> v1;
    student s;
    int j;
    cout << "Enter quantity of students" << endl;
    cin >> j;
    for(int i = 0; i < j; i++) {
        s.set_Student();
        v1.push_back(s);
    }
    for(int i = 0; i < j; i++) {
        cout << v1[i] << endl;
    }
//8_2
    std::list <Complex> list1;
    Complex c1;
    cout << "Enter quantity of numbers" << endl;
    cin >> j;
    for(int i = 0; i < j; i++) {
        cin >> c1;
        list1.push_back(c1);
    }
    for (auto i = list1.begin(); i != list1.end(); i++){
        cout << *i << endl;
    }
//8_3
    std::queue <Car> q1;
    Car costumer;
    cout << "Enter quantity of costumers" << endl;
    cin >> j;
    for(int i = 0; i < j; i++) {
        costumer.set_brand();
        q1.push(costumer);
    }
    while (!q1.empty()){
        q1.front().get_brand();
        cout << " Washed " << endl;
        q1.pop();
    }
    cout << "All costumers are serviced" << endl;
        return 0;
}