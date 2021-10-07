#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int res = 0;
    int ammount;
    int personC = 1;
    while ((N - personC) >= 3) {
        ammount = N - personC;
        for (int i = 1; i < ammount; i++) {
            if (i % 2 == 0 and (ammount - i) % 2 == 1) {
                cout << i << " " << ammount - i << " " << personC << endl;
                res++;
            }
        }
        personC++;
    }
    cout << res << endl;
}