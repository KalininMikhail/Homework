#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    int array[N];
    for(int i = 0;i < N;i++){
        cin >> array[i];
    }
    for(int i = 0;i < N;i++){ // сортируем массив по убыванию
        for(int j = 0;j < N;j++){
            if(array[i] < array[j]){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    int max = 0;
    for(int i = 1;i < N;i++){ // в отсортированном массиве ищем первые 2 равных числа, значение и будет ответом
        if(array[i - 1] == array[i]){
            max = array[i];
            break;
        }
    }
    cout << max << endl;
}
