class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count=n/3;
        vector<int>ans;
        map<int,int>m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        for(auto x:m){
            if(x.second>count){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};