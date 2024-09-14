
//singly link 

#include<iostream>
using namespace std;
class node
{
public: int data;
node *nxt;//it is refer of next node 

public:node(int d){
    data=d;
    nxt=NULL;
}
};
void insrt(node* &h,int d){
    node *n=new node(d);
    if(h==NULL){
        h=n;
        return;
    }
    node *tmp=h;
    while(tmp->nxt !=NULL){
        tmp=tmp->nxt;
    }
    tmp->nxt=n;
}
void show(node* h){
    node *tmp=h;
    int sum_e=0;
    while(tmp!=NULL){
        cout<<tmp->data<<"->";
        tmp=tmp->nxt;
        

    }

    cout<<"NULL"<<"\n";


}
void srch(node* &h,int value){
    node *tmp=h;
    int c=1;
    while(tmp!=NULL){
        if(tmp->data ==value){
            c=1;
            break;
        }
        tmp=tmp->nxt;
    }
    if(c==1){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
}
void sum_even_odd(node* &h){
    node* tmp=h;
     int sum_e=0;
     int sum_o=0;
     while(tmp!=NULL){
     if(tmp->data%2==0){
     sum_e+=tmp->data;
        
    }
    else{
        sum_o+=tmp->data;
    }
    tmp=tmp->nxt;
}
cout<<"sum of even number  = "<<sum_e<<"\n";
cout<<"sum of odd number  = "<<sum_o;
}
int main(){
    node *h=NULL;
    insrt(h,21);
    insrt(h,3);
    insrt(h,5);
    insrt(h,44);
    insrt(h,2);
    insrt(h,10);
    show(h);
    sum_even_odd(h);

return 0;


}
//reverse -link list, sum of even number and sum of odd number



