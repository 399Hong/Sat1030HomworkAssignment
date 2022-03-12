//Simple Recursive Solution

class Solution {
public:
    vector<TreeNode*> allPossibleFBT(int n) {
        vector<TreeNode*> ans;
        if(n%2==0) return ans;
        if(n==1){
            TreeNode* node = new TreeNode();
            ans.push_back(node);
            return ans;
        }
        for(int i=1;i<=n-2;i++){
            vector<TreeNode*> x = allPossibleFBT(i);
            vector<TreeNode*> y = allPossibleFBT(n-i-1);
            for(int j=0;j<x.size();j++){
                for(int k=0;k<y.size();k++){
                    TreeNode* node = new TreeNode();
                    node->left = x[j];
                    node->right = y[k];
                    ans.push_back(node);
                }
            }
        }
        return ans;
    }
//Recursion + Memoization(Top-down DP)

class Solution {
public:
    map<int,vector<TreeNode*>> m;
    vector<TreeNode*> allPossibleFBT(int n) {
        vector<TreeNode*> ans;
        if(n%2==0) return ans;
        if(n==1){
            TreeNode* node = new TreeNode();
            ans.push_back(node);
            return ans;
        }
        if(m.find(n)!=m.end()) return m[n];
        for(int i=1;i<=n-2;i++){
            vector<TreeNode*> x = allPossibleFBT(i);
            vector<TreeNode*> y = allPossibleFBT(n-i-1);
            for(int j=0;j<x.size();j++){
                for(int k=0;k<y.size();k++){
                    TreeNode* node = new TreeNode();
                    node->left = x[j];
                    node->right = y[k];
                    ans.push_back(node);
                }
            }
        }
        m[n] = ans;
        return ans;
    }


//Non-recursion dp
class Solution {
public:
    vector<TreeNode*> allPossibleFBT(int n) {
        
        if(n%2==0) return {};
        
        vector<vector<TreeNode*> > hash(n+2);
        vector<TreeNode*> ans;
        
        hash[1].push_back(new TreeNode(0));
        
        for(int i=3;i<=n;i+=2)
        {
            for(int j=2;j<=i;j+=2)
            {
                for(int k=0;k<hash[j-1].size();k++)
                {
                    for(int l=0;l<hash[i-j].size();l++)
                    {
                        TreeNode* root = new TreeNode(0);
                        root->left = hash[j-1][k];
                        root->right = hash[i-j][l];
                        hash[i].push_back(root);
                    }
                }
            }
        }
        
        ans = hash[n];
        return ans;
    }