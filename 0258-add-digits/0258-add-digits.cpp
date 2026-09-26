class Solution {
public:
int add(int num,int sum){
    if(num==0)return sum;
    return add(num/10,sum+num%10);
}

    int addDigits(int num) {
        if(num<10)return num;
        return addDigits(add(num,0));
        
        

    }
};