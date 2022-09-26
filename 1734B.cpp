#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            for(int j=0;j<i+1;j++){
                if(j == i || j== 0){
                   cout<<1<<" " ;
                }
                else{
                    cout<<0<<" ";
                }
            }
            cout<<endl;
        }
        
    }
}