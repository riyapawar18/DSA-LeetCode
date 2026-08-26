class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        if (p.length() > s.length())
            return ans;

        int pCount[26] = {0};
        int windowCount[26] = {0};

        // Frequency of characters in p
        for (char c : p) {
            pCount[c - 'a']++;
        }

        int k = p.length();

        // Sliding window
        for (int i = 0; i < s.length(); i++) {

            // Add current character
            windowCount[s[i] - 'a']++;

            // Keep window size equal to p.length()
            if (i >= k) {
                windowCount[s[i - k] - 'a']--;
            }

            // Compare frequencies
            if (i >= k - 1) {

                bool same = true;

                for (int j = 0; j < 26; j++) {
                    if (pCount[j] != windowCount[j]) {
                        same = false;
                        break;
                    }
                }

                if (same) {
                    ans.push_back(i - k + 1);
                }
            }
        }

        return ans;
    }
};