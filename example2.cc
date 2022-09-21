#include <iostream>

// const keyword: 
// you can pass a non-const to a const
// you cannot pass a const to a non-const

int CalculateTax1(const int &income){
    return income * 0.3;
}

int CalculateTax2(int &income){
    return income * 0.3;
}

int main(){
    int income1 = 1000;
    std::cout << CalculateTax1(income1) << std::endl;

    int income2 = 1000;
    // const int income2 = 1000;
    std::cout << CalculateTax2(income2) << std::endl;
}
