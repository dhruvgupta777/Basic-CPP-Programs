#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
     cin >> n;
    long long root = sqrt(n);
     bool isPerfect = (root*root == n); 

    cout << (isPerfect ? "Perfect Square" : "Not Perfect Square") << endl;
}