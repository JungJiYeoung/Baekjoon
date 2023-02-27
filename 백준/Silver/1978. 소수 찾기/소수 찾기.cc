#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int N;
	int cnt = 0;
	cin >> N;

	vector<int>V(N);
	vector<int>dp(10000);

	//소수 0

	dp[0] = 1;
	dp[1] = 1;


	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		V[i] = num;
	}

	for (int i = 2; i <= 1000; i++) {
		for (int j = 2; i * j <= 1000; j++) {
			dp[i * j] = 1;
		}
	}

	for (int i = 0; i < N; i++) {
		if (dp[V[i]] == 0) {
			cnt++;
		}
	}
	cout << cnt;
	


    return 0;
}
