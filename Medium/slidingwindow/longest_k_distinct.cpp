You are given a string s consisting only lowercase alphabets and an integer k. Your task is to find the length of the longest substring that contains exactly k distinct characters.

Note : If no such substring exists, return -1. 

  solution:
  class Solution {
  public:
    
        // code here
        int longestKSubstr(string s, int k) {
    unordered_map<char, int> mp;
    int low = 0, high = 0;
    int ans = -1;

    while (high < s.size()) {
        mp[s[high]]++;

        while (mp.size() > k) {
            mp[s[low]]--;
            if (mp[s[low]] == 0) {
                mp.erase(s[low]);
            }
            low++;
        }

        if (mp.size() == k) {
            ans = max(ans, high - low + 1);
        }

        high++;
    }

    return ans;
}
    
};
