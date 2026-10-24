class Solution {
public:
bool leapyear(int n){
    if(n%400==0)return true;
    if(n%100==0)return false;
    if(n%4==0)return true;
    return false;
}
int getdays(string date){

        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));

        int days[] = {
            31, 28, 31, 30, 31, 30,
            31, 31, 30, 31, 30, 31
        };

        int y = year-1;
        int total=y*365+y/4-y/100+y/400;
      
        for(int i=0;i<month-1;i++){
            total+=days[i];
        }
          if(month>2 &&leapyear(year)){
            total++;
        }

        total+=day;
        return total;
}
    int daysBetweenDates(string date1, string date2) {
        return abs( getdays(date1)-getdays(date2));
    }
};