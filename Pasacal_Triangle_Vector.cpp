#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        for (int i = 0; i < numRows; i++) {
            vector<int> temp(i + 1, 1);
            for (int j = 1; j < i; j++) {
                temp[j] = result[i - 1][j] + result[i - 1][j - 1];
            }
            result.push_back(temp);
        }
        return result;
    }
};

int main() {
    Solution solution;
    int numRows;

    cout << "Enter the number of rows for Pascal's triangle: ";
    cin >> numRows;

    if (numRows <= 0) {
        cout << "Number of rows must be a positive integer." << endl;
        return 1;
    }

    vector<vector<int>> pascalTriangle = solution.generate(numRows);

    // Print the Pascal's triangle
    for (const vector<int>& row : pascalTriangle) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
