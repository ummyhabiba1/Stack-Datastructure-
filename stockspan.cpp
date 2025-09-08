    // #include<iostream>
    // #include<vector>
    // #include<stack>
    // using namespace std;
    // int main()
    // {
    //     //stock price
    //         vector<int>price={100,80,60,70,60,75,85};
    // //stock solution 
    // stack<int>stack ;
    //     vector<int>ans (price.size(),0);
    //     for (int i =0; i<price.size();i++){
    //         while(stack.size() > 0 && price[stack.top()] <= price[i]){
    //             s.pop();

    //         }
    //         if(s.empty()){
    //             ans[i]=i+1;

    //         }
    //         else{
    //             ans[i]=i-s.top();

    //         }
    //         s.push(i);

    //     }
    //     //print ans values
    //     for(int val:ans){
    //         cout << val  <<" ";

    //     }
    //     cout<<endl;

    //     return 0;
    // }



#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
 //we can use stack to push value like this 

//  stack<int>s;
//  s.push(2);
//  s.push(1);
//  s.push(2);
//  s.push(4);
//  s.push(3);
//Also we will be using  vector that is more convenient
vector<int>ans ={ 2,1,2,4,3};
stack<int>s;
for (int i = 0; i < ans.size;i++){
    while( s.empty()&&  ans[ s.top()] <ans[i])
    {
ans[s.top()]=arr[i];
s.pop();

    }  
    s.push();
}
 for(int val:ans){
    cout<< val << " ";

 }
 cout<<endl;
return 0 ; 
}




















