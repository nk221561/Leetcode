class Solution {
public:
int digitSum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

    int maximumSum(vector<int>& nums) {
        unordered_map<int, int> maxVal; 
    int maxSum = -1;
    
    for (int num : nums) {
        int sum = digitSum(num);
        if (maxVal.count(sum)) {
            maxSum = max(maxSum, maxVal[sum] + num);
            maxVal[sum] = max(maxVal[sum], num);
        } else {
            maxVal[sum] = num;
        }
    }
    
    return maxSum;
    }
};