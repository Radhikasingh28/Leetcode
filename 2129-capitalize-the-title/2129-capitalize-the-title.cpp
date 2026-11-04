class Solution {
public:
    string capitalizeTitle(string title) {
        for(int i = 0; i < title.size(); i++) {

            int start = i;

            while(i < title.size() && title[i] != ' ') {
                i++;
            }

            int len = i - start;

            if(len <= 2) {
                for(int j = start; j < i; j++) {
                    title[j] = tolower(title[j]);
                }
            }
            else {
                title[start] = toupper(title[start]);

                for(int j = start + 1; j < i; j++) {
                    title[j] = tolower(title[j]);
                }
            }
        }

        return title;
    }
};