#include <iostream>

int main() {
    using byte = unsigned char;
    std::pair<byte, byte> positionA;
    std::pair<byte,byte> positionB;
    std::cout<<"Введите вертикальA и горизонтальA: ";
    std::cin >>positionA.first >> positionA.second;
    std::cout<<"Введите вертикальB и горизонтальB: ";
    std::cin>>positionB.first >> positionB.second;
    if (positionA.first == positionB.first or positionB.second == positionA.second) {
        std::cout<<"Ладья угрожает"<<std::endl;
    }else {
        std::cout<<"Ладья не угрожает"<<std::endl;
    }
    if (abs(positionA.first-positionB.first)==abs(positionA.second-positionB.second)) {
        std::cout<<"Слон угрожает"<<std::endl;
    }else {
        std::cout<<"Слон не угрожает"<<std::endl;
    }
    if (abs(positionA.first - positionB.first)==1 or abs(positionA.second - positionB.second)==1) {
        std::cout<<"Король угрожает"<<std::endl;
    }else {
        std::cout<<"Король не угрожает"<<std::endl;
    }
    if ( (positionA.first == positionB.first or positionB.second == positionA.second) or (abs(positionA.first-positionB.first)==abs(positionA.second-positionB.second)) or (abs(positionA.first - positionB.first)==1 or abs(positionA.second - positionB.second)==1)) {
        std::cout<<"Ферзь угрожает"<<std::endl;
    }else {
        std::cout<<"Ферзь не угрожает"<<std::endl;
    }
    if (positionB.second - positionA.second == 1 and positionA.first == positionB.first) {
        std::cout<<"Пешка дойдет ходом"<<std::endl;
    }else {
        std::cout<<"Пешка не дойдет ходом"<<std::endl;
    }
    if (positionB.second - positionA.second == -1 and abs(positionA.first - positionB.first)==1) {
        std::cout<<"Пешка бьёт"<<std::endl;
    }else {
        std::cout<<"Пешка не бьёт"<<std::endl;
    }

    return 0;

}