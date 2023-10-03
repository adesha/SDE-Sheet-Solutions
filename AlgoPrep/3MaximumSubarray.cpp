class Solution {
public:
//Kadabe's Algo
    int maxSubArray(vector<int>& nums) {
        int curMax=0;
        int totMax=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(curMax<0){
                curMax=0;
            }
            curMax+=nums[i];
            totMax=max(totMax,curMax);
        }
        return totMax;
    }
};