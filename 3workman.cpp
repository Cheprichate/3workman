#include <iostream>
int fir;
int sec;
int thir;
int max;
int min;

int main()
{
    setlocale(LC_ALL, "Russian");

    std::cout << "Сколько заработал первый работние : \n";
    std::cin >> fir;
    std::cout << "Сколько заработал второй работние : \n";
    std::cin >> sec;
    std::cout << "Сколько заработал третий работние : \n";
    std::cin >> thir;
    std::cout << "========================================================================== \n";
    //самая высокая ЗП
    if( fir > sec && fir > thir ){
        max = fir;
    }
    else if (sec > fir && sec > thir) {
        max = sec;
    }
    else {
        max = thir;
    }
    //самая низкая ЗП
    if (fir < sec && fir < thir) {
        min = fir;
    }
    else if (sec < fir && sec < thir) {
        min = sec;
    }
    else {
        min = thir;
    }
    std::cout << "Самая высокая зарплата в отделе : "<< max <<"\n";
    std::cout << "Разница между самой высокой и самой низкой зарплатой в отделе : "<< max-min <<"\n";
    std::cout << "Средняя зарплата отдела :"<< (fir + sec + thir ) / 3 <<"\n";
}