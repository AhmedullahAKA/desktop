#include <iostream>
#include <string>

using namespace std;


class CharNode {
    public:
    char data;
    CharNode* next;
};

class CharStack {
private:
    CharNode* top;

public:
    CharStack() {
        top = nullptr;
    }

   
    void push(char data) {
        CharNode* newNode = new CharNode;
        newNode->data = data;
        newNode->next = top;
        top = newNode;
    }

  
    char pop() {
        if (isEmpty()) {
            cerr << "Stack is empty." << endl;
            return '\0';
        }
        char data = top->data;
        CharNode* temp = top;
        top = top->next;
        delete temp;
        return data;
    }

   
   bool isEmpty() {
       return top == nullptr;
   }
};


bool isExpressionBalanced(string expression) {
    CharStack stack;
    for (char ch : expression) {
        if (ch == '(' || ch == '[' || ch == '{') {
            stack.push(ch);
        } else if (ch == ')' || ch == ']' || ch == '}') {
            if (stack.isEmpty()) {
                return false;
            }
            char topChar = stack.pop();
            if ((ch == ')' && topChar != '(') ||
                (ch == ']' && topChar != '[') ||
                (ch == '}' && topChar != '{')) {
                return false;
            }
        }
    }
    return stack.isEmpty(); 
}

int main() {
    
	string expression;
    cout << "Enter your expression: ";
    while (getline(cin, expression)) {
        if (isExpressionBalanced(expression)) {
            cout << "Expression is Balanced." << endl;
        } else {
            cout << "Expression is not Balanced." << endl;
        }
        cout << "do you want to check another on press y/n";
    }
}
