/*
—оздайте динамичесикй двумерный массив и заполните его случайными числами от 10 до 50. ¬выведете его в консоль
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

void visual(int *Arr, int k, int n){
    for(int i = 0;i < k; i++){
        for(int j = 0;j < n;j++){
            Arr[i * n + j] = rand() % 40 + 10;
        }
    }
    for(int i = 0;i < k;i++){
        for(int j = 0;j < n;j++){
            cout << Arr[i * n + j] << " ";
        }
        cout << " " << endl;
    }
    
}
int main() {
    int k, n;
    cin >> k;
    cin >> n;
    int *Arr = new int[k * n];
    visual(Arr, k, n);
}
