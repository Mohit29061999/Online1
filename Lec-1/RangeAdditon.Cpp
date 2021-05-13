//problem link: https://www.lintcode.com/problem/range-addition/


class Solution {
public:
    vector<int> getModifiedArray(int length, vector<vector<int>>& updates) {
         int n=length;
          
        int m=updates.size();  ///size of vector
        
        vector<int>arr;
        for(int i=0;i<n;i++)  ///create a vector of n 0
            arr.push_back(0); 
        
        for(int i=0;i<m;i++){
            int l=updates[i][0];
            int r=updates[i][1];
            int k=updates[i][2];
            
            arr[r]+=k;
            
            if(l!=0)
            arr[l-1]-=k;
        }
        
        ///add right contribution
        for(int i=n-2;i>=0;i--)
            arr[i]+=arr[i+1];
        return arr;
        
    }
};  