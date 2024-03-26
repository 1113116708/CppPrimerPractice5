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

void test(){
    double dval = 1;
    double *pd = &dval;
    double *pd2 = pd;
    // * 是解引用符号
    std::cout << "pd = " << pd << std::endl;
    std::cout << "*pd = " << *pd << std::endl;
    std::cout << "pd2 = " << pd2 << std::endl;
    std::cout << "*pd2 = " << *pd2 << std::endl;

    // 位*pd赋值就是为pd所指向的对象赋值
    *pd = 2;
    std::cout << "dval = " << dval << std::endl;
    std::cout << "pd = " << pd << std::endl;
    std::cout << "*pd = " << *pd << std::endl;
}

void ex_2_18(){
    int a = 1;
    int b = 2;
    int *p = &a;
    std::cout << "p = " << p << std::endl;
    p = &b;
    std::cout << "change p = " << p << std::endl;
    *p = 99;
    std::cout << "change b = " << b << std::endl;
}

int main(){
    // ex_2_4();
    // ex_2_8();
    // test();
    ex_2_18();
    return 0;
}