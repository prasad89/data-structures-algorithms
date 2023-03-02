#include <bits/stdc++.h>
using namespace std;

void linear(vector<int> &nums)
{
    int key;
    cout << "Enter Number To Search: ";
    cin >> key;

    for (auto i : nums)
    {
        if (i == key)
        {
            cout << key << " is found ";
            return;
        }
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

    cout << "LINEAR SEARCH"
         << "\n"
         << "TIME COMPLEXITY: O(N)"
         << "\n"
         << "SPACE COMPLEXITY: O(1)"
         << endl;
    linear(nums);

    return 0;
}