class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        int f=n-k;
        
        reverse(nums.begin()+f,nums.end());
        reverse(nums.begin(),nums.begin()+f);
        reverse(nums.begin(),nums.end());
        
    }
};
