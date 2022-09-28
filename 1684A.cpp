#include <bits/stdc++.h>
using namespace std;


int main() {
    long long t = 1;
    cin >> t;
    while(t--) {
            string s;
            cin>>s;
            if(s.length() == 1){
                cout<<s<<endl;
            }
            else if(s.length() == 2){
                cout<<s[1]<<endl;
            }
            sort(s.begin(), s.end());

            if(s.length() > 2){
                cout<<s[0]<<endl;
            }

            
        }
        return 0;
    }

 
    