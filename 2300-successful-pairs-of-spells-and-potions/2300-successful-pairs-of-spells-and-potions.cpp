class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
       vector<int> res;
        int n(size(potions));
        sort(begin(potions), end(potions));
        
        for (auto& spell : spells) {
            
            int start(0), end(n-1), count(-1);
            while (start <= end) {
                int mid = start + (end-start)/2;
                if ((long long)spell*potions[mid] >= success) {
                    count = mid;
                    end = mid-1;
                }
                else    start = mid+1;
            }
            res.push_back(count == -1 ? 0 : n-count);
        }
        return res;
    }
};