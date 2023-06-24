#include <iostream>

using namespace std;


int main() {
    int N;
    cin >> N;

    int star;
    int blank;

    for (int i = 0; i < N; i++) {
        star = N - i;
        blank = i;
        for (int i = 0; i < blank; i++) {
            cout << " ";
        }
        for (int i = 0; i < star; i++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
