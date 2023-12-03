#include <iostream>
using namespace std;

class stack1 {
private:
    int num[5], top, max_size;

public:
    stack1();
    void push();
    void pop();
    int get_top();
    int display();
    int isempty();
    int isfull();
};

stack1::stack1() {
    top = -1;
    max_size = 5;
}

void stack1::push() {
    int t;
    if (top < max_size - 1) {
        cout << "\tEnter the five values: \t";
        cin >> t;
        top++;
        num[top] = t;
    }
    else {
        cout << "\tStack is Full " << "\n";
    }
}

void stack1::pop() {
    if (top == -1) {
        cout << "\tStack is empty\n";
    }
    else {
        top--;
    }
}

int stack1::get_top() {
    if (top != -1) {
        return num[top];
    }
    else {
        return -1;
    }
}

int stack1::display() {
    cout << "\n\tValues for the stack 1 are below\n";
    for (int i = 0; i <= top; i++) {
        cout << "\t Inserted vlaues are : " << num[i] << "\t\n";
    }
return 0;
}

int stack1::isempty() {
    return top == -1;
}

int stack1::isfull() {
    return top == max_size - 1;
}
class stack2 {
private:
    int num[5], top, max_size;

public:
    stack2();
    void push();
    void pop();
    int get_top();
    int display();
    int isempty();
    int isfull();
};

stack2::stack2() {
    top = -1;
    max_size = 5;
}

void stack2::push() {
    int t;
    if (top < max_size - 1) {
        cout << "\tEnter the five values: \t";
        cin >> t;
        top++;
        num[top] = t;
    }
    else {
        cout << "\tStack is Full " << "\n";
    }
}

void stack2::pop() {
    if (top == -1) {
        cout << "\tStack is empty\n";
    }
    else {
        top--;
    }
}

int stack2::get_top() {
    if (top != -1) {
        return num[top];
    }
    else {
        return -1;
    }
}

int stack2::display() {
    cout << "\n\tValues for the stack 2 are below\n";
    for (int i = 0; i <= top; i++) {
        cout << "\t Inserted values are : " << num[i] << "\t\n";
    }
return 0;
}

int stack2::isempty() {
    return top == -1;
}

int stack2::isfull() {
    return top == max_size - 1;
}
int main() {
    stack1 s1;
    stack2 s2;
    cout << "\t***********************************************************\n";
    cout << "\tEnter the value for stack1: " << "\n";
    for (int i = 0; i < 5; i++) {
        cout <<"\t";
        s1.push();
    }
    s1.display();
    cout << "\n\tEnter the value for stack2: " << "\n";
    for (int i = 0; i < 5; i++) {
        cout <<"\t";
        s2.push();
    }
    s2.display();
    cout << " \n\tChecking if they are identical or not\n";
    bool identical = true;
    for (int i = 0; i < 5; i++) {
        if (s1.get_top() != s2.get_top()) {
            identical = false;
            break;
        }
        s1.pop();
        s2.pop();
    }

    if (identical) {
        cout << "\n\t Stacks are identical \n";
    } else {
        cout <<"\n\t Stacks are not identical \n";
    }
    cout << "\t**********************************************************\n";
    return 0;
}

