#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    stack<int>rt;
    stack<int>gt;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    while(st.size()>0){
        cout<<st.top()<<" ";
        int x=st.top();
        st.pop();
        rt.push(x);
    }
    cout<<endl;
    while(rt.size()>0){
        cout<<rt.top()<<" ";
        int x=rt.top();
        rt.pop();
        gt.push(x);
    }

    return 0;
}