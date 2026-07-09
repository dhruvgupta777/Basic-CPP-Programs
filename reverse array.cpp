

class Solution{
public:
    void reverse(int arr[], int n){
        int left =0;
        int right =n-1;

        while(left<right) {

            swap(arr[left],arr[right]);

            left++;
            right--;
        }
        for(int i=0;i<n;i++) {
            cout<< arr[i];
        }
    }
};



















// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// int a[] ={1,2,3,4,5};
// int n = size(a);


// for(int i=0;i<n;i++) {
    
//     cout<< a[i] << endl;
// }

// }
