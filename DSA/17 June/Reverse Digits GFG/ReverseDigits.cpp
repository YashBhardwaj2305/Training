#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        string str=to_string(n);
        reverse(str.begin(), str.end());
        n=stoi(str);
        return n;
    }
};

int main(){
    Solution s1;
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int reversed = s1.reverseDigits(num);
    cout<<"Reversed number: "<<reversed<<endl;
    return 0;
}