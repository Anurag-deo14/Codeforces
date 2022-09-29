#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int s;
        cin >> s;
        string result;
        for (int i = 9; i >= 1; i--)
            if (s >= i) {
                result = char('0' + i) + result;
                s -= i;
            }
        cout << result << endl;
    }
}