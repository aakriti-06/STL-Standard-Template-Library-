* MEMBER FUNCTIONS UNDER ARRAY TEMPLATE CLASS :
1. at
2. []operator
3. front()
4. back()
5. fill()
6. swap()
7. size()
8 begin()
9. end()
--------------------------------------------------------------------------------
1.at() function just fetches(nikalna) any number in the array
#include<iostream>
#include<array>
using namespace std;
int main(){
array<int,6> obj={22,45,65,77,12,6}
cout<<obj.at(3);
}
OUTPUT:77
if we give index out of range then an out_of_range exception is thrown

2.[]operator:
#include<iostream>
#include<array>
using namespace std;
int main(){
array<int,6> obj={22,45,65,77,12,6};
cout<<obj[3];
}
OUTPUT:77

3.front() and back():
these functions works as front function returns first value of array and back function return last element of array
#include<iostream>
#include<array>
using namespace std;
int main(){
array<int,6> obj={22,45,65,77,12,6};
cout<<obj.front();
}
OUTPUT:22
#include<iostream>
#include<array>
using namespace std;
int main(){
array<int,6> obj={22,45,65,77,12,6};
cout<<obj.back();
}
OUTPUT:6

If we suppose that there is an array of 8 blocks and we only inserted 5 elements then
by using back function it will return 0 value

4.fill():
This function works as when i want that every block of the array have the same value:
#include<iostream>
#include<array>
using namespace std;
int main(){
array<int,5> obj={12,42,44,65,96};
obj.fill(10);
for(int i=0;i<4;i++){
cout<<obj[i];
}
}

5.Swap function:This function swaps the content of two arrays of same type and same size
Swap function works on the basis of index
first_array.swap(second_array);

#include<iostream>
#include<array>
using namespace std;
int main(){
array<int,4> obj1={22,34,52,64};
array<int,4> obj2={1,2,3,4};
obj1.swap(obj2);
for(int i=0;i<3;i++)
cout<<obj1[i];
cout<<endl;
for(int i=0;i<3;i++)
cout<<obj2[i];
}

6.size():This function returns the number of the elements in the array
#include<iostream>
#include<array>
using namespace std;
int main(){
array<int,4> obj={2,3,4,6};
cout<<obj.size();
}
OUTPUT:4

7.begin() and end():
begin function returns the iterator pointing to the first element and end function returns the iterator pointing next to the last element
