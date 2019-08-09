class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        if(nums.size()<3) return 0;
        for(int i=nums.size()-1; i>=2;i--){
            int mid(0),pass(0);
            for(int k=i-1; k>=0;k--){
                if(nums[k]>nums[i]) {
                  pass++; mid=k; break;
                }
            }
            if(pass)               
              for(int k=mid-1;k>=0;k--)
                if(nums[k]<nums[i])  return true;          
        }
        return 0;
    }
};
