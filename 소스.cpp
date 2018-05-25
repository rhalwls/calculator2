#include<iostream>
using namespace std;

int main() {
	int a, b;

	char c;

	cin >> a >> c >> b;

	int result;

	while (c != '.') {
		switch (c) {

		case '+':
			result = a + b;
			break;
		case '-':
			result = a - b;
			break;
		case '*':
			result = a * b;
			break;
		case '/':
			if (b == 0) {
				break;
			}
			result = a / b;
			break;
		case '%':
			if (b == 0) {
				break;
			}
			result = a % b;
			break;

		default:
			break;
		}
		cout << result << endl;
		cin >> a >> c >> b;

	}
	return 0;
}