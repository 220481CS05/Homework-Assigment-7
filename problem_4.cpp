//
//  main.cpp
//  Problem_4
//
//  Created by Muhammadsodiq Tohirov on 13/04/23.
//
#include <iostream>
using namespace std;
string sumEvenIndexed(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i+=2) {
        sum += arr[i]; // Add the even-indexed elements to the sum
    }
    if (sum % 2 == 0) { // Check if the sum is even
        return "EVEN";
    } else {
        return "ODD";
    }
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << sumEvenIndexed(arr, n);
    cout << endl;
    return 0;
}

