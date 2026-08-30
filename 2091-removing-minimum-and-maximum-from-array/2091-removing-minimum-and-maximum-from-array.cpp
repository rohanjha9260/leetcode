class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2) return n;
        
        int mn = 0;
        int mx = 0;
        
        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[mn]) mn = i;
            if (nums[i] > nums[mx]) mx = i;
        }
        
        int a = min(mn, mx);
        int b = max(mn, mx);
        
        int d1 = b + 1;
        int d2 = n - a;
        int d3 = (a + 1) + (n - b);
        
        return min({d1, d2, d3});
    }
};