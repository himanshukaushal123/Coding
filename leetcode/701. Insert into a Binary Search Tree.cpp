//1st method
TreeNode* insertIntoBST(TreeNode* root, int val) {
       if(root==NULL){return new TreeNode(val);}
        TreeNode* cur=root;
       while(true){
          if(cur->val<=val){
              if(cur->right!=NULL){
                  cur=cur->right;
              }
              else{
                  cur->right=new TreeNode(val);
                  break;
              }
          }
           else {
              if(cur->left!=NULL){
                  cur=cur->left;
              }
              else{
                  cur->left=new TreeNode(val);
                  break;
              }
          }
       }
        return root;
    }

//2nd method
TreeNode* insertIntoBST(TreeNode *node, int val) {
		if (!node) {
			TreeNode *newNode = new TreeNode(val);
			return newNode;
		}
		if (val < node->val) {
			node->left = insertIntoBST(node->left, val);
		}
		else {
			node->right = insertIntoBST(node->right, val);
		}
		return node;
	}
