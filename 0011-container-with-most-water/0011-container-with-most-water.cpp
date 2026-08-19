class Solution {
public:
    int maxArea(vector<int>& height) {
         int left =0; 
         int rgt = height.size()-1;
         int maxwater =0;

         while(left < rgt){
            int h = min(height[left],height[rgt]);
            int w = rgt - left;
            int water = h*w;
            maxwater = max(maxwater, water);
            if(height[left] < height[rgt]){
                left++;
            }else{
                rgt--;
            }

         }
         return maxwater;
    }
};