class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";
        
        int l1 = num1.size();
        int l2 = num2.size();
        string res(l1 + l2, '0');
        
        for (int i = l1 - 1; i >= 0; i--) {
            for (int j = l2 - 1; j >= 0; j--) {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int p1 = i + j;
                int p2 = i + j + 1;
                int sum = mul + (res[p2] - '0');
                
                res[p2] = (sum % 10) + '0';
                res[p1] = ((res[p1] - '0') + sum / 10) + '0';
            }
        }
        
        int start = 0;
        while (start < res.size() && res[start] == '0') {
            start++;
        }
        
        return res.substr(start);
    }
};