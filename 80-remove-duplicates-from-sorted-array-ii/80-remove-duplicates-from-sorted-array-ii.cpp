class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> um;
        for(int i = 0; i < nums.size(); ) {
            if(um[nums[i]] >= 2) {
                nums.erase(nums.begin() + i);
                continue;
            }
            um[nums[i]]++;
            i++;
        }
        
        return nums.size();
    }
};