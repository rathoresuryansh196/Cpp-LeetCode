class Solution {
public:
    int romanToInt(string s) {
        int res = 0;
        unordered_map<char, int> ma{{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        for (int i = 0; i < s.size(); i++) {
          if (i == s.size()-1 || ma[s[i]] >= ma[s[i+1]]) {
            res += ma[s[i]];
          } else {
            res -= ma[s[i]];
          }
        }
        return res;
    }
};