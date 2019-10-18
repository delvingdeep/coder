
/* solution code */

class Solution {
public:
    int hIndex(vector<int>& citations) {
        
        int index = 0;
        
        sort(citations.begin(), citations.end());
        
        for(int i = 0; i < citations.size(); i++) {
            if(citations[i] >= citations.size() - i) { 
                index = citations.size() - i;
                return index; 
            }
        }
        return index;
    }
};
