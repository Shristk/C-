//STACK IMPLEMENTATIO USING STL STACK
#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<int> st;
    st.push(100);
    st.push(200);
    st.push(300);
    cout<<st.empty()<<endl;
    cout << st.top()<<endl;
    cout<<st.size()<<endl;
    st.pop();
    cout << st.top()<<endl;
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.empty()<<endl;
    st.pop();
    cout<<st.empty();
    return 0;
}
