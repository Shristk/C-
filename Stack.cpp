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
//STACK IMPLEMENTATION USING ARRAY
#include <iostream>
using namespace std;
class Stack {
    // Pointer to an array
    int* arr;
    int top;
    int capacity;
public:
    // Constructor
    Stack(int size)
    {
        arr = new int[size];
        capacity = size;
        top = -1;
    }

    // Destructor to deallocate memory
    ~Stack() { delete[] arr; }
   
    void push(int x)
    {
        if (isFull()) {
            cout << "Overflow\n";
            return;
        }
        arr[++top] = x;
    }
    int pop()
    {
     
        if (isEmpty()) {
            cout << "Underflow\n";
            return -1;
        }
        return arr[top--];
    }
    int peek()
    {
        if (!isEmpty())
            return arr[top];
        else
            return -1;
    }

    bool isEmpty() { return top == -1; }
    bool isFull() { return top == capacity - 1; }
};
int main()
{
    Stack stack(100);
    stack.push(200);
    stack.push(300);
    stack.push(400);

  
    cout << "Peek:" << stack.peek() << endl;
    
    cout << "Pop:" << stack.pop() << endl;
 
    cout << "Top after Pop:" << stack.peek() << endl;

  
    stack.pop();
    stack.pop();

    if (stack.isEmpty()) {
        cout << "stack empty" << endl;
    }
    else {
        cout << "Stack not empty" << endl;
    }
}
