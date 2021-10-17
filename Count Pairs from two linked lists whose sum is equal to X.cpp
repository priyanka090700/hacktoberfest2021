#include <iostream>
#include <set>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
int countPairs(struct Node *head1, struct Node *head2, int x)
{
    set<int> s;
    int y;
    Node *temp = head1;
    while (temp != NULL)
    {
        s.insert(temp->data);
        temp = temp->next;
    }
    temp = head2;
    int cnt = 0;
    while (temp != NULL)
    {
        y = x - temp->data;
        if (s.find(y) != s.end())
            cnt++;
        temp = temp->next;
    }
    return cnt;
}
Node *createList(int n)
{
    Node *dummy = new Node(-1);
    Node *head = dummy;
    while (n-- > 0)
    {
        int val;
        cin >> val;
        head->next = new Node(val);
        head = head->next;
    }
    return dummy->next;
}
int main()
{
    int n;
    cout << "Enter the size of first Linked List ";
    cin >> n;
    cout << "\nEnter First List : \n";
    Node *h1 = createList(n);
    cout << "\nEnter the size of Second Linked List ";
    cin >> n;
    cout << "\nEnter Second List : \n";
    Node *h2 = createList(n);
    cout << "\nEnter the desired sum : ";
    cin >> n;
    cout << "\nTotal pairs with desired sum are : " << countPairs(h1, h2, n);
}
