* LIST CLASS:
1. List class supports bidirectional(front-back and back-front), linear list
2. Vector supports random access but the list can be accessed sequentially only
3. List can be accessed from front to back and back to front

* END():
#include<iostream>
#include<list>
using namespace std;
int main(){
  list<int> l1{10,20,30};
  list<string> l2{"ABID","INDIA"};
  list<int> :: iterator p=l1.begin(); //p is a pointer pointing towards
  while(p!=l1.end()){
  cout<<*p<<"\n";
  p++;}
}
--------------------------------------------------------------------------------
* SIZE(): Size function tells how many values are there in the list
#include<iostream>
#include<list>
using namespace std;
int main(){
  list<int> l1{10,20,30};
  list<string> l2{"ABID","INDIA"};
  list<int> :: iterator p=l1.begin(); //p is a pointer pointing towards
  while(p!=l1.end()){
  cout<<*p<<" ";
  p++;}
  cout<<"\n Total Elements in the list are : "<<l1.size();
}
--------------------------------------------------------------------------------
* PUSH_BACK() and PUSH_FRONT(): to insert value at the end and to insert value at the beginning
#include<iostream>
#include<list>
using namespace std;
int main(){
  list<int> l1{10,20,30};
  list<string> l2{"ABID","INDIA"};
  l2.push_back("HEY!");
  l2.push_front("HII!");
  list<string> :: iterator p=l2.begin();
  while(p!=l2.end()){
  cout<<*p<<" ";
  p++;}
  cout<<"\n Total Elements in the list are : "<<l2.size();
}
--------------------------------------------------------------------------------
* POP_BACK() and POP_FRONT():
#include<iostream>
#include<list>
using namespace std;
int main(){
  list<int> l1{10,20,30};
  list<string> l2{"ABID","SHIMLA"};
  list<int> :: iterator p=l1.begin();
  while(p!=l1.end()){
    cout<<*p<<" ";
    p++;
  }
  l1.pop_back();
  list<int> :: iterator q=l1.begin();
  while(q!=l1.end()){
    cout<<*q<<" ";
    q++;
  }
}
--------------------------------------------------------------------------------
* SORT:
#include<iostream>
#include<list>
using namespace std;
int main(){
  list<int> l1{88,44,11,99,66,55,22};
  list<string> l2{"ABID","SHIMLA"};
  list<int> :: iterator p=l1.begin();
  while(p!=l1.end()){
    cout<<*p<<" ";
    p++;
  }
  l1.sort();
  list<int> :: iterator q=l1.begin();
  while(q!=l1.end()){
    cout<<*q<<" ";
    q++;
  }
}
--------------------------------------------------------------------------------
* REVERSE: This function will reverse the numbers
#include<iostream>
#include<list>
using namespace std;
int main(){
  list<int> l1{88,44,11,99,66,55,22};
  list<string> l2{"ABID","SHIMLA"};
  list<int> :: iterator p=l1.begin();
  while(p!=l1.end()){
    cout<<*p<<" ";
    p++;
  }
  cout<<endl;
  l1.reverse();
  list<int> :: iterator q=l1.begin();
  while(q!=l1.end()){
    cout<<*q<<" ";
    q++;
  }
}
--------------------------------------------------------------------------------
* REMOVE(): To remove a particular element
#include<iostream>
#include<list>
using namespace std;
int main(){
  list<int> l1{88,44,11,99,66,55,22};
  list<string> l2{"ABID","SHIMLA"};
  list<int> :: iterator p=l1.begin();
  while(p!=l1.end()){
    cout<<*p<<" ";
    p++;
  }
  cout<<endl;
  l1.remove(99);
  list<int> :: iterator q=l1.begin();
  while(q!=l1.end()){
    cout<<*q<<" ";
    q++;
  }
}
--------------------------------------------------------------------------------
* CLEAR: To clear the list
#include<iostream>
#include<list>
using namespace std;
int main(){
  list<int> l1{88,44,11,99,66,55,22};
  list<string> l2{"ABID","SHIMLA"};
  list<int> :: iterator p=l1.begin();
  while(p!=l1.end()){
    cout<<*p<<" ";
    p++;
  }
  cout<<endl;
  l1.clear();
  list<int> :: iterator q=l1.begin();
  while(q!=l1.end()){
    cout<<*q<<" ";
    q++;
  }
}
