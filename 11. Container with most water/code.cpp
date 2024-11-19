class Solution {
public:
    int maxArea(vector<int>& height) {
        int area=0,maxarea=-1;
        // for(int i=0;i<n;i++){
        //     area=0;
        //     for(int j=i;j<n;j++){
        //         area = min(height[i],height[j]) * (j-i);
        //         if(area>maxarea)
        //             maxarea=area;
        //     }
        // }
        int left = 0,right = height.size()-1;
        while(left<right){
            area = min(height[left],height[right]) * (right-left);
            if(area>maxarea)
                     maxarea=area;
            if(height[left]<height[right])
                left++;
            else
                right--;
        }
        return maxarea;
    }
};
