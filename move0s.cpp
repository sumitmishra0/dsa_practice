class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // int n = nums.size();
        // int ar[n];
        // for(int i = 0; i < n; i++) {
        //     ar[i] = 0;
        // }
        // int j = 0;
        // for(int i = 0; i < n; i++) {
        //     if(nums[i] != 0) {
        //         ar[j] = nums[i];
        //         j++;
        //     }
        // }
        // for(int i = 0; i < n; i++) {
        //     nums[i] = ar[i];
        // }
        int n = nums.size();
        int frnd = 0;
        for(int me = 0; me < n; me++) {
            if(nums[me] != 0) {
                swap(nums[me], nums[frnd]);
                frnd++;
            }
        }
    }
};
