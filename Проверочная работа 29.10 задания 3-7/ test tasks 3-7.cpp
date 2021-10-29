#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int sumOfaNum(int n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

vector<int> task1(int a, int b){
    vector<int> Nums; // создаем вектор куда будем записывать подходящие числа
    for(int i = a;i <= b;i++){
        if((sumOfaNum(i) == sumOfaNum(2*i)) && (sumOfaNum(i) == sumOfaNum(3*i)) && (sumOfaNum(i) == sumOfaNum(4*i)) && (sumOfaNum(i) == sumOfaNum(5*i)) && (sumOfaNum(i) == sumOfaNum(6*i)) && (sumOfaNum(i) == sumOfaNum(7*i)) && (sumOfaNum(i) == sumOfaNum(8*i)) && (sumOfaNum(i) == sumOfaNum(9*i))){
            Nums.push_back(i); // если число подходит по всем условиям записываем в вектор
        }
    }
    return Nums;
}

int task2(int n){
    int m = 0;
    int powerOf3 = pow(3, m);
    while(powerOf3 <= n){// находим максимальную степень 3 менбшую n
        m++;
        powerOf3 = pow(3, m);
    }
    while(m > 0){ // начинаем уменьшать m до момента пока 3^m не поделит n
        if(n % powerOf3 == 0){
            break;
        } else {
            m--;
            powerOf3 = pow(3, m);
        }
    }
    return m;
}
string task3(string S){
    char let1 = S[0];
    int space1 = 0;
    int space2 = 0;
    for(int i = 0;i < S.size() - 1;i++){// ищем 2 пробела
        if(S[i] == ' ' ){
            space1 = i;
            for(int j = i + 1;j < S.size() - 1;j++){
                if(S[j] == ' '){
                    space2 = j;
                    break;
                }
            }
            break;
        }
    }
    string result = "";
    for(int i = space2 + 1;i < S.size() - 1;i++){
        result += S[i];
    }
    // заполняем строку сначала фамилией а потом иницалами имени и отчества
    result += ' ';
    result += let1;
    result += '.';
    result += S[space1 + 1];
    result += '.';
    return result;
}
int prime(int n){// поиск простого числа
    int flag = 1;
    if(n == 1){
       flag = 0;
    } else {
        for(int i = 2;i <= sqrt(n);i++){
            if(n % i == 0){
                flag = 0;
                break;
            }
        }
    }
    return flag;
}
vector<int> task5(int a, int b){
    vector<int> Nums;
    for(int i = a;i <= b;i++){
        int flag = 1;
        int f = i;
        while(f){// проверяем все комбинации отбрасывая по цифре  проверяем на простоту если все подходит записываем в вектор
            f /= 10;
            if(prime(f) == 0){
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            Nums.push_back(i);
        }
    }
    return Nums;
}
int main() {
    return 0;
}
