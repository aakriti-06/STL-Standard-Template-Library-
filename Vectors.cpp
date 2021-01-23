VECTOR:
* It is a kind of container in which dynamic arrays are stored
Q. What is a dynamic array?
When in an array if for suppose there is a capacity of 1 of vector(which is an array), but if any user wants to exceed the capacity
vector will double its size, similarly the capacity becomes 2 but the user inputs 4 then the vector will another time double it's size to 4.
This is called as a dynamic array in which vetcor class grows(at run-time).
* Array's size is fixed.It can't grow but not in vectors the case is same vector can grow.
vector<int> v1 : Zero length vector
* We can also menition size
vector<char>cv5 : Created 5 elements char vector

vectror <char> cv(4,'a') : Initailises 4 elements char vetcor with 4
In this vector the size of the vector is 4 and a is initialized

vector <string> v1 ("ABID");
vector <string> v1 (3,"hello");

*[] : Subscript operator

--------------------------------------------------------------------------------
#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector <string> v4 (3,"HELLO");
  cout<<v4[0]<<endl;
  cout<<v4[1]<<endl;
  cout<<v4[2]<<endl;

  //vector<sizeof the array,element>

----------------------------------------------------------------------------------------------------------------------------------------
#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector <int> v1 (10,20,30,40,50);
  for(int i=0;i<5;i++)
  cout<<v1[i];

OUTPUT: 10,20,30,40,50

* PUSHBACK() FUNCTION: It can be used to add the value at the end of the vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
vector <int> v1;
cout<<"Current capacity: "<<v1.capacity()<<endl; // Capacity is a function which tells the capacity of vector
v1. pushback(10);
cout<<"Current capacity: " <<v1.capacity()<<endl; // Now the Output will be somewat different
// cuz there is no capacity in the vector in the starting but after using pushback function there will be a block
// which will be newly created and 10 value is stored in that and the capacity becomes 1

// Similarly if we insert a more value than similarly capacity function will be doubled
like:
#include<iostream>
#include<vector>
using namespace std;
int main(){
vector <int> v1;
cout<<"Current capacity: "<<v1.capacity()<<endl; // Capacity is a function which tells the capacity of vector
v1. pushback(10);
cout<<"Current capacity: " <<v1.capacity()<<endl;
v1. pushback(20);
cout<<"Current capacity: " <<v1.capacity()<<endl;
v1. pushback(30);
cout<<"Current capacity: " <<v1.capacity()<<endl;
v1. pushback(40);
cout<<"Current capacity: " <<v1.capacity()<<endl;
}
--------------------------------------------------------------------------------
#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> v1;
  cout<<"Current capacity : "<<v1.capacity()<<endl;
  for(int i=0;i<=9;i++)
     v1.pushback(10*(i+1));
  cout<<"Current capacity : "<<v1.capacity()<<endl;
  v1.popback();
  cout<<"Current capacity : "<<v1.capacity()<<endl;
  v1.popback();
  cout<<"Current capacity : "<<v1.capacity()<<endl;
  v1.popback();
  cout<<"Current capacity : "<<v1.capacity()<<endl;
  v1.popback();
  cout<<"Current capacity : "<<v1.capacity()<<endl;
}
// There will be no decrease in the capacity, It will only increase.
--------------------------------------------------------------------------------
* SIZE: It returns the elements in the vector, there is a difference between size and capacity.
Size returns the elements in the vector and capacity returns the total size of the vector(Total blocks).

#include<iostream>
#include<vector>
using namespace std;
int main(){
  cout<<"Current capacity : "<<v1.capacity()<<endl;
  for(int i=0;i<=9;i++)
   v1.pushback(10*(i+1));
  for(int i=0;i<v1.size();i++)
  cout<<"Total Elements are :"<<endl<<v1.[i];
  }
----------------------------------------------------------------------------------------------------------------------------------------
*CLEAR: It removes all the elements from the vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
  cout<<"Current capacity : "<<v1.capacity()<<endl;
  for(int i=0;i<=9;i++)
  cout<<"Current capacity : "<<v1.capacity()<<endl;
  v1.pushback(10*(i+1));
  for(int i=0;i<v1.size();i++)
  cout<<"Total Elements are :"<<endl<<v1.[i];
  v1.clear();
  cout<<"Current capacity : "<<v1.capacity()<<endl;
  cout<<"Total Elements : "<<v1.size()<<endl;
}
----------------------------------------------------------------------------------------------------------------------------------------
AT() : It return the element at any index

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
  v1.clear();
  cout<<"Current capacity : "<<v1.capacity()<<endl;
  cout<<"Total Elements : "<<v1.size()<<endl;
  cout<<"Value at the Index 3 is : "<<v1.at(3)<<endl;
}
----------------------------------------------------------------------------------------------------------------------------------------
FRONT() AND BACK(): Front returns the first element of the vector and back returns
the last element of the vector

#include<iostream>
#include<vector>
using namespace std;
int main(){
  cout<<"Current capacity : "<<v1.capacity()<<endl;
  for(int i=0;i<=9;i++)
   v1.pushback(10*(i+1));
  for(int i=0;i<v1.size();i++)
  cout<<"Total Elements are :"<<endl<<v1.[i];
  v1.clear();
  cout<<"Current capacity : "<<v1.capacity()<<endl;
  cout<<"Total Elements : "<<v1.size()<<endl;
  cout<<"Value at the Index 3 is : "<<v1.at(3)<<endl;
  cout<<"First value : "<<v1.front()<<endl;
  cout<<"Last value : "<<v1.back()<<endl;
}
