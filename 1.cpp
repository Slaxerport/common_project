#include <iostream>
#include <string>

using namespace std;

void snowflake(int width, int heigth);

int main() {
	snowflake(35, 35);
}

void snowflake(int width, int heigth) {
	int m = width / 2;
	for (int i = 0; i < heigth/2; i++) {
		for (int j = 0; j < width; j++) {
			if (j >= m - i && j <= m + i) {
				cout << '*';
			}
			else {
				cout << ' ';
			}
		}
		cout << endl;
	}
	for (int i = 0; i < width; i++) {
		cout << '*';
	}
	cout << endl;
	for (int i = 1; i <= heigth / 2; i++) {
		for (int j = 0; j < width; j++) {
			if (j >= i && j < width-i) {
				cout << '*';
			}
			else {
				cout << ' ';
			}
		}
		cout << endl;
	}
}
