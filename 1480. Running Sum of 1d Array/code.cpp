class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size(),cs =0;
        vector<int> ans(n);
        for(int i = 0;i<n;i++){
            cs+=nums[i];
            ans[i] = cs;
        }
        return ans;
    }
};
