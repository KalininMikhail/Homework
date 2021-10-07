#include <iostream>
#include <cmath>

using namespace std;

int Fib(int number)
{
	if (number == 0)
		return 0; 
	if (number == 1)
		return 1; 
	return Fib(number - 1) + Fib(number - 2);
}
int main() {
	setlocale(LC_ALL, "Russian");
	int A;
	cin >> A;
	int n = 0;
	int flag = 0;
	while (Fib(n) <= A) {
		if (Fib(n) == A) {
			flag = 1;
			break;
		}
		else {
			n++;
		}
	}
	if (flag) {
		cout << "Фибоначчи" << endl;
	}
	else {
		cout << "Увы" << endl;
	}
}