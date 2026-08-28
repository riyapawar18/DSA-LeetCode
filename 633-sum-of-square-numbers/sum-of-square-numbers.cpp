class Solution {
public:
    bool judgeSquareSum(int c) {
        long long i=0,j=sqrt(c);
        while(i<=j)
            {
                 long long currentSum=i*i + j*j;
                if(currentSum < c)
                {
                    i++;
                }
                else if(currentSum > c)
                {
                    j--;
                }
                else
                {
                    return true;
                }
            }
        return false;
    }
};