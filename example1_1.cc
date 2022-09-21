#include <iostream>

// Class function

class Student1{
    std::string _name;
    int _age;
    
   public:   
    Student1(){
        _name = "UNKNOWN";
        _age = -1;
    }

    void printInfo(){
        std::cout << _name << std::endl;
        std::cout << _age << std::endl;
    }
};

int main(){
    Student1 s1;
    s1.printInfo();
    // std::cout << s1._age << std::endl;
}