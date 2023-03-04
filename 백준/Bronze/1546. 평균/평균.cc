#include <iostream>
using namespace std;
int main()
{
	int n, score[1000];
	double max = 0;
	double sum = 0;
	double ans;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> score[i];
		if (max < score[i])
			max = score[i];
	}
	for (int i = 0; i < n; i++) {
		sum += score[i] / max * 100;
	}
	ans = sum / n;
	cout << ans;

	return 0;
}