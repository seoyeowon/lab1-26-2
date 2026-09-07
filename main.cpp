#include <iostream>
int main(){
    //int numofstudents(30); // numofstudents = 37;
    // if (numofstudents == 30) std::cout << "default\n";
    // else std::cout << "changed\n";
    // (numofstudents == 30) ? (std::cout << "default\n") : (std::cout << "changed\n");
    
    // if (numofstudents > 30) std::cout << "increased\n";
    // else if (numofstudents < 30) std::cout << "decreased\n";
    // else std::cout << "default\n";
    // if (numofstudents = 0) std::cout << "default" << std::endl;
    // std::cin >> numofstudents;
    // std::cout << numofstudents++ << std::endl;
    // std::cout << numofstudents << std::endl;
    // std::cout << ++numofstudents << std::endl;
    // std::cout << numofstudents << std::endl;
    // std::cout << sizeof(numofstudents) << std::endl;
    // std::cout << typeid(numofstudents).name() << std::endl;
    // std::cout << typeid(static_cast<double>(numofstudents)).name() << std::endl;


    int score{};
    char grade{};
    std::cout << "enter score";
    std::cin >> score;
    switch (score / 10)
    {
        case 10:
        case 9: grade = 'A'; break;
        case 8: grade = 'B'; break;
        case 7: grade = 'C'; break;
        case 6: grade = 'D'; break;
        default: grade = 'F'; break;
    }
    std::cout << score << grade << std::endl;

    return 0;
}