#include <iostream>
#include <cstring>

#define MAX_NAME 20
#define POPULATION 10
#define MAX_SCHOOL_NAME 30

using namespace std;

class Human {
private:
    char strName[MAX_NAME];
    int iNum;
public:
    Human();
    void setiNum(int);
    void sayiNum();
};

class Student : public Human {
private:
    char strSchoolName[MAX_SCHOOL_NAME];
public:
    Student();
    void saySchoolName();
};


int main() {
    
    Human HumanArr[POPULATION]; Student StudentArr[POPULATION];
    
    StudentArr[2].setiNum(2);
    StudentArr[2].sayiNum();
    StudentArr[2].saySchoolName();
        
    
    return 0;
}

Human::Human() {
    iNum = 0;
}

void Human::setiNum(int i) {
    iNum = i;
}

void Human::sayiNum() {
    cout<<"HumanNum::sayiNum: "<<iNum<<endl;
}

Student::Student() {
    strcpy(strSchoolName, "Emporia State University");
}

void Student::saySchoolName() {
    cout<<"School Name: "<<strSchoolName<<"."<<endl;
}
