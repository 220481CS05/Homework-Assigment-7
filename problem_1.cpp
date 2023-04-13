//
//  main.cpp
//  Homewokr Assigment 7
//
//  Created by Muhammadsodiq Tohirov on 13/04/23.
//
#include <iostream>
using namespace std;
int countOccurrences(int arr[], int m, int n) {
    int count = 0;
    for (int i = 0; i < m; i++) {
        if (arr[i] == n) {
            count++;
        }
    }
    return count;
}
int main() {
    int m, n;
    cin >> m;
    int arr[m];
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }
    cin >> n;
    cout << countOccurrences(arr, m, n);
    cout << endl;
    return 0;
}
