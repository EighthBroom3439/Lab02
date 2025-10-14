#include <iostream>


int main() {
    int a = 1,b;
    long long c = 1;
    for (int i = 8; i < 16; i++) {
        a *= i;
    }
    std::cout<<a<<std::endl;
    std::cout<<"Введите а: ";
    std::cin>>a;
    std::cout<<std::endl;
    for (a;a<=20;a++ ) {
        c *=a;
    }
    std::cout<<c<<std::endl<<"Введите в: ";
    std::cin>>b;
    std::cout<<std::endl;
    c = 1;
    for (int i=1;i <=b;i++ ) {
        c *= i;
    }
    std::cout<<c<<std::endl;
    std::cout<<"Введите а и в: ";
    std::cin>>a>>b;
    std::cout<<std::endl;
    c = 1;
    for (a;a<=b;a++) {
        c *= a;
    }
    std::cout<<c;
}