#include <bits/stdc++.h>
using namespace std;

void insertion(vector<int> &nums)
{
    for (int i = 1; i < nums.size(); i++)
    {
        int key = nums[i];
        int j = i - 1;
        while (j >= 0 && key < nums[j])
        {
            nums[j + 1] = nums[j];
            j--;
        }
        nums[j + 1] = key;
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

    cout << "INSERTION SORT"
         << "\n"
         << "TIME COMPLEXITY: O(N^2)"
         << "\n"
         << "SPACE COMPLEXITY: O(1)"
         << endl;
    cout << "Unsorted numbers are" << endl;
    print(nums);
    insertion(nums);
    cout << "Sorted numbers are" << endl;
    print(nums);

    return 0;
}