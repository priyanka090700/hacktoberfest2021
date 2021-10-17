//Bhaskar Varshney
#include <iostream>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode *BuildList()
{
    ListNode *head = NULL, *temp;
    int choice = 1;
    while (choice == 1)
    {
        ListNode *newnode = (ListNode *)malloc(sizeof(ListNode));
        cout << "Enter data : ";
        cin >> newnode->val;
        newnode->next = 0;
        if (head == 0)
            head = temp = newnode;
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        cout << "Want another node to be inserted : ";
        cin >> choice;
    }
    return head;
}
void print(ListNode *head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
void loop(ListNode *head, int pos)
{
    if (pos == 0)
        return;
    ListNode *tail = head, *loop_pos = head;
    while (tail->next != NULL)
        tail = tail->next;
    for (int i = 1; i < pos; i++)
        loop_pos = loop_pos->next;
    tail->next = loop_pos;
}
bool detectLoop(ListNode *head)
{
    ListNode *fast = head, *slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (slow == fast)
            return true;
    }
    return false;
}
int main()
{
    cout << "Build list : \n";
    ListNode *head = BuildList();
    int x;
    cout << "Enter the positon of creating loop (0 for no loop) : ";
    cin >> x;
    loop(head, x);
    cout << "Is loop present : " << boolalpha << detectLoop(head);
}
