#include <vector>
#include <iostream>

using namespace std;

int mySwap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
    return a, b;
}

vector<int> selectionSort(vector<int> &nums)
{
    int n = nums.size();
    if (n < 2)
    {
        return nums;
    }
    for (int i = 0; i < n - 1; ++i)
    {
        int minVal = i;
        for (int j = i + 1; j < n; ++j)
        {
            minVal = nums[minVal] < nums[j] ? minVal : j;
        }
        mySwap(nums[minVal], nums[i]);
    }
    return nums;
}

int main()
{
    // vector<int> arr = {4, 78, 12, 56, 16, 69, 75};
    // vector<int> arr = {};
    vector<int> arr = {0};
    selectionSort(arr);
    for (int i = 0; i < arr.size(); ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}