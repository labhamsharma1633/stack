#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    stack<int>temp;
    
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    while(st.size()>0){
        cout<<st.top()<<" ";
        int x=st.top();
        st.pop();
        temp.push(x);

    }
    cout<<endl;
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        int x=temp.top();
        st.push(x);
        temp.pop();
        
    }
    return 0;
}