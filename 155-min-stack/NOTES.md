```
class MinStack {
public:
vector<pair<int,int>> st;
int i;
MinStack() {
st.resize(30000);
i=-1;
}
void push(int val) {
if(i==-1) st[++i] = {val,val};
else st[++i] = {val, min(st[i].second,val)};
}
void pop() {
--i;
}
int top() {
return st[i].first;
}
int getMin() {
return st[i].second;
}
};
```