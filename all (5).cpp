#include<bits/stdc++.h>
using namespace std;
// this is the program to like take input from like 2 array at a once and we are outputting them
int main() {
    int n,m;
    cin>>n>>m;
 int a[n][m];

    for(int i=0; i<n;i++) {
        for(int j=0;j<m; ++j) {

            cin>>a[i][j];
        }
        }
      for(int i=0;i<n;i++) {

        for(int j=0; j<m;++j) {
            cout << a[i][j] << " ";

        }
        cout << endl;
      }
    }
