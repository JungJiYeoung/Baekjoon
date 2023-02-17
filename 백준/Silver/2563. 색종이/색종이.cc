#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);
	
	int paper[100][100] = { 0 };
	
	int paperNum;
	cin >> paperNum;

	for (int i = 0; i < paperNum; i++) {
		int x, y;
		cin >> x >> y;

		for (int i = y; i < y + 10; i++) {
			for (int j = x; j < x + 10; j++) {
				paper[i][j] = 1;
			}
		}
	}
	int area = 0;
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (paper[i][j] == 1) {
				area++;
			}
		}
	}

	cout << area;

    return 0;
}
