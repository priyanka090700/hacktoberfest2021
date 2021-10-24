#include<iostream>
using namespace std;
template <class T>
void sort(T data[], int n)
{
    for(int i=0;i<n;i++)
    {
        T temp;
        int flag = 0;
        for(int j=1;j<n;j++)
        {
            if(data[j-1]>data[j])
            {
                temp = data[j-1];
                data[j-1] = data[j];
                data[j] = temp;
                flag =1;
            }
        }
        if(!flag)
        {
            break;
        }
    }
}
template <class T>
void print(T data[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<data[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int a[] = {4,6,2,8};
    float b[] = {2.1,2.5,1.2,5.6};
    char c[] = "hsae";
    sort(a,4);
    sort(b,4);
    sort(c,4);
    cout<<"The sorted data is:"<<endl;
    print(a,4);
    print(b,4);
    print(c,4);
}





