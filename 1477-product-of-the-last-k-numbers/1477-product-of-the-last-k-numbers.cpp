class ProductOfNumbers {
public:
    vector<int> nums;
    int n;
    
    ProductOfNumbers() {
    
    }
    
    void add(int num) {
        nums.push_back(num);
    }
    
    int getProduct(int k) {
        int prd = 1;
        int n = nums.size();
        for(int i = n - k; i < n; i++){
            prd *= nums[i];
        }
        return prd;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */