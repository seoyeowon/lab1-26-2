#include <iostream>
int main(){
    int numofstudents(30); numofstudents = 37;
    std::cin >> numofstudents;
    std::cout << numofstudents << std::endl;
    // std::cout << sizeof(numofstudents) << std::endl;
    // std::cout << typeid(numofstudents).name() << std::endl;
    // std::cout << typeid(static_cast<double>(numofstudents)).name() << std::endl;
    return 0;
}