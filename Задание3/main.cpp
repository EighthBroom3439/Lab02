#include <iostream>

int main() {
    int i = 1, j = 7;
    for (i;i<10;i++){
        std::cout << i << " x " << j << " = "<<i*j<<std::endl;
    }
    int N;
    std::cout<<"Введите число N: ";
    std::cin>>N;
    std::cout<<std::endl;
    for (i = 1; i < 10; i++) {
        std::cout << i << " x "<<N<<" = "<<i*N<<std::endl;
    }
    return 0;
}