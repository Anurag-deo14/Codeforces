#include <bits/stdc++.h>
using namespace std;
int main() {
 long long int t,a,b;
   cin>>t;
   while(t--){
       cin>>a>>b;
      long long int x,y,z;
       x = a;
       y = a*(b-1);
       z = x + y;
       if(b == 0 || b == 1){
           cout<<"no"<<endl;
       }
       else if(b==2){
            y = a*(b-1)*3;
            z = x +y;
            cout<<"yes"<<endl;
           cout<<x<<" "<<y<<" "<<z<<endl;
       }
       else{
           cout<<"yes"<<endl;
           cout<<x<<" "<<y<<" "<<z<<endl;
       }
   }
}