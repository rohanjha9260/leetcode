class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }
        
        sort(strs.begin(), strs.end());
        string a = strs[0];
        string b = strs.back();
        string res = "";
        
        for (int i = 0; i < min(a.length(), b.length()); i++) {
            if (a[i] != b[i]) {
                break;
            }
            res += a[i];
        }
        
        return res;
    }
};