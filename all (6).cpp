// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     vector<int> v= {1,2,3,4,5,6};
//     int sum = accumulate(v.begin(),v.end(),0);
    
//     cout << sum;
// }

#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v={1,2,3,4,5,6};
    int n=v.size();
    int sum=0;
    for(int i = 0;i<n;i++){
        sum+=v[i];
    }
    
    cout << sum<< endl;
    // cout << n;
    
}