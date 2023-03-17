#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
struct MyStruct {
   int key;
   string data;
   MyStruct(int key, string data) {
      this -> key = key;
      this -> data = data;
   }
};
int main() {
   std::vector<MyStruct> vec;
   vec.push_back(MyStruct(4, "test"));
   vec.push_back(MyStruct(2, "is"));
   vec.push_back(MyStruct(3, "a"));
   vec.push_back(MyStruct(1, "this"));
   
   // Using lambda expressions in C++11
   sort(vec.begin(), vec.end(), [](const MyStruct& lhs, const MyStruct& rhs) {
      return lhs.key < rhs.key;
   });
   for(auto it = vec.begin(); it != vec.end(); it++) {
      cout << it -> data << endl;
   }
}

// quick sort of a vector


int CalculateDaysBetweenDates(){

}