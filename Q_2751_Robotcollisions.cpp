/*Link: https://leetcode.com/problems/robot-collisions/description/
Input: positions = [5,4,3,2,1], healths = [2,17,9,15,10], directions = "RRRRR"
Output: [2,17,9,15,10]
Explanation: No collision occurs in this example, since all robots are moving in the same direction. So, the health of the robots in order from the first robot is returned, [2, 17, 9, 15, 10].*/

class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        int n = positions.size();
        vector<vector<int>> robots;

        for (int i = 0; i < n; ++i) {
            robots.push_back({positions[i], healths[i], directions[i], i});
        }

        sort(robots.begin(), robots.end());

        vector<vector<int>> stack;

        for (auto& robot : robots) {
            if (robot[2] == 'R' || stack.empty() || stack.back()[2] == 'L') {
                stack.push_back(robot);
                continue;
            }

            if (robot[2] == 'L') {
                bool add = true;
                while (!stack.empty() && stack.back()[2] == 'R' && add) {
                    int last_health = stack.back()[1];
                    if (robot[1] > last_health) {
                        stack.pop_back();
                        robot[1] -= 1;
                    } else if (robot[1] < last_health) {
                        stack.back()[1] -= 1;
                        add = false;
                    } else {
                        stack.pop_back();
                        add = false;
                    }
                }

                if (add) {
                    stack.push_back(robot);
                }
            }
        }

        vector<int> result;
        sort(stack.begin(), stack.end(), [](vector<int>& a, vector<int>& b) {
            return a[3] < b[3];
        });

        for (auto& robot : stack) {
            result.push_back(robot[1]);
        }

        return result;
    }
};
