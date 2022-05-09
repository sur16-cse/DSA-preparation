https://leetcode.com/problems/maximum-subarray/discuss/1595195/C++Python-7-Simple-Solutions-w-Explanation-or-Brute-Force-+-DP-+-Kadane-+-Divide-and-Conquer
​
brute force  o(n^3) - calculating subarray of each size and then sum
for each subarray
sum = total of elements in sub array
if(sum>ans)
ans=sum
```
#include<cmath>
#include<iostream>
#include<climits>
using namespace std;
​
int Maximum_Sum_Subarray(int arr[],int n)   //Overall Time Complexity O(n^3)
{
int ans = INT_MIN;              // #include<climits>
for(int sub_array_size = 1;sub_array_size <= n; ++sub_array_size)   //O(n)
{
for(int start_index = 0;start_index < n; ++start_index)       //O(n)
{
if(start_index+sub_array_size > n)  //Subarray exceeds array bounds
break;
int sum = 0;
for(int i = start_index; i < (start_index+sub_array_size); i++) //O(n)
sum+= arr[i];
ans = max(ans,sum);