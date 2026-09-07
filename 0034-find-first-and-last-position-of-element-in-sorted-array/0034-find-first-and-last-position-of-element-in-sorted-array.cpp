class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int a = find(nums, target, true);
        int b = find(nums, target, false);
        return {a, b};
    }

private:
    int find(vector<int>& nums, int t, bool first) {
        int l = 0, r = nums.size() - 1, res = -1;
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (nums[m] == t) {
                res = m;
                if (first) r = m - 1;
                else l = m + 1;
            } else if (nums[m] < t) {
                l = m + 1;
            } else {
                r = m - 1;
            }
        }
        return res;
    }
};