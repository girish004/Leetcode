class Solution {
public:
    void insert(ListNode** calc, int num)
    {
        ListNode* temp;
        ListNode* ptr;
        temp=new ListNode();
        temp->val=num;
        temp->next=NULL;
        if(*calc==NULL)
        {
            *calc=temp;
        }
        else
        {
            ptr=*calc;
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            ptr->next=temp;
        }
    }
    int len(ListNode** calc)
    {
        ListNode* temp;
        int count=0;
        temp=*calc;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        return count;
        
    }
    int first(ListNode** last)
    {
        ListNode *temp=*last;
        ListNode *ptr;
        if(temp!=NULL)
        {
            int a=temp->val;
            *last=temp->next;
            delete temp;
            return a;
        }
        else
            return -1;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ansl=NULL;
        int carry=0;
        int one,two,ans;
        int len1=len(&l1);
        int len2=len(&l2);
        if(len1>=len2)
        {
            ListNode* temp1=l1;
            ListNode* temp2=l2;
        }
        else
        {
            ListNode* temp2=l1;
            ListNode* temp1=l2;            
        }
        int flag1=0,flag2=0;
        while(flag1==0 || flag2==0)
        {
            one=first(&l1);
            two=first(&l2);
            if(one==-1) {one=0;flag1=1;}
            if(two==-1) {two=0;flag2=1;}
            if(flag1==1 && flag2==1) 
            {
                if(carry==1) insert(&ansl,1);
                break;
            }
            ans=one+two+carry;
            carry=ans/10;
            insert(&ansl,ans%10);
        }
        return ansl;
    }
};
