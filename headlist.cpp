#include<iostream>
using namespace std;
class node{
    public:int data;
    node *nxt;
    public:node(int d){
        data=d;
        nxt=NULL;
    
    }
};
void insrthead(node* &h,int d){
    node *tmp=new node(d);
    tmp->nxt=h;
    h=tmp;
}
void show(node* h){
node* tmp=h;
while(tmp!=NULL){
    cout<<tmp->data<<"->";
    tmp=tmp->nxt;
}
cout<<"NULL"<<"\n";
}
int length(node* h){
    node* tmp=h;
    int l=0;
    while(tmp!=NULL){
    l++;

    tmp=tmp->nxt;
  
}
    return l;

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
    node *h = new node (6);
    insrthead(h,26);
    insrthead(h,5);
    insrthead(h,8);
    insrthead(h,9);
    show(h);
    sum_even_odd(h);
    //cout<<length(h)<<endl;
}
