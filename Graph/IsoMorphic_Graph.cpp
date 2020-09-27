bool isIsomorphic(Node *root1,Node *root2)
{
//add code here.
    if(root1==NULL and root2==NULL) return true;
    if(root1==NULL or root2==NULL) return false;
    
    return (root1->data== root2-> data and (isIsomorphic(root1->left,root2->left)  
            or isIsomorphic(root1->left,root2->right)) and (isIsomorphic(root1->right,root2->left)  
            or isIsomorphic(root1->right,root2->right)));

}