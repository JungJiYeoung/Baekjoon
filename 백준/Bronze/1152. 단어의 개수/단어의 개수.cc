#include <iostream>
#include <string>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);
	
	int cnt = 1;
	string name;
	getline(cin, name);
	int len = name.length();

	for (int i = 0; i < len; i++) {
		if (name[i] == ' ') {
			cnt++;
		}
	}

	if (name[0] == ' ')
		cnt--;
	if (name[len - 1] == ' ')
		cnt--;

	cout << cnt;

    return 0;
}
