#include <bits/stdc++.h>
using namespace std;

void selection(vector<int> &nums)
{
    for (int i = 0; i < nums.size() - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[j] < nums[min])
            {
                min = j;
            }
        }
        swap(nums[i], nums[min]);
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

    cout << "SELECTION SORT"
         << "\n"
         << "TIME COMPLEXITY: O(N^2)"
         << "\n"
         << "SPACE COMPLEXITY: O(1)"
         << endl;
    cout << "Unsorted numbers are" << endl;
    print(nums);
    selection(nums);
    cout << "Sorted numbers are" << endl;
    print(nums);

    return 0;
}