PAIR CLASS: When we want to associate or pair two types of data types
pair is a template class under STL, but it is not a part of container
pair<T1,T1>pair
pair<string,int> pair1
-----------------------------------------------------------------------------------------------------------------------------------------
#include<iostream>
using namespace std;
class student{
private:
    string name;
    int age;
public:
    void setstudent(string s,int a)
    {
    age=a;name=s;
    }
    void showstudent(){
    cout<<"\nName:"<<name;
    cout<<"\nAge:"<<age;
    }
    };
    int main(){
    pair<string,int>p1;
    pair<string,string>p2;
    pair<string,float>p3;
    pair<int,student>p4;
    student s1;
    s1.setstudent("ABID",19);
    p1=make_pair("ASIA",18);
    p2=make_pair("LIVE","LIFE");
    p3=make_pair("YES",234.44);
    p4=make_pair(12,s1);
    cout<<"\nPair 1:";
    cout<<"\n"<<p1.first<<" "<<p1.second;
    cout<<"\nPair 2:";
    cout<<"\n"<<p2.first<<" "<<p2.second;
    cout<<"\n";
    cout<<"\n"<<p3.first<<" "<<p3.second;
    cout<<"\n";
    cout<<"\n"<<p4.first;
    student s2=p4.second;
    s2.showstudent();
    }
