Node* inorderToBST(int arr[], int s, int e){
  if(s > e)
    return NULL;

  int mid = (s+e)/2;
  int element = arr[mid];
  Node* root  = new Node(element);

  root->left = inorderToBST(arr, s, mid-1);
  root->right = inorderToBST(arr, mid+1, e);
  
  return root;
}