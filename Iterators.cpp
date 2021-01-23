* ITERATORS: Inserting a number between any 2 numbers in teh vector

#include<iostream>
#include<vector>
using namespace std;
int main(){
  cout<<"Current capacity : "<<v1.capacity()<<endl;
  for(int i=0;i<=9;i++)
  v1.pushback(10*(i+1));
  cout<<"Current capacity : "<<v1.capacity()<<endl;
  for(int i=0;i<v1.size();i++)
  cout<<"Total Elements are :"<<endl<<v1.[i];
  cout<<"\n\n";
  vector<int> :: iterator it=v1.begin();
  v1.insert(it,35); // It means the number will be inserted a the beginning
}
-----------------------------------------------------------------------------------------------------------------------------------------
#include<iostream>
#include<vector>
using namespace std;
int main(){
  cout<<"Current capacity : "<<v1.capacity()<<endl;
  for(int i=0;i<=9;i++)
  v1.pushback(10*(i+1));
  cout<<"Current capacity : "<<v1.capacity()<<endl;
  for(int i=0;i<v1.size();i++)
  cout<<"Total Elements are :"<<endl<<v1.[i];
  cout<<"\n\n";
  vector<int> :: iterator it=v1.begin();
  v1.insert(it+2,35); // the number will be inserted between 20 and 30
}
