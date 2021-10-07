#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int A;
	cin >> A;
	int minDel = 0, maxDel = 0;
	for (int j = 2; j <= sqrt(A); j++) {
		if (A % j == 0) {
			maxDel = j;
			minDel = i / j;
			break;
		}
	}
	cout << minDel * maxDel << endl;

}