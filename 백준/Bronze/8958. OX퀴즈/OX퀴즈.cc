#include <iostream>
#include <cstring>
using namespace std;
int main(void)
{
	int n, sum, result;
	char a[80];
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		sum = 0;
		result = 1;
		cin >> a;
		for (int j = 0; j < strlen(a); j++) {
			if (a[j] == 'O') {
				sum += result;
				result++;
			}
			if (a[j] == 'X') {
				result = 1;
			}
		}
		cout << sum<<"\n";
	}
	return 0;
}