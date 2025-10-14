#include <iostream>
int main() {
    int x,y,z;
    std::cout<<"Enter X, Y and Z:";
    std::cin>>x>>y>>z;
    if (abs(x) % 2 != 0 and abs(y) % 2 != 0) {
        std::cout<<"Condition 1 is True"<<std::endl;
    }else {
        std::cout<<"Condition 1 is False"<<std::endl;
    }
    if ((x < 20 and y >= 20) or (x>=20 and y < 20)) {
        std::cout<<"Condition 2 is True"<<std::endl;
    }else {
        std::cout<<"Condition 2 is False"<<std::endl;
    }
    if (x == 0 or y == 0) {
        std::cout<<"Condition 3 is True"<<std::endl;
    }else {
        std::cout<<"Condition 3 is False"<<std::endl;
    }
    if (x < 0 and y < 0 and z < 0) {
        std::cout<<"Condition 4 is True"<<std::endl;
    }else {
        std::cout<<"Condition 4 is False"<<std::endl;
    }
    if ( (abs(x) % 5 ==0 and y*z % 5 != 0) or (abs(y) % 5 == 0 and x*z % 5 !=0) or (abs(z) % 5 == 0 and x*y % 5 != 0)) {
        std::cout<<"Condition 5 is True"<<std::endl;
    }else {
        std::cout<<"Condition 5 is False"<<std::endl;
    }
    if (x > 100 or y > 100 or z > 100) {
        std::cout<<"Condition 6 is True"<<std::endl;
    }else {
        std::cout<<"Condition 6 is False"<<std::endl;
    }

}