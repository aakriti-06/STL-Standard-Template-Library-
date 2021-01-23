* MAP CLASS:
Two types of arrays :
1. Numeric arrays:
int a[5]=45;

2. Associative arrays:
int m["RAHUL"]=25;   //means RAHUL(index name) named key ontains 25

{ m[KEY]=value }

* Every key will be unique and can't be changes but the values can be altered
* Maps always arrange the keys in the sorted order(in the dictionary order)
#include<iostream>
#include<map>
using namespace std;
int main(){
  map<int,string> customer;  //<key,name>
  customer[100]="ABID";
  customer[123]="ALISHA";
  customer[145]="queen";
  customer[171]="king";
  customer[200]="Joker";
  map<int,string> :: iterator p=customer.begin();
  while(p!=customer.end()){
    cout<<p->second<<endl; //if p->first then it will give the index but by giving second it wll give string
    p++;
  }
}
--------------------------------------------------------------------------------
1. AT(): Returns the string value
#include<iostream>
#include<map>
using namespace std;
int main(){
  map<int,string> customer;  //<key,name>
  customer[100]="ABID";
  customer[123]="ALISHA";
  customer[145]="queen";
  customer[171]="king";
  customer[200]="Joker";
  map<int,string> :: iterator p=customer.begin();
  //while(p!=customer.end()){
  // cout<<p->second<<endl;; //if p->first then it will give the index but by giving second it wll give string
  // p++;
  }
  cout<<customer.at(145);
}
--------------------------------------------------------------------------------
2. SIZE(): Tells the size of the map
#include<iostream>
#include<map>
using namespace std;
int main(){
  map<int,string> customer;  //<key,name>
  customer[100]="ABID";
  customer[123]="ALISHA";
  customer[145]="queen";
  customer[171]="king";
  customer[200]="Joker";
  map<int,string> :: iterator p=customer.begin();
  while(p!=customer.end()){
  // cout<<p->second<<endl;; //if p->first then it will give the index but by giving second it wll give string
    p++;
  }
  cout<<customer.size();
}
--------------------------------------------------------------------------------
3. EMPTY():If array is empty 1 will be returned or 0 will be returned.
4. INSERT():
#include<iostream>
#include<map>
using namespace std;
int main(){
  map<int,string> customer;  //<key,name>
  customer[100]="ABID";
  customer[123]="ALISHA";
  customer[145]="queen";
  customer[171]="king";
  customer[200]="Joker";
  customer.insert(pair<int,string>(199,"A"));
  map<int,string> :: iterator p=customer.begin();
  while(p!=customer.end()){
  cout<<p->second<<endl;; //if p->first then it will give the index but by giving second it wll give string
    p++;
  }
}
5. CLEAR():Will clear the list
