#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
     cin >> n;
    int orig = n, sum = 0, digits = to_string(n).size();
    while (n != 0){
        
        int d = n % 10;
        sum += pow(d, digits);
        n /= 10;
    }
    cout << (sum == orig ? "Armstrong" : "Not Armstrong") << endl;
}