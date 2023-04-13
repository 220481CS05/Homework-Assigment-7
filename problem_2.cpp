//
//  main.cpp
//  Problem_2
//
//  Created by Muhammadsodiq Tohirov on 13/04/23.
//
#include <iostream>
#include <string>
using namespace std;
int reverseNumber(int n) {
    string s = to_string(n);
    string reversed = "";
    for (int i = s.length() - 1; i >= 0; i--) {
        reversed += s[i];
    }
    return stoi(reversed);
}
int main() {
    int n;
    cin >> n;
    cout << reverseNumber(n);
    cout << endl;
    return 0;
}

