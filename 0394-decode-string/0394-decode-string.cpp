#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string decodeString(string s) {

        stack<int> numberStack;
        stack<string> stringStack;

        int num = 0;

        for (char ch : s) {

          
            if (isdigit(ch)) {
                num = num * 10 + (ch - '0');
            }

            else if (ch == '[') {
                numberStack.push(num);
                stringStack.push("[");
                num = 0;
            }

            else if (isalpha(ch)) {
                stringStack.push(string(1, ch));
            }

          
            else if (ch == ']') {

                string temp = "";

                
                while (stringStack.top() != "[") {
                    temp = stringStack.top() + temp;
                    stringStack.pop();
                }

              
                stringStack.pop();

              
                int repeat = numberStack.top();
                numberStack.pop();

              
                string decoded = "";
                while (repeat--) {
                    decoded += temp;
                }

                
                stringStack.push(decoded);
            }
        }

       
        string ans = "";

        while (!stringStack.empty()) {
            ans = stringStack.top() + ans;
            stringStack.pop();
        }

        return ans;
    }
};