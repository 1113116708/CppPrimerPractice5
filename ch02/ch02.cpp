#include<iostream>

void ex_2_4(){
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl;
    std::cout << u - u2 << std::endl;
    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl;
    std::cout << i - i2 << std::endl;
    std::cout << i - u << std::endl;
    std::cout << u - i << std::endl;
}

void ex_2_8(){
    std::cout << 2 << "\115\012";
    std::cout << 2 << "\t\115\012";
    std::cout << 2 << "M" << std::endl;
    std::cout << 2 << "\t" << "M" << std::endl;
}

int main(){
    // ex_2_4();
    ex_2_8();
    return 0;
}