///problem link: https://leetcode.com/problems/longest-substring-without-repeating-characters/


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int freq[256]={0}; ///to store freq of a character in our window
        
        int ans =0; ///to store ans
        
        int n=s.length();
        int st=0;
        int final_st=0;
        ///try every index as ending index of window
        for(int i=0;i<n;i++){
            ///can we accomodate new directly??
            ///as long as we can't include the ith character
            ///shift window to right
            while(freq[s[i]]>0){
                ///shift starting point to right
                freq[s[st]]--;
                st++;
            }
            
            ///now we can include ith character
            freq[s[i]]++;
          ///  ans = max(ans,i-st+1);
            if(ans<i-st+1){
                ans = i-st+1;
                final_st=st;
            }
        }
        
        for(int i=0;i<ans;i++)
            cout << s[final_st+i];
        return ans;
        
        
        
    }
};