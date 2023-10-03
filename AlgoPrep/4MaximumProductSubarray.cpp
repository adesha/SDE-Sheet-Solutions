class Solution {
public:
//Kdane's Algo
    int maxProduct(vector<int>& nums) {
        int prod=1;
        int totMax=INT_MIN;
        for(int i=0;i<nums.size();i++){
            prod*=nums[i];
            totMax=max(totMax,prod);
            if(prod==0){
                prod=1;
            }
        }
        prod=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
          prod*=nums[i];

          totMax=max(prod,totMax);
          if(prod==0)
           prod=1;
        }
        return totMax;
    }
};