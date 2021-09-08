#include<iostream>
#include<algorithm>
#include<list>
using namespace std;

int main(){
list<int> mlist1={1,2,3,5,8};
list<int> mlist2={5,6,7,8};
mlist1.sort();
cout<<"mlist1 sorting: "<<endl;
for(int i:mlist1){
cout<<i<<"\n";
}
mlist2.sort();
cout<<"mlist2 sorting: "<<endl;
for(int i:mlist2){
cout<<i<<"\n";
}
mlist2.merge(mlist1);
cout<<"mlist2 merging: "<<endl;
for(int i:mlist2){
cout<<i<<"\n";
}
cout<<mlist2.size()<<endl;
return 0;
}
