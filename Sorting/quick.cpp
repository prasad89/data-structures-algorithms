#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &nums, int low, int high)
{
    int pivot = nums[low];
    int start = low, end = high;

    while (start < end)
    {
        while (nums[start] <= pivot)
        {
            start++;
        }
        while (nums[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            swap(nums[start], nums[end]);
        }
    }
    swap(nums[low], nums[end]);

    return end;
}

void quick(vector<int> &nums, int low, int high)
{
    if (low < high)
    {
        int res = partition(nums, low, high);
        quick(nums, low, res - 1);
        quick(nums, res + 1, high);
    }
}

void print(vector<int> &nums)
{
    for (auto i : nums)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "Enter size of Vector: ";
    cin >> size;

    vector<int> nums(size);
    cout << "Enter numbers" << endl;
    for (int i = 0; i < nums.size(); i++)
    {
        int ip;
        cin >> ip;
        nums[i] = ip;
    }
    system("CLS");

    cout << "QUICK SORT"
         << "\n"
         << "TIME COMPLEXITY: O(NLog(N))"
         << "\n"
         << "SPACE COMPLEXITY: O(NLog(N))"
         << endl;
    cout << "Unsorted numbers are" << endl;
    print(nums);
    quick(nums, 0, nums.size() - 1);
    cout << "Sorted numbers are" << endl;
    print(nums);

    return 0;
}