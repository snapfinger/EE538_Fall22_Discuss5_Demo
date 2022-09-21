#include <iostream>

// Class function

class Student{
    std::string _name;
    int _age;
public:
    Student(){
        _name = "UNKNOWN";
        _age = -1;
    }
    
    Student(const std::string& name, int age){
        _name = name;
        _age = age;
    }

    int getAge(){
        return _age;
    }

    void printInfo(){
        std::cout << _name << std::endl;
        std::cout << _age << std::endl;
    }
};

int main(){
    // 1. no parameter
    Student s1;
    s1.printInfo();

    std::cout << std::endl;

    // 2. with parameter
    Student s2("Trojan", 22);
    s2.printInfo();

    std::cout << std::endl;

    // 3. copy
    Student s3 = s2;
    s3.printInfo();
}