#include <iostream>
#include <string>
using namespace std;

// Define the Character struct
struct Character {
    char ch;
    Character* next;
};

// Define the Stack class using a linked list
class Stack {
private:
    Character* top;

public:
    Stack() {
        top = nullptr;
    }

    void push(char ch) {
        Character* newNode = new Character;
        newNode->ch = ch;
        newNode->next = top;
        top = newNode;
    }

    char pop() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return '\0'; // Return a null character to indicate an empty stack.
        }

        Character* temp = top;
        char poppedChar = top->ch;
        top = top->next;
        delete temp;
        return poppedChar;
    }

    bool isEmpty() {
        return top == nullptr;
    }
};

// Function to check if an expression string is balanced
bool checkExpression(const string& expression) {
    Stack charStack;
    
    for (char ch : expression) {
        if (ch == '(' || ch == '[' || ch == '{') {
            charStack.push(ch);
        } else if (ch == ')' || ch == ']' || ch == '}') {
            if (charStack.isEmpty()) {
                return false; // Unmatched closing bracket
            }
            char poppedChar = charStack.pop();
            if ((ch == ')' && poppedChar != '(') ||
                (ch == ']' && poppedChar != '[') ||
                (ch == '}' && poppedChar != '{')) {
                return false; // Mismatched brackets
            }
        }
    }
    
    return charStack.isEmpty(); // Check if all brackets are matched.
}

int main() {
    string expression;
    cout << "Enter an expression: ";
    cin >> expression;

    if (checkExpression(expression)) {
        cout << "The expression is balanced." << endl;
    } else {
        cout << "The expression is not balanced." << endl;
    }
    
    return 0;
}
