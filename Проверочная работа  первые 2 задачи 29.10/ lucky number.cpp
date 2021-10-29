#include <iostream>

using namespace std;

int main() {
    int number;
    cin >> number;
    if((number >= 100000) && (number < 1000000)){ // проверяем корректность введенного числа
        int firstSum = 0;
        int secondSum = 0;
        int firstPart = number / 1000; // первые 3 цифры числа
        int secondPart = number % 1000; // 4 - 6 числа числа
        while(firstPart){
            firstSum += firstPart % 10; // прибавляем по 1 цифре из числа
            firstPart /= 10; // отбрасываем эту цифру, аналогично делаем со 2 частью
            secondSum += secondPart % 10;
            secondPart /= 10;
            
        }
        if(firstSum == secondSum){
            cout << "Lucky" << endl;
        } else {
            cout << "Not Lucky" << endl;
        }
    } else {
        cout << "Incorrect number" << endl;
    }
    return 0;
}
