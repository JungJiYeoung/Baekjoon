#include <iostream>


using namespace std;


int main() {

   int N;
   cin >> N;

   int star;
   int blank;

   for (int i = 0; i < N; i++) {
      blank = i;
      star = N - i;

      for (int q = 0; q < star ; q++) {
         cout << "*";
      }
      cout << endl;
   }

   
   return 0;
}