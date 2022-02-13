class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ret = 0;
        
        unordered_map<int, int> um;
        for(int i = 0; i < nums.size(); ) {
            if(um[nums[i]] >= 2) {
                nums.erase(nums.begin() + i);
                continue;
            }
            um[nums[i]]++;
            ret++;
            i++;
        }
        
        return ret;
    }
};