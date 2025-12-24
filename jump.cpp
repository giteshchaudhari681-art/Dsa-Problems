#include <iostream>
#include <vector>
using namespace std;
bool canJump(vector<int>& nums) {
    int maxReach = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (i > maxReach)
            return false;
        maxReach = max(maxReach, i + nums[i]);
    }
    return true;
}
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    if (canJump(nums))
        cout << "true";
    else
        cout << "false";
    return 0;
}
