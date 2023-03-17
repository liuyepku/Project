// rotate a matrix by 90 degrees

#include <iostream>
#include <vector>

using namespace std;

// write a function to rotate a matrix by 90 degrees
void rotateMatrix(vector<vector<int>> &matrix) {
   int n = matrix.size();
   for(int i = 0; i < n / 2; i++) {
      for(int j = i; j < n - i - 1; j++) {
         int temp = matrix[i][j];
         matrix[i][j] = matrix[n - 1 - j][i];
         matrix[n - 1 - j][i] = matrix[n - 1 - i][n - 1 - j];
         matrix[n - 1 - i][n - 1 - j] = matrix[j][n - 1 - i];
         matrix[j][n - 1 - i] = temp;
      }
   }
}

// test this function
int main() {
   vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
   rotateMatrix(matrix);
   for(int i = 0; i < matrix.size(); i++) {
      for(int j = 0; j < matrix[i].size(); j++) {
         cout << matrix[i][j] << " ";
      }
      cout << endl;
   }
}

// output
// 7 4 1
// 8 5 2
// 9 6 3
// put above output into code
// #include <iostream>
// #include <vector>
//
// using namespace std;

// write a function to rotate a matrix by 90 degrees

// put above method in a class
class RotateMatrix {
    public:
        void rotateMatrix(vector<vector<int>> &matrix) {
            int n = matrix.size();
            for(int i = 0; i < n / 2; i++) {
                for(int j = i; j < n - i - 1; j++) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[n - 1 - j][i];
                matrix[n - 1 - j][i] = matrix[n - 1 - i][n - 1 - j];
                matrix[n - 1 - i][n - 1 - j] = matrix[j][n - 1 - i];
                matrix[j][n - 1 - i] = temp;
                }
            }
        }
    };

