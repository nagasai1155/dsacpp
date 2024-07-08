#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Node{
    public:

    int data;
    Node* next;
    public:
    Node(int data1,Node* next1){
        data = data1;
        next= next1;
    }
    public:
    Node(int data1){
        data= data1;
        next = nullptr;
    }

};
Node* arratoll(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
        temp= temp->next;
    }
    return head;
}
Node* insertatbeginnig(Node* head,int value){
   
   Node* newNode = new Node(value,head);
   return newNode;
}
Node* insertatendll(Node* head,int value){
    if(head== nullptr){
        return new Node(value,nullptr);
    }
    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;

    }
    Node* newNode = new Node(value,nullptr);
    temp->next= newNode;
 
    return head;
}
Node* insertatposition(Node* head,int value,int key){
    if(head== NULL){
        return new Node(value,nullptr);
    }
    if(key==1){
        Node* newNode = new Node(value,head);
        return newNode;
    }
    int cnt =0;
    Node* temp=head;
    while(temp != nullptr){
        cnt++;
        if(cnt == key-1){
            Node* x = new Node(value,nullptr);
            x->next = temp->next;
            temp->next = x;
            break;
        }
        temp = temp->next;

    }
    return head;
}
Node* insertbeforevalue(Node* head,int value,int data){
    if(head == NULL){
        return new Node(value,nullptr);
    }
    if(head->data == value){
        Node* newNode = new Node(data,head);
        return newNode;
    }
    Node* temp = head;
   
    while(temp->next != nullptr){
   
        if(temp->next->data==value){
            Node* newNode = new Node(data,nullptr);
            newNode->next = temp->next;
            temp->next =newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}
Node* deleteatbegining(Node* head){
    if(head == nullptr) return NULL;
    Node* temp = head;
    head = temp->next;
    free(temp);
    return head;
}

Node* deleteatendll(Node* head){
    if(head== nullptr) return NULL;
    Node* temp = head;
    Node* prev = NULL;
    while(temp->next->next != nullptr){
       temp = temp->next;
    }
    free(temp->next);
    temp->next = nullptr;
    return head;
 
}
Node* deleteatpositon(Node* head,int k){
    if(head == nullptr) return NULL;
    if(k == 1){
        Node* temp = head;
        head = temp->next;
        free(temp);
        return head;
    }else if(k>5){
        cout<<"out of index"<<endl;
    }
    int cnt =0;Node* temp = head;Node* prev =NULL;
    while(temp != nullptr){
        cnt++;
        if(cnt == k){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
 prev = temp;
    temp = temp->next;
    }
   
    return head;
}

Node* reversell(Node* head){
    if(head == NULL) return head;
    Node* temp = head;
    stack<int> st;
    while(temp != nullptr){
        st.push(temp->data);
        temp = temp->next;
    }
    temp = head;
    while(temp != nullptr){
        temp->data = st.top();
        st.pop();
        temp = temp->next;

    }
    return head;

}
int  searchinll(Node* head,int value){
   
     Node* temp = head;
     while(temp != nullptr){
        if(temp->data = value){
            return 1;
        }
        else return 0;
     }
}
Node* sortll(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        Node* after = temp->next;
        while(after != nullptr){
            if(temp->data > after->data){
            int temp1 = temp->data;
             temp->data = after->data;
             after->data = temp1;
            }
            after = after->next;
        }
        temp = temp->next;
    }
    return head;
}
int  lengthofll(Node* head){
    int cnt =0;
    Node* temp = head;
    while(temp != nullptr){
        cnt++;
        temp= temp->next;
    }
    return cnt;
}

Node* oddevennodesll(Node* head){
    if(head== NULL) return NULL;
    Node* temp = head;
    vector<int> arr;
    while(temp != NULL && temp->next != nullptr){
        arr.push_back(temp->data);
        temp = temp->next->next;
    }
    if(temp) arr.push_back(temp->data);
    temp = head->next;
    while(temp != NULL && temp->next != nullptr){
        arr.push_back(temp->data);
        temp = temp->next->next;

    }
    if(temp) arr.push_back(temp->data);
    int i=0;temp = head;
    while(temp != NULL){
        temp->data =arr[i];
        i++;
        temp = temp->next;
    }
    return head;
}
Node* sortzerosonestwoes(Node* head){
    int cnt0=0;int cnt1=0;int cnt2=0;
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == 0){
            cnt0++;

        }else if(temp->data == 1) cnt1++;
        else cnt2++;

        temp = temp->next;
    }
    temp = head;
    while(temp != NULL){
        if(cnt0){
            temp->data = 0;
            cnt0--;
        }else if(cnt1){
            temp->data = 1;
            cnt1--;
        }else {
            temp->data = 2;
            cnt2--;
        }
        temp = temp->next;
    }
    return head;
}
int main(){
vector<int> arr = {0,2,1,2,2,0,2,1,1};
Node* head = arratoll(arr);

Node* temp1 =sortzerosonestwoes(head);
while(temp1 != nullptr){
    cout<<temp1->data<<" ";
    temp1 = temp1->next;
}
cout<<endl;

//sorting of ll
//   int result = searchinll(head,4);
//   cout<<result<<endl;

//length of ll
// int length = lengthofll(head);
// cout<<"length "<<length<<endl;
}