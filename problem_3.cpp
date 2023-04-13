//
//  main.cpp
//  Problem_3
//
//  Created by Muhammadsodiq Tohirov on 13/04/23.
//
#include <iostream>
using namespace std;
int sumPositiveNumbers(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            sum += arr[i];
        }
    }
    return sum;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int sum = sumPositiveNumbers(arr, n);
    cout << sum ;
    cout << endl;
    return 0;
}




