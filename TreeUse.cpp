#include<iostream>
#include<queue>
#include "TreeNode.h"
using namespace std;

TreeNode<int>* takeInputLevelWise(){
    int rootData;
    cout<<"Enter root data"<<endl;
    cin>>rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes;

    pendingNodes.push(root);

    while(pendingNodes.size() != 0){
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        cout<<"Enter the num of children of "<<front->data<<endl;
        int numchild;
        cin>>numchild;
        for(int i = 0; i<numchild;i++){
            int childData;
            cout<<"Enter "<< i << "th child of  "<<front->data<<endl;
            cin>>childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

TreeNode<int>* takeinput(){
    int rootData;
    cout<<"Enter data"<<endl;
    cin>>rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    int n;
    cout<<"Enter num of children of"<< rootData <<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        TreeNode<int>* child = takeinput();
        root->children.push_back(child);
    }
    return root;
}

void printTree(TreeNode<int>* root){
    if(root == NULL){
        return ;
    }
    cout<< root->data <<":";
    for(int i=0;i<root->children.size(); i++){
        cout<< root->children[i]->data <<",";
    }
    cout<<endl;
    for(int i = 0; i < root->children.size(); i++){
        printTree(root->children[i]);
    }
}

int numNodes(TreeNode<int>* root){
    if(root == NULL){
        return 0;
    }
    int ans = 1;
    for(int i=0; i<root->children.size(); i++){
        ans += numNodes(root->children[i]);
    }
    return ans;
}

int height(TreeNode<int>* root){
    if(root == NULL){
        return 0;
    }
    int maxHeight = 1;
    for(int i=0;i<root->children.size();i++){
        maxHeight = max(maxHeight , 1+ height(root->children[i]));
    }
    return maxHeight;
}

void printAtLevelk(TreeNode<int>*root,int k){
    if(k==0){
        cout<<root->data<<" ";
        return;
    }
    for(int i=0;i<root->children.size(); i++){
        printAtLevelk(root->children[i], k-1);
    }
}

void preorder(TreeNode<int>* root){
    if(!root)return;

    cout<<root->data<<" ";

    for(int i=0;i<root->children.size();i++){
        preorder(root->children[i]);
    }

}

void postorder(TreeNode<int>* root){
    if(!root)return;

    for(int i=0;i<root->children.size();i++){
        postorder(root->children[i]);
    }
    cout<<root->data<<" ";

}
                                        
int main(){

    /*
    TreeNode<int>* root = new TreeNode<int>(1);
    TreeNode<int>* node1 = new TreeNode<int>(2); 
    TreeNode<int>* node2 = new TreeNode<int>(3);
    root->children.push_back(node1);
    root->children.push_back(node2);
    TreeNode<int>* root = takeinput();

    */

    TreeNode<int>* root = takeInputLevelWise();
    printTree(root);
    cout<<"Nodes:-"<<numNodes(root)<<endl;
    cout<<"Height of Genric tree:- "<<height(root)<<endl;
    printAtLevelk(root,2);
    //cout<<"TODO"; 
    //preorder(root);
    postorder(root);

}; 