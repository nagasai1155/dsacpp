#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int longestSubArray(vector<int> &arr, int k)
{

    int n = arr.size();
    int maxlen = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {

            sum += arr[j];

            if (sum == k)
            {
                maxlen = max(maxlen, j - i + 1);
            }
        }
    }

    return maxlen;
}

// optimal approach

int longestSarray(vector<int> &arr, int k)
{

    int n = arr.size();
    int maxlen=0;
    int sum =0;
    map<int,int> preSum;
    for(int i=0;i<n;i++){

        sum = sum + arr[i];
        if(sum ==k){
            maxlen = max(sum,i+1);
        }

        int rem = sum -k;
        //if already exists

        if(preSum.find(rem) != preSum.end()){
            int len = i- preSum[rem];
            maxlen = max(maxlen,len);
        }

        if(preSum.find(sum) == preSum.end()){
            preSum[sum]=i;
        }
    }
    return maxlen;
}

int main()
{

    vector<int> arr = {-1, 1, 1};
    int k = 1;
    int result = longestSarray(arr, k);
    cout << "lenght of longest sub array with sum k: " << result << endl;
}