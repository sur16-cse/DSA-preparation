Shorter version
```
unordered_map<int,int> map;
int sum = 0, result = 0;
map[sum] = 1;
for (int n : nums) {
sum += n;
result += map[sum - k];
map[sum]++;
}
return result;
```[https://www.youtube.com/watch?v=20v8zSo2v18](http://)