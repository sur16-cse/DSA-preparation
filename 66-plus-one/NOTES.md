why not work
vector<int> plusOne(vector<int>& digits) {
string nums="";
int i=0;
while(i<digits.size()){
nums+=digits[i++];
}
int d;
stringstream ss;
ss << nums;
ss >> d;
//int d=atoi(nums);
vector<int>array;
for (int j = floor(log(d)/log(10)) + 1; j >= 0; j--) {
array[j] = d % 10;
d /= 10;
}
return array;