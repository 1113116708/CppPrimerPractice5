#include<iostream>
#include "Sales_item.h"

using namespace std;

void ex1_3(){
    cout << "hello world" << endl;
}

void ex1_4(){
    int a, b;
    cin >> a >> b;
    cout << "a x b = " << a * b << endl;
}

void ex1_5(){
    int a, b;
    cin >> a;
    cin >> b;
    cout << "a x b = ";
    cout << a * b;
    cout << endl;
}

void ex1_6(){
    int v1 = 2, v2 = 2;
    cout << "The sum of " << v1
         << " and " << v2
         << " is " << v1 + v2 << std::endl;
}

// void ex1_7(){
//     /* 正常注释 /* 嵌套注释 */ 正常注释*/
// }

void ex1_8(){
    std::cout << "/*";
    std::cout << "*/";
    // std::cout << /* "*/" */;
    std::cout << /* "*/" /* "/*" */;
}

void ex1_9(){
    int sum = 0, val = 50;
    while (val <= 100)
    {
        sum += val;
        ++val;
    }
    cout << " sum 50 ~ 100 = " << sum << endl;
}

void ex1_10(){
    int val =10;
    while (val >= 0)
    {
        cout << "val = " << val << endl;
        --val;
    }  
}

void ex1_11(){
    int a, b, x, y;
    cin >> a >> b;
    if(a < b){
        x = a;
        y = b;
    }
    else{
        x = b;
        y = a;
    }

    while (x <= y)
    {
        cout << x << endl;
        ++ x;
    }
}

void ex1_13_1(){
    int sum = 0;
    for(int i = 50; i <= 100; ++i){
        sum += i;
    }
    cout << "sum = " << sum << endl;
}

void ex1_13_2(){
    for(int i = 10; i >= 1; --i){
        cout << "i = " << i << endl;
    }
}

void ex1_13_3(){
    int a, b;
    cin >> a >> b;
    for(int i = a; i <= b; i++){
        cout << "ex1_12_3 i = " << i << endl;
    }
}

void ex1_16(){
    int a = 0, sum = 0;
    while(cin >> a){
        sum += a;
    }
    cout << "sum = " << sum << endl;
}

void ex1_20(){
    for (Sales_item item; std::cin >> item; std::cout << item << std::endl);
}

void ex1_21(){
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    std::cout << item1 + item2 << std::endl;
}

// 每次for循环都是重新创建了一个新的Sales_item的对象 item，他的生命周期仅在for循环中
void ex1_22_error(){
    for(Sales_item item; std::cin >> item; std::cout << "item" << std::endl){
        item += item;
        std::cout << item << std::endl;
    };
}

void ex1_22(){
    Sales_item sum_item;
    std::cin >> sum_item;
    for(Sales_item item; std::cin >> item; std::cout << "item" << std::endl){
        sum_item += item;
    };
    std::cout << sum_item << std::endl;
}

// 看了答案，自己重写的
void ex1_23_and_24(){
    Sales_item all_item;
    if(std::cin >> all_item){
        Sales_item item;
        while (std::cin >> item)
        {
            if (all_item.isbn() == item.isbn()){
                all_item += item;
            }
            else{
                std::cout << all_item << std::endl;
                all_item = item;
            }
        }
        std::cout << all_item << std::endl;   
    }
}

int main(){
    // ex1_3();
    // ex1_4();
    // ex1_5();
    // ex1_6();
    // ex1_7();
    // ex1_8();
    // ex1_9();
    // ex1_10();
    // ex1_11();
    // ex1_13_1();
    // ex1_13_2();
    // ex1_13_3();
    // ex1_16();
    // ex1_20();
    // ex1_21();
    // ex1_22_error();
    // ex1_22();
    ex1_23_and_24();

    return 0;
}