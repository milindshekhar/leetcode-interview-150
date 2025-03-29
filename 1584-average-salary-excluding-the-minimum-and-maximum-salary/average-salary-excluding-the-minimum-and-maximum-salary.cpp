class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        double average=0.0;
        double sum=0.0;
        for(int i=1;i<salary.size()-1;i++)
        {
            sum+=salary[i];
        }
        return sum/(salary.size()-2);
        
    }
};