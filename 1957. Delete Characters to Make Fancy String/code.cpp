class Solution {
public:
    string makeFancyString(string s) {
        string ans="";
        int n = s.size(),j,cnt;
        if(n<=2)
            return s;
        for(int i=0;i<n-2;i++){
            if(s[i]==s[i+1] && s[i]==s[i+2])
                continue;
            ans+=s[i];
        }
        ans+=s[n-2];
        ans+=s[n-1];
        return ans;
    }
};
