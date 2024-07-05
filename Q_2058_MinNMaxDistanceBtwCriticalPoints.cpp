/*Link: https://leetcode.com/problems/find-the-minimum-and-maximum-number-of-nodes-between-critical-points/description/?envType=daily-question&envId=2024-07-05
Input: head = [5,3,1,2,5,1,2]
Output: [1,3]
Explanation: There are three critical points:
- [5,3,1,2,5,1,2]: The third node is a local minima because 1 is less than 3 and 2.
- [5,3,1,2,5,1,2]: The fifth node is a local maxima because 5 is greater than 2 and 1.
- [5,3,1,2,5,1,2]: The sixth node is a local minima because 1 is less than 5 and 2.
The minimum distance is between the fifth and the sixth node. minDistance = 6 - 5 = 1.
The maximum distance is between the third and the sixth node. maxDistance = 6 - 3 = 3.
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> criticalPoints;
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = head ? head->next : nullptr;
        int index = 0;
        
        // Traverse the linked list
        while (next != nullptr) {
            if (prev != nullptr) {
                // Check for local minima or maxima
                if ((curr->val > prev->val && curr->val > next->val) || 
                    (curr->val < prev->val && curr->val < next->val)) {
                    criticalPoints.push_back(index);
                }
            }
            prev = curr;
            curr = next;
            next = next->next;
            index++;
        }
        
        // If there are fewer than two critical points, return [-1, -1]
        if (criticalPoints.size() < 2) {
            return {-1, -1};
        }
        
        // Calculate min and max distances
        int minDistance = INT_MAX;
        int maxDistance = criticalPoints.back() - criticalPoints.front();
        for (size_t i = 1; i < criticalPoints.size(); i++) {
            minDistance = min(minDistance, criticalPoints[i] - criticalPoints[i - 1]);
        }
        
        return {minDistance, maxDistance};
          }
};
