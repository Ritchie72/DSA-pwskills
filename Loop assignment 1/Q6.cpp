#include<iostream>
using namespace std;
int main()
{
    int n = 9;
    int mid = n/2;
    for (int i = 0; i <= mid; i++) {
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << char('A' + j);
        }
        cout << endl;
    }
        
      for (int i = mid - 1; i >= 0; i--) {
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << char('A' + j);
        }
        cout << endl;
    }
  
}