#include <bits/stdc++.h>
using namespace std;
int main() {
 long long int t,a,b;
   cin>>t;
   while(t--){
       int n,k;
       cin>>n>>k;
       
       if(n <= k){
           int ans = ceil(k/(double) n);
       cout<<ans<<endl;
       }
       else{
           if (n % k == 0) {
               cout << 1 << endl;
               continue;
           }
           cout << 2 << endl;
       }
   }
}