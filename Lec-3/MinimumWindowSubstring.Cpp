///problem link: https://leetcode.com/problems/minimum-window-substring/


class Solution {
public:
    string minWindow(string s, string t) {
         
        ///to store freq of every char of t
        int t_freq[256]={0};  ///memset
        for(int i=0;i<t.length();i++){
            t_freq[t[i]]++;
        }
        
        int st=0;  ///starting index of current window
        int len =INT_MAX; ///to store the answer
        int final_st=0;  ///to store starting index of final window
        
        int c1[256]={0};
        ///try every index as ending point of window
        for(int i=0;i<s.length();i++){
            ///increase the freq of current char
            c1[s[i]]++;
            
            ///check whether current window has all char or not
            bool hasAll=true;
            for(int j=0;j<256;j++){
                if(c1[j]<t_freq[j]){
                    hasAll=false;
                }
            }
            
            if(hasAll==true){
                ///try if we can reduce the window or not
                while(c1[s[st]]>t_freq[s[st]]){
                    ///move window to the right
                    c1[s[st]]--;
                    st++;
                }
                
                if(len>(i-st+1)){
                    ///update ans
                    len = i-st+1;
                    final_st=st;
                    
                }
                
            }
            
            
        }
        
        ///whether we found any window
        string res="";
        if(len==INT_MAX){
            return res;
        }
        
        ///return substring from final_st and of length len
        for(int i=0;i<len;i++){
            res+=s[i+final_st];
        }
        
        return res;
        
        
        
        
    }
};