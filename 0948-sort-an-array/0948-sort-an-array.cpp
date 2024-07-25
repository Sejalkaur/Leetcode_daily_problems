class Solution {
public:
    // Function to merge two sorted subarrays into a single sorted array
    void merge(vector<int>& nums, int left, int mid, int right) {
        int n1 = mid - left + 1;
        int n2 = right - mid;
        
        // Create temporary arrays
        vector<int> L(n1);
        vector<int> R(n2);
        
        // Copy data to temporary arrays L[] and R[]
        for (int i = 0; i < n1; ++i) {
            L[i] = nums[left + i];
        }
        for (int i = 0; i < n2; ++i) {
            R[i] = nums[mid + 1 + i];
        }
        
        // Merge the temporary arrays back into nums[left..right]
        int i = 0, j = 0, k = left;
        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) {
                nums[k] = L[i];
                ++i;
            } else {
                nums[k] = R[j];
                ++j;
            }
            ++k;
        }
        
        // Copy the remaining elements of L[], if there are any
        while (i < n1) {
            nums[k] = L[i];
            ++i;
            ++k;
        }
        
        // Copy the remaining elements of R[], if there are any
        while (j < n2) {
            nums[k] = R[j];
            ++j;
            ++k;
        }
    }

    // Recursive function to sort an array using merge sort
    void mergeSort(vector<int>& nums, int left, int right) {
        if (left >= right) {
            return;
        }
        
        int mid = left + (right - left) / 2;
        mergeSort(nums, left, mid);
        mergeSort(nums, mid + 1, right);
        merge(nums, left, mid, right);
    }

    // Function to sort the array and return the sorted array
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};
