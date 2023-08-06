/* Link list Node
struct Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */
class Solution
{
public:
    int getLength(Node *head)
    {
        int len = 0;
        while (head != NULL)
        {

            len++;
            head = head->next;
        }
        return len;
    }
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        int len = getLength(head);
        int ans = (len / 2);
        Node *temp = head;
        int cnt = 0;
        while (cnt < ans)
        {
            temp = temp->next;
            cnt++;
        }
        return temp->data;
    }
};