#include <iostream>
#include <cmath>

using namespace std;
int findH(int  a, int S) {
	return (2 * S / a);
}
int main() {
	setlocale(LC_ALL, "Russian");
	int a, S;
	cout << "Введите длину основания: ";
	cin >> a;
	cout << "Введите значение площади: ";
	cin >> S;
	cout << findH(a, S) << endl;
}