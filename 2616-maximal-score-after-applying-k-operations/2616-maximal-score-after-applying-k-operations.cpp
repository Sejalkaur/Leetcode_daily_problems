class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long score = 0;
        priority_queue<int> pq(begin(nums), end(nums));//Heapify(creating heap n adding all the elements of nums)

        while(k--){
            int maxEl = pq.top();
            pq.pop();

            score += maxEl;
            maxEl = ceil(maxEl/3.0);
            pq.push(maxEl);
        }
        return score;
    }
};