class Solution
{
public:
    bool Find(int target, vector<vector<int> > array)
    {
        int rowCounts = array.size();
        int colCounts = array[0].size();
        if (target < array[0][0] || target > array[rowCounts - 1][colCounts - 1])
        {
            return false;
        }
 
        for (int i = rowCounts - 1, j = 0; i >= 0 && j < colCounts;)
        {
            if (target < array[i][j])
            {
                --i;
            }
            else if (target > array[i][j])
            {
                ++j;
            }
            else
                return true;
        }
 
        return false;
    }
 
};

