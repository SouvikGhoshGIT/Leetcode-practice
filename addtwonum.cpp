#include<stddef.h>
#include<cmath>
#include<iostream>

using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}

  };

ListNode* reverse(ListNode* l1){
    ListNode *curr=NULL;
    ListNode *prev=NULL;
    ListNode *next=NULL;

    curr=l1;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;

    }
    l1=prev;
    return l1;

}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int p=1;
    int q=1;
    ListNode* a=l1;
    ListNode* b=l2;
    while(a->next!=NULL){
        p++;
        a=a->next;
    }
    while(b->next!=NULL){
        q++;
        b=b->next;
    }
     l1=reverse(l1);
     l2=reverse(l2);
     int sum1=0,sum2=0;
     for(int i=1;i<=p;i++){
         //cout <<l1->val <<" " <<l2->val <<endl;
         sum1 += l1->val * pow(10,p-i);
         //sum2 += l2->val * pow(10,3-i);
         l1=l1->next;
         //l2=l2->next;
         //cout <<sum1 <<" " <<sum2 <<endl;
     }
     for(int i=1;i<=q;i++){
         //cout <<l1->val <<" " <<l2->val <<endl;
         //sum1 += l1->val * pow(10,q-i);
         sum2 += l2->val * pow(10,q-i);
         //l1=l1->next;
         l2=l2->next;
         cout <<sum1 <<" " <<sum2 <<endl;
     }
     sum1+=sum2;
     cout<<sum1<<endl;
    ListNode *n;
    ListNode *H;
    int cnt=1;
    while(div(sum1,pow(10,cnt)).quot>0){
        cout << cnt<<endl;

        cnt++;
    }
    cout << cnt<<endl;
     for(int i=1;i<=cnt;i++){
         auto DV=std::div(sum1,pow(10,cnt-i));
         sum1=DV.rem;
         if(i==1) {
             n=new ListNode(DV.quot);
             H=n;
             //cout<<"added Head" <<DV.quot<<endl;
         }
         else {
             //cout<<"added Node" <<DV.quot<<endl;
             n->next=new ListNode(DV.quot);
             n=n->next;
         }

     }
     H=reverse(H);

     while(H!=NULL){
         cout<<H->val<<"->";
         H=H->next;
     }
     return H;
    };

void insert(ListNode* l1,int a){
    ListNode *n=new ListNode(a);
    if(l1==NULL){
        l1=n;
    }
    else{
        //cout<<"inserting"<<a<<endl;
        while(l1->next!=NULL){
            l1=l1->next;
        }
        l1->next=n;
    }
}

int main(){
    ListNode *n1=new ListNode(0);
    // insert(n1,1);
    // insert(n1,1);


    ListNode *n2=new ListNode(0);
    // insert(n2,1);
    // insert(n2,1);

    addTwoNumbers(n1,n2);
}






