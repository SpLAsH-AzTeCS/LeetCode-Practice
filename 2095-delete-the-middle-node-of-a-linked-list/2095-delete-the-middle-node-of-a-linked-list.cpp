/**
 *Definition for singly-linked list.
 *struct ListNode {
 *int val;
 *ListNode * next;
 *ListNode() : val(0), next(nullptr) {}
 *ListNode(int x) : val(x), next(nullptr) {}
 *ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        ListNode* deleteMiddle(ListNode *head)
        {

            ListNode *temp = head;
            int size = 0;
            while (temp)
            {
                size++;
                temp = temp->next;
            }
            if (size == 1)
                return NULL;
            int k = (size / 2) + 1;

            cout << k << " ";

            temp = head;

            k -= 2;
            cout << k << " ";

            while (k--)
                temp = temp->next;

            temp->next = temp->next->next;

            return head;
        }
};