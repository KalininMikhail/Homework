#include <iostream>
#include <cmath>

using namespace std;

string odd(int x) {
	int y = x >> 1;
	if (x == (y << 1)) {
		return "Четное число";
	}
	else {
		return "Нечетное число";
	}
}
int subtraction(int num1, int num2) {
    num2 = -1 * num2;
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
int mul8(int x) {
    return x << 3;
}
int main() {
	setlocale(LC_ALL, "Russian");
	
}