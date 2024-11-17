class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size(),cnt=0;
        int i = n - 1;
        while (i >= 0 && s[i] == ' ') {
            i--;
        }
    
        // Count the length of the last word
        while (i >= 0 && s[i] != ' ') {
            cnt++;
            i--;
        }
        return cnt;
    }
};
