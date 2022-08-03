unordered_map<ListNode*,int> mp;
bool hasCycle(ListNode *head) {
while(head!=NULL){
if(mp.find(head) == mp.end()){
mp[head]++;
}
else{
return true;
}
head=head->next;
}
return false;
}