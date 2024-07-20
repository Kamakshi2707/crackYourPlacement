class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        if(nums.empty()) return {};
        vector<int> nums2;
        sort(nums.begin(),nums.end());
        int s= nums[0];
        for(int i=1;i<nums.size();i++){
            
            if(!(s^nums[i])){
                nums2.push_back(nums[i]),i+=1;
                if(i<nums.size()) s=nums[i];
                else break;
            }
            else s = nums[i];
            }
        return nums2;
    }
};