class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n = nums.size();
        vector<vector<int>> result;
        
        // Step 1: sort array
        sort(nums.begin(), nums.end());
        
        // Step 2: fix i
        for (int i = 0; i < n - 2; i++) {

            // skip duplicate i
            if (i > 0 && nums[i] == nums[i-1]) continue;

            int left = i + 1;
            int right = n - 1;

            // Step 3: two pointer loop
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                if (sum == 0) {
                    // save triplet
                    result.push_back({nums[i], nums[left], nums[right]});

                    // skip duplicates for left
                    while(left < right && nums[left] == nums[left+1]) left++;
                    // skip duplicates for right
                    while(left < right && nums[right] == nums[right-1]) right--;

                    left++;
                    right--;
                }
                else if (sum < 0) {
                    left++;
                }
                else {
                    right--;
                }
            }
        }
        return result;
    }
};
