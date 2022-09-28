#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cum = 0;
        set<char>sexy;
        for(int i =0;i<s.length();i++){
            sexy.insert(s[i]);
            if(sexy.size()>3){
                cum++;
                i--;
                sexy.clear();
            }
        }
        cout << cum + 1 << endl;
    }
}
