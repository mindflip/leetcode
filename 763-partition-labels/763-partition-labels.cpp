class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char, int> lastIndex;
        
        for(int i = 0; i < s.length(); ++i) {
            lastIndex[s[i]] = i;
        }
        
        vector<int> ret;
        int size = 0;
        int end = 0;
        
        for(int i = 0; i < s.length(); ++i) {
            size++;
            end = max(end, lastIndex[s[i]]);
            
            if(i == end) {
                ret.push_back(size);
                size = 0;
            }
            
        }
        
        return ret;
    }
};