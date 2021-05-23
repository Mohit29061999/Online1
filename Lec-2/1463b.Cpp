///problem link: https://codeforces.com/problemset/problem/1463/B

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define int long long 

int mod(int x){
    if(x>=0)
    return x;
    return -x;
}

void solve(){
    int n;
    cin>>n;
    
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    
   // int s=0;
    int o=0;
    int e=0;
    for(int i=0;i<n;i++){
    //   s+=a[i];
       if(i%2==1){
          o+=a[i];
       }
       else
       e+=a[i];
    }
    
    if(o>=e){
       ///keep odd position as it is and even to 1
       for(int i=0;i<n;i++){
          if(i%2==1){
             cout << a[i] << " ";
          }else
          cout << 1 << " ";
       }
    }
    else{
        ///keep even position as it is and odd to 1
       for(int i=0;i<n;i++){
          if(i%2==0){
             cout << a[i] << " ";
          }else
          cout << 1 << " ";
       }
    }
    
    cout << endl;
    
        
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t){
        t--;
     solve();
     
    }
    
    
}
