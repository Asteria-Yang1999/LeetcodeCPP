#include <iostream>
#include <vector>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    int size = nums.size();
    int target0;
    vector<int> result;
    for (int i = 0; i < size; ++i)
    {
        target0 = target - nums[i];     
        for (int j = i+1; j < size; ++j)
        {
            if (nums[j] == target0)
            {
                result.push_back(i);
                result.push_back(j);
            }
            
        }
        
    }
    return result;
}

int main(){
    vector<int> nums = {3,2,4};
    int target = 6;
    vector<int> result;
    result = twoSum(nums, target);
    for (int i = 0; i < result.size(); ++i)
    {
        cout << result[i] << endl;
    }
    
    
}