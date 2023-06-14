class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        Node* prev=NULL;
        Node* curr=head;
        Node*nextt=head;
        while(nextt){
            nextt=nextt->next;
            curr->next=prev;
            prev=curr;
            curr=nextt;
        }
        
        
        return prev;
    
