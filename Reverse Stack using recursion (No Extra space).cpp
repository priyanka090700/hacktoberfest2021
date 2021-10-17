#include <iostream>
#include <stack>
using namespace std;
void print(stack<int> s)
{
    cout << "TOP-> ";
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << "<-BOTTOM";
}
void Insert_At_Bottom(stack<int> &s, int x)
{
    if (s.empty())
    {
        s.push(x);
        return;
    }
    int y = s.top();
    s.pop();
    Insert_At_Bottom(s, x);
    s.push(y);
}
void reverse(stack<int> &s)
{
    if (s.empty())
        return;
    int x = s.top();
    s.pop();
    reverse(s);
    Insert_At_Bottom(s, x);
}
int main()
{
    int n, x;
    cout << "Enter the number of values : ";
    cin >> n;
    stack<int> s;
    cout << "Enter your values : \n";
    while (n--)
    {
        cin >> x;
        s.push(x);
    }
    cout << "stack before reversing : ";
    print(s);
    reverse(s);
    cout << "\nstack before reversing : ";
    print(s);
}
