//Here i have solve  the problem in O(n) time complexity with single for loop
//here we need to return the position of target summ array elements so first  we take the first element from the array and 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int val=nums[i];
            int diff=target-val;
            if(mpp.find(diff)!=mpp.end()){
                return {mpp[diff],i};
            }
            mpp[val]=i;
        }
        return {-1,-1};
    }
};
