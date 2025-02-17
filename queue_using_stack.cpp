
// Queue using stack...

#include<bits/stdc++.h>
using namespace std;
// comstrutor...
class que{
    stack<int> s1;
    public:
  
  // push function... 
    void push(int x){
        s1.push(x);
    }
  
  // pop function...
    int pop(){
        if(s1.empty()){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        int x=s1.top();
        s1.pop();
        if(s1.empty()){
            return x;
        }
        int item=pop();
        s1.push(x);
        return item;
    }
  
  // empty function...
    bool empty(){
        if(s1.empty()){
            return true;
        }
        return false;
    }
};

// main function...

int main(){
    
    que q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.pop()<<endl;;
    q.push(5);
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.empty()<<endl;
    return 0;
}
