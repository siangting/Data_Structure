class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int> > trans;
        vector<int> temp;

        for(int i=0; i<matrix[0].size(); i++){

            if(i==0){
                for(int j=0; j<matrix.size(); j++){
                    temp.push_back(matrix[j][i]);
                }
            }
            else{
                for(int j=0; j<matrix.size(); j++){
                    temp[j]=matrix[j][i];
                }
            }
            trans.push_back(temp);
        }
        return trans;
    }
};