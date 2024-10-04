class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());

        int n = skill.size();
        int sum = skill[0] + skill[n-1];

        long long product =0;
        int left = 0;
        int right = n-1;

        while(left < right){
            if(skill[left] + skill[right] != sum)return -1;

            product += skill[left]* skill[right];

            left++;
            right--;
        }
        return product;
    }
};