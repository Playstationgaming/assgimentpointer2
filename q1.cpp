#include<iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int arr[n];
    int *ptr = &arr[0];
    for(int i = 0; i < n; ++i) {
        cin >> *ptr;
        ptr++;
    }
    ptr = arr;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += *ptr;
        ptr++;
    }
    cout << sum;
 
    return 0;
}