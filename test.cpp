#include <bits/stdc++.h>
#include "debugging.h"
using namespace std;

#define dbg(v) \
    cerr << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;

void nextPermutation(vector<int> &nums)
{
    int ptr;
    ptr = nums.size() - 2;
    // dbg(ptr);
    if (nums[ptr] < nums[ptr + 1])
    {
        swap(nums[ptr], nums[ptr + 1]);
        return;
    }
    bool isRev = 1;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i + 1] > nums[i])
        {
            isRev = 0;
            break;
        }
    }
    if (isRev)
    {
        sort(nums.begin(), nums.end());
        return;
    }

    while (true)
    {
        ptr--;
        int key = nums[ptr];
        int value = INT_MAX, reqdidx = -1;

        for (int i = ptr + 1; i < nums.size(); i++)
        {
            if (nums[i] > key && nums[i] < value)
            {
                value = nums[i];
                reqdidx = i;
            }
        }
        if (reqdidx == -1)
            continue;
        // cout << "hjio";
        swap(nums[ptr], nums[reqdidx]);
        sort((nums.begin() + ptr + 1), nums.end());
        return;
    }
}

int main()
{
    vector<int> arr = {1, 2, 3};

    nextPermutation(arr);
    dbg(arr);
    nextPermutation(arr);
    dbg(arr);
    nextPermutation(arr);
    dbg(arr);
    nextPermutation(arr);
    dbg(arr);
    nextPermutation(arr);
    dbg(arr);
    nextPermutation(arr);
    dbg(arr);
    nextPermutation(arr);
    dbg(arr);
    next_permutation(arr.begin(), arr.end());
    dbg(arr)
        next_permutation(arr.begin(), arr.end());
    dbg(arr)
        next_permutation(arr.begin(), arr.end());
    dbg(arr)

        return 0;
}
