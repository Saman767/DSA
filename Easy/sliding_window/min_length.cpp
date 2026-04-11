class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
        int n = arr.size();
    
    int low = 0;
    int sum = 0;
    int minLen = INT_MAX;

    for(int high = 0; high < n; high++) {
        sum += arr[high];  // expand window

        while(sum >= target) {  // shrink window
            minLen = min(minLen, high - low + 1);
            sum -= arr[low];
            low++;
        }
    }

    if(minLen == INT_MAX) return 0;
    return minLen;
}

int main() {
    vector<int> arr = {2,3,1,2,4,3};
    int target = 7;

    cout << minSubArrayLen(target, arr);

    return 0;

    }
};
