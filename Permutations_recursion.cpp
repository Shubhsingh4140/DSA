class Solution {
public:
vector<vector<int>> res;
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> ip=nums;
        vector<int> op;
        solve(ip,op);
        return res;
    }
  void  solve(vector<int> ip,vector<int> op){
        if(ip.size()==0){
            res.push_back(op);
            return;
        }
        for(int i=0;i<ip.size();i++){
            vector<int> op1=op;
            vector<int> ip1=ip;
            
            op1.push_back(ip[i]);
            ip1.erase(ip1.begin()+i);
            solve(ip1,op1);
        }

    }
};
