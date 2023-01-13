class Solution {
public:
    vector<vector<int>> multiply(vector<vector<int>>& mat1, vector<vector<int>>& mat2) {
        // 宣告一個二維vector mul
        // vector<int> list(7,3) -> list被初始化為包含7個值為3的int
        vector<vector<int> > mul(mat1.size(), vector<int>(mat2[0].size(), 0));

        // 矩陣1有幾個row，i是mat1的row
        for(int i=0; i<mat1.size(); i++){
            // 找每個row中非0的數去乘, j是mat1的col
            for(int j=0; j<mat1[i].size(); j++){
                if(mat1[i][j]!=0){
                    // k是mat2中的column = mul的column
                    for(int k=0; k<mat2[0].size(); k++){
                        mul[i][k] += mat1[i][j]*mat2[j][k];
                    }
                }
            }
        }
        return mul;
    }
};