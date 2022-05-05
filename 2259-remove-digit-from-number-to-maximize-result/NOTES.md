https://www.geeksforgeeks.org/stdstringrfind-in-c-with-examples/
The std::string::rfind is a string class member function that is used to search the last occurrence of any character in the string. If the character is present in the string then it returns the index of the last occurrence of that character in the string else it will return string::npos which denotes the pointer is at the end of the string.
https://www.geeksforgeeks.org/substring-in-cpp/
​
https://www.geeksforgeeks.org/substring-in-cpp/
​
```
for (int i = 0; i < number.size() - 1; i++) {
if (number[i] == digit && number[i + 1] > digit) {
return number.erase(i, 1);
}
}
return number.erase(number.rfind(digit), 1);
```