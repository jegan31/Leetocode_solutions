// Here to get substring we need 2 for loop let assume a string = "abcdea"
//ie..  i=0 -> n
//      new str = ''
//      j=i -> n
//     str+=string[j]
//we will use hashing to remeber those repeating character to implement it we use an integer array of size 255 ASCII
// hash[255]={0) Initially al value with 0 when it present it wiil incremented

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int maxcount=0,n=s.size(),i,j,len;
	for(i=0;i<n;i++){
        int hash[256]={0};
		for(j=i;j<n;j++){
			if(hash[s[j]]==1)
                break;
            len = j-i+1;
            maxcount= max(len,maxcount);
            hash[s[j]]=1;

		}
    }
    return maxcount;
    }
};

 
