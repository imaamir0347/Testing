#include<iostream>
#include<vector>
using namespace std;
vector<int> shuffle(vector<int>& nums, int n)
{
    vector<int>arr;
    int start=0;
    int end=n;
    for(int i=0; i<nums.size(); i++)
    {
        if(i/2==0)
        {

            arr[i]=nums[start++];
        }
        else
        {
            arr[i]=nums[end++];
        }

    }
    return arr;
}
int main()
{
    int arr[]= {1,2,3,3,2,1};
    int arr2[6];
    arr2=shuffle(arr,3);
    for(int i=0; i<6; i++)
    {
        cout<<arr2[i]<<" ";
    }
    return 0;
}
