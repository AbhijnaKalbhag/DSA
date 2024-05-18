class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
       set<int>union;
       for(int i=0;i<n;i++){
           union.insert(a[i]);
       }
       for(int i=0;i<m;i++){
           union.insert(b[i]);
       }
       return (int)(union.size());
    }
};
