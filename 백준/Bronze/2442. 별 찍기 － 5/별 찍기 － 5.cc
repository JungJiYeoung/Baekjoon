#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <sstream>
#include <queue>
#include <stack>
#include <deque>
#include <tuple>
#include <stdint.h>
#include <bitset>
#define MAX_NODE 1000

using namespace std;


int main() {
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   int N;
   cin >> N;

   int star;
   int blank;

   for (int i = 1; i <= N; i++) {
      blank = N - i;
      star = 2 * i - 1;
      for (int q = 0; q < blank; q++) {
         cout << " ";
      }
      for (int t = 0; t < star; t++) {
         cout << "*";
      }
      cout << endl;

   }
   return 0;
}