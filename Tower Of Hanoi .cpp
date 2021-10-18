class Solution{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    int count=0;
    long long toh(int n, int from, int to, int aux) {
        // Your code here
        
        if(n==0)
        {
            return 0;
        }
        
        toh(n-1,from,aux,to);
        count++;
        cout<<"move disk "<<n<<" from rod "<<from<<" to rod "<<to<<endl;
        toh(n-1,aux,to,from);
        
        return count;
    }

};
