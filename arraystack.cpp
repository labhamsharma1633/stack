#include<iostream>
using namespace std;
class Stack{
    public:
    int arr[5];
    int idx;
    Stack(){
        idx=-1;
    }
    void push(int val){
        if(idx==sizeof(arr)/sizeof(arr[0])){
            cout<<"stack is full";
            return;
        }
        idx++;
        arr[idx]=val;

    }
    void pop(){
        if(idx==-1){
            cout<<"stack is empty";
        }
        idx--;
    }
    int top(){

        return arr[idx];
    }
    int size(){
        return idx+1;
    }
};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    cout<<st.size();
    // st.pop();
    // cout<<st.size();
    cout<<endl<<st.top();
}