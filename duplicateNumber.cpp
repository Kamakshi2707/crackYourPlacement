class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int i=0;
        for(i;i<n;i++){
            if(nums[i]==nums[i+1])
            break;
        }
        return nums[i];
    }
};