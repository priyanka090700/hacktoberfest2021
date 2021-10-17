#include <bits/stdc++.h>
using namespace std;
class que
{
private:
    stack<int> s1, s2, s3;

public:
    void psh()
    {
        int x;
        cout << "Enter the value: ";
        cin >> x;
        s1.push(x);
    }
    void popp()
    {
        if (s1.empty())
        {
            cout << "Queue is empty! ";
            return;
        }
        int x;
        while (!s1.empty())
        {
            x = s1.top();
            s2.push(x);
            s1.pop();
        }
        s2.pop();
        while (!s2.empty())
        {
            x = s2.top();
            s1.push(x);
            s2.pop();
        }
    }
    void print()
    {
        int x;
        if (s1.empty())
        {
            cout << "Queue is empty! \n";
            return;
        }
        s2 = s1;
        while (!s3.empty())
            s3.pop();
        while (!s2.empty())
        {
            x = s2.top();
            s3.push(x);
            s2.pop();
        }
        while (!s3.empty())
        {
            cout << s3.top() << " ";
            s3.pop();
        }
    }
};
int main()
{
    int choice = 1, ch, x;
    que q1;
    while (choice)
    {
        cout << "ENTER 1. to enqueue in queue";
        cout << "\nENTER 2. to dequeue in queue";
        cout << "\nENTER 3. to print queue.\nEnter choice: ";
        cin >> ch;
        if (ch == 1)
            q1.psh();
        else if (ch == 2)
            q1.popp();
        else if (ch == 3)
            q1.print();
        cout << "Do you want to continue (0/1) : ";
        cin >> choice;
    }
}
