#include <iostream>
using namespace std;
int to_2(int number) {
    int result = 0;
    int b = 1;
    while (number > 0) {
        int a = number % 2;
        result += a * b;
        b *= 10;
        number /= 2;
    }
    return result;
}
int sum(int num1, int num2) {
    int result = 0;
    int transfer = 0;
    result = num1 ^ num2;
    transfer = (num1 & num2) << 1;
    while (transfer) {
        int temp = result;
        result = result ^ transfer;
        transfer = (temp & transfer) << 1;
    }
    return result;
}
int main() {
    int a, b;
    cin >> a;
    cin >> b;
    int res_mul = 0;
    int bit_num = 0;
    b = to_2(b);
    while (b > 0) {
        if (b % 10 == 1) {
            res_mul = sum(res_mul, (a << bit_num));
            bit_num++;
        }
        else {
            bit_num++;
        }
        b /= 10;
    }
    cout << res_mul << endl;

}