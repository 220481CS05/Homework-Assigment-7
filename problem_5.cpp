//
//  main.cpp
//  Problem_5
//
//  Created by Muhammadsodiq Tohirov on 13/04/23.
//
#include <iostream>
using namespace std;
bool isPalindrome(int arr[], int n) {
    int start = 0;
    int end = n-1;
    while (start < end) {
        if (arr[start] != arr[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if (isPalindrome(arr, n)) {
        cout << "YES";
        cout << endl;
    } else {
        cout << "NO";
        cout << endl;
    }
    return 0;
}

