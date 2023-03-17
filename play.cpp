// write a calculator class that can add, subtract, multiply, and divide with brackets
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Calculator {
   public:
      // write a function that can add, subtract, multiply, and divide with brackets
      int calculate(string s) {
         int n = s.size();
         vector<int> nums;
         vector<char> ops;
         int num = 0;
         char op = '+';
         for(int i = 0; i < n; i++) {
            if(isdigit(s[i])) {
               num = num * 10 + (s[i] - '0');
            }
            if(!isdigit(s[i]) && s[i] != ' ' || i == n - 1) {
               if(op == '+') {
                  nums.push_back(num);
               }
               if(op == '-') {
                  nums.push_back(-num);
               }
               if(op == '*') {
                  nums.back() *= num;
               }
               if(op == '/') {
                  nums.back() /= num;
               }
               op = s[i];
               num = 0;
            }
         }
         int res = 0;
         for(int i = 0; i < nums.size(); i++) {
            res += nums[i];
         }
         return res;
      }
};

// test this function
int main() {
   Calculator c;
   cout << c.calculate("3+2*2") << endl;
   cout << c.calculate(" 3/2 ") << endl;
   cout << c.calculate(" 3+5 / 2 ") << endl;

   // add test case with brackets
    cout << c.calculate(" 3+5 / 2 + (2 + 3) ") << endl;
    // add more    test cases 
    cout << c.calculate(" 3+5 / 2 + (2 + 3) + 2 * 3 ") << endl;
    cout << c.calculate(" 3+5 / 2 + (2 + 3) + 2 * 3 + 2 / 2 ") << endl;
    cout << c.calculate(" 3+5 / 2 + (2 + 3) + 2 * 3 + 2 / 2 + 2 - 2 ") << endl;
    cout << c.calculate(" 3+5 / 2 + (2 + 3) + 2 * 3 + 2 / 2 + 2 - 2 + 2 * 2 ") << endl;
    cout << c.calculate(" 3+5 / 2 + (2 + 3) + 2 * 3 + 2 / 2 + 2 - 2 + 2 * 2 + 2 / 2 ") << endl;
    cout << c.calculate(" 3+5 / 2 + (2 + 3) + 2 * 3 + 2 / 2 + 2 - 2 + 2 * 2 + 2 / 2 + 2 - 2 ") << endl;
    cout << c.calculate(" 3+5 / 2 + (2 + 3) + 2 * 3 + 2 / 2 + 2 - 2 + 2 * 2 + 2 / 2 + 2 - 2 + 2 * 2 ") << endl;

    // add tests with more brackets
    cout << c.calculate(" 3+5 / 2 + (2 + 3) + 2 * 3 + 2 / 2 + 2 - 2 + 2 * 2 + 2 / 2 + 2 - 2 + 2 * 2 + 2 / 2 ") << endl;
    cout << c.calculate(" 3+5 / 2 + (2 + 3) + 2 * 3 + 2 / 2 + 2 - 2 + 2 * 2 + 2 / 2 + 2 - 2 + 2 * 2 + 2 / 2 + 2 - 2 ") << endl;
    


}

