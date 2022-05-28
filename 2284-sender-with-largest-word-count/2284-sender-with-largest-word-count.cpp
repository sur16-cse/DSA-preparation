class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        //The number of words in a message is the number of spaces, plus one.

//We count words for each sender using a hash map, and track max count with the sender's name.
      //track sender and its word count
    unordered_map<string, int> cnt;
    //store max string sender
    string res;
    //store max count of word 
    int max_cnt = 0;
    for (int i = 0; i < messages.size(); ++i) {
        int words = count(begin(messages[i]), end(messages[i]), ' ') + 1;
        int total = cnt[senders[i]] += words;
        if (total > max_cnt || (total == max_cnt && senders[i] > res)) {
            max_cnt = total;
            res = senders[i];
        }
    }
    return res;
           
    }
};