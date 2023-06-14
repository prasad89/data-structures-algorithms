#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums, int low, int mid, int high)
{
    int i = low, j = mid + 1;
    int k = low;
    vector<int> temp(nums.size());

    while (i <= mid && j <= high)
    {
        if (nums[i] <= nums[j])
        {
            temp[k++] = nums[i++];
        }
        else
        {
            temp[k++] = nums[j++];
        }
    }
    while (i <= mid)
    {
        temp[k++] = nums[i++];
    }
    while (j <= high)
    {
        temp[k++] = nums[j++];
    }
    for (int i = low; i <= high; i++)
    {
        nums[i] = temp[i];
    }
}

void mergesort(vector<int> &nums, int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergesort(nums, low, mid);
        mergesort(nums, mid + 1, high);
        merge(nums, low, mid, high);
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

    cout << "MERGE SORT"
         << "\n"
         << "TIME COMPLEXITY: O(NLog(N))"
         << "\n"
         << "SPACE COMPLEXITY: O(N)"
         << endl;
    cout << "Unsorted numbers are" << endl;
    print(nums);
    mergesort(nums, 0, nums.size() - 1);
    cout << "Sorted numbers are" << endl;
    print(nums);

    return 0;
}