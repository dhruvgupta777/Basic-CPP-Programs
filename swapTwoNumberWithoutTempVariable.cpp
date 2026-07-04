#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b; 
    cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << a << " " << b << endl;
}

//By use of Temp
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int a, b; cin >> a >> b;
//     int temp = a;   // save a's value into temp before we lose it
//     a = b;          // now a takes b's value
//     b = temp;       // now b takes the original a's value (saved in temp)
//     cout << a << " " << b << endl;
// }