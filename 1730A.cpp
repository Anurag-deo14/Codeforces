#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c;
        int x;
        set<int>s;
        int sum =0;
        cin>>n>>c;
        // m[x] = no of planet in x orbit   
        map<int,int> m;
        for(int i=0;i<n;i++){
            cin>>x;
            s.insert(x);
            m[x]++;
        }
        for(auto a : s){
            if(m[a] > c){
                sum += c;
            }
            else{
                sum += m[a] ;
            }
            
        }
         cout<<sum<<endl;
        }
        
        
       
    }