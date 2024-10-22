class Solution {
public:

    int maxEl(vector<int> & a){
        int maxe = INT_MIN;
        
        for(int i = 0; i < a.size();i++){
            maxe = max(maxe, a[i]);
        }
        return maxe;
    }

    long long calTotalHrs(vector<int> &arr, int hourly){
        long long totalhr =0;

        for(int i = 0;i < arr.size(); i++){
            totalhr += ceil((double)arr[i] / (double)hourly);
        }
        return totalhr;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = maxEl(piles);
        int ans = INT_MAX;

        while(low <= high){
            int mid = low + (high - low)/2;
            long long totalh = calTotalHrs(piles, mid);

            if(totalh <= h){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};