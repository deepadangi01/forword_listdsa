#include<iostream>
#include<forward_list>//single link list
#include<iterator>
using namespace std;
int main(){
forward_list<int>f1{10,2,12,5,6,77,12,10};
forward_list<int>f2{20,30,40,10};
cout<<std::distance(f1.begin(),f1.end())<<endl;

f1.push_front(22);
for(auto p :f1){
    cout<<p<<"\t ";
}
forward_list<int>::iterator it=f1.begin();
f1.insert_after(it ,200);//single value insert
f1.splice_after(it,f2);//collection of data inserted
cout<<endl;
for(auto p :f1){
    cout<<p<<"\t";
}
f1.sort();
f1.unique();
//cout<<"\nafter using unique function "<<endl;
f1.pop_front();
f1.remove(40);//remove one element
f1.remove_if([](int a){return a>10;});
cout<<endl;
for(auto p :f1){
    cout<<p<<"\t";
}
f1.clear();

for(auto p :f2){
    cout<<p<<"\t";
}
cout<<std::distance(f2.begin(),f2.end())<<endl;


return 0;





}

//double pointer link list --

/*
sytax of dpt

list<int>{velues};

push_front()
push_back()
pop_front()
pop_back()
*/



