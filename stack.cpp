#include<iostream>
#include <vector>
using namespace std;
class Stack{
    vector <int> v;
    public:
    void push(int val){
        v.push_back(val);
    }
    void pop(){
        v.pop_back();
    }
    int top(){
        return v [v.size()-1];
    }
    bool empty(){
        return v.size() == 0;
    }

};
int main(){
    Stack s;
    s.push(12);
    s.push(40);
    s.push(78);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
cout<<endl;
    return 0;
};