//problem link: https://codeforces.com/problemset/problem/1438/C


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
    int n,m;
    cin>>n>>m;
    
    int arr[n][m];
    for(int i=0;i<n;i++){
       for(int j=0;j<m;j++)
       cin>>arr[i][j];
    }
    
    for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
          if((i+j)%2==0){
             if(arr[i][j]%2!=0)
             arr[i][j]++;
          }
          else{
              if(arr[i][j]%2==0)
             arr[i][j]++;
          }
       }
    }
    
    for(int i=0;i<n;i++){
       for(int j=0;j<m;j++)
       cout << arr[i][j] <<" ";
       cout << endl;
    }
    
        
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
