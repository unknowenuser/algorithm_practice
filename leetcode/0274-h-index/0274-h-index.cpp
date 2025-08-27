class Solution {
public:
    int hIndex(std::vector<int>& citations) {
        std::sort(citations.begin(),citations.end(),std::greater<>());
        size_t i = 0;
        for (; i < citations.size(); i++)
        {
            if (citations[i] < i + 1)
            {
                break;
            }
            
        }
        return i;
    }
};