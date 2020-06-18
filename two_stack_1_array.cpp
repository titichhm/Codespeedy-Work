#include<bits/stdc++.h>
using namespace std; 
  
class tsc 
{ 
    int *a; 
    int len; 
    int t1, t2; 
public: 
   tsc(int n)
   { 
       len=n; 
       a=new int[n]; 
       t1=-1; 
       t2=len; 
   } 
  
   
   void push1(int x) 
   { 
       
       if(t1<t2 - 1) 
       { 
           t1++; 
           a[t1]=x; 
       } 
       else
       { 
           cout<<"Stack Overflow"; 
           exit(1); 
       } 
   } 
  
   void push2(int x) 
   {       
       if(t1<t2 - 1) 
       { 
           t2--; 
           a[t2]=x; 
       } 
       else
       { 
           cout<<"Stack Overflow"; 
           exit(1); 
       } 
   } 
   
   int pop1() 
   { 
       if (t1>=0) 
       { 
          int x=a[t1]; 
          t1--; 
          return x; 
       } 
       else
       { 
           cout<<"Stack UnderFlow"; 
           exit(1); 
       } 
   } 
  
   int pop2() 
   { 
       if(t2<len) 
       { 
          int x=a[t2]; 
          t2++; 
          return x; 
       } 
       else
       { 
           cout<<"Stack UnderFlow"; 
           exit(1); 
       } 
   } 
}; 
  
int main() 
{ 
    tsc ts(5); 
    ts.push1(1); 
    ts.push2(2); 
    ts.push2(3); 
    ts.push1(4); 
    ts.push2(5); 
    cout<<"Element popped from stack1 is "<<ts.pop1()<<endl; 
    ts.push2(6); 
    cout<<"Element popped from stack2 is "<<ts.pop2(); 
    return 0; 
}
