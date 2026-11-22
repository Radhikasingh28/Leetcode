class Solution {
public:
    bool areNumbersAscending(string s) {
        stringstream ss(s);
        string word ;
        int pre =-1;
        while(ss >> word){
            if(isdigit(word[0])){
                int num =stoi(word);
                if(num <=pre){
                    return false;
                }
                pre=num ;
            }
        }
        return true;
    }
};