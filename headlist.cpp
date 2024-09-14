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
int main(){
    node *h = new node (6);
    insrthead(h,26);
    insrthead(h,5);
    insrthead(h,6);
    show(h);
    cout<<length(h);
}
