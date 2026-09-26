class Solution {
public:
int add(int num){
    int sum=0;
    while(num>0){
            sum= sum+num%10;
            num=num/10;

        }
        return sum;
}
int count(int num){
    int c=0;
    while(num>0){
           
            num=num/10;
            c++;

        }
        return c;
    
}
    int addDigits(int num) {
        if(num==0)return 0;
        while(count(num)>1){
            num= add(num);
        }
        return num;
        
        

    }
};