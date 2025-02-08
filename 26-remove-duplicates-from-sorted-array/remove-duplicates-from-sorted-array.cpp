class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> uniqueElements(nums.begin(), nums.end());
    int k = uniqueElements.size();
    
    int i = 0;
    for (int num : uniqueElements) {
        nums[i++] = num;
    }
    
    return k;
    }
};