class Solution {

public:

  bool searchMatrix(vector<vector<int>>& matrix, int target) {

    int row = 0, col = matrix[0].size() - 1;

    while (row < matrix.size() && col >= 0) {

      int current = matrix[row][col];

      if (current == target) {

        return true;

      }

      if (current < target) {

        row++;

      } else {

        col--;

      }

    }

    return false;

  }

};
