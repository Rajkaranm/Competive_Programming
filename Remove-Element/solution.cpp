#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == val) {
                nums.erase(nums.begin() + i);
                i--;
            }
            
        }
        return nums.size();
    }
};


int main() {
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    Solution s;

    cout<<s.removeElement(nums, val)<<endl;
    for (int i =0; i < nums.size(); i++) {
        cout<<nums[i]<< " ";
    }
    cout<<endl;
    return 0;
}
