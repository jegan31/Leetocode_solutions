//Brute force approach creating a resulting array merging the elements in both num1 and num2 array and 
//check length of resulting array if its odd retun mid element
//else return two middle element
//here is the tricky part ie, if we have an array of size 10
//ie.. [ 1 ,2 ,3 ,4 ,5, 6 , 7 , 8 ,9 , 10 ] 
//median would be the average of the two middle element at index 4 and 5 which are 5, 6 . (5+6) /2 = 5.5
//it can be find by dividing the total resulted array size  by 2 which is mid1 and mid1-1 hence 10/2 is 5 so mid elmeents are 5 and 5-1=4;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        double ans;
        int n2= nums2.size(),i=0,j=0,k=0;
        vector<int> res(n1+n2);
      //code for merging array
        while(i<n1 && j<n2){
            if(nums1[i]<nums2[j]){
                res[k++]=nums1[i++];
            }else{
                res[k++]=nums2[j++];
            }
        }
        while (i < n1) {
            res[k++] = nums1[i++];
        }
        while (j < n2) {
            res[k++] = nums2[j++];
        }

        if(res.size()%2==0){
            int mid1 = res[(n1 + n2) / 2];
             int mid2 = res[(n1 + n2) / 2 - 1];
        return (static_cast<double>(mid1 + mid2) / 2.0);
        }else{
            int val = res.size()/2;
            ans = res[val];
            return ans;
        }

    }
};
