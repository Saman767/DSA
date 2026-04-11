class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
    
    int sum = 0;
    
    // first window
    for(int i = 0; i < k; i++) {
        sum += arr[i];
    }
    
    int maxSum = sum;
    
    // sliding window
    for(int i = k; i < n; i++) {
        sum = sum - arr[i - k] + arr[i];
        maxSum = max(maxSum, sum);
    }
    
    return maxSum;
    }
};
