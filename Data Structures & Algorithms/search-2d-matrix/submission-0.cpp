class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int top=0;
    int bottom=matrix.size()-1;
    int left=0;
    int right=matrix[0].size()-1;
    int rowmid;
    while(top<=bottom)  {
        rowmid=(top+bottom)/2;
        if(matrix[rowmid][right]>=target && matrix[rowmid][left]<=target ){
            break;
        }
        else if(matrix[rowmid][left]>target){
            bottom=rowmid-1;
        }
        else if(matrix[rowmid][right]<target){
            top=rowmid+1;
        }
    }
    while(left<=right)  {

        int columnmid=(left+right)/2;
        if(matrix[rowmid][columnmid]==target){
            return true;
        }
        else if(matrix[rowmid][columnmid]>target){
            right=columnmid-1;
        }
        else {
            left=columnmid+1;
        }
    }
    return false;

    }
};
