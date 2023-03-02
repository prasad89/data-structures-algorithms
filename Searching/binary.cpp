#include <bits/stdc++.h>
using namespace std;

void binary(vector<int> &nums)
{
    int key;
    cout << "Enter Number To Search: ";
    cin >> key;

    int low = 0, high = nums.size();
    int mid = (low + high) / 2;
    while (low < high)
    {
        if (nums[mid] == key)
        {
            cout << key << " found at " << mid + 1;
            return;
        }
        else if (nums[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
        mid = (low + high) / 2;
    }
    cout << key << " is not found ";
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

    cout << "BINARY SEARCH"
         << "\n"
         << "TIME COMPLEXITY: O(LogN)"
         << "\n"
         << "SPACE COMPLEXITY: O(1)"
         << endl;
    binary(nums);

    return 0;
}