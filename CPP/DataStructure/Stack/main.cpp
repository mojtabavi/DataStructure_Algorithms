#include "iostream"
#include "stdlib.h"
using namespace std;
# define SIZE 5

class stack {
    public:
        stack();
        int empty();
        void pushAndTest(int x, int &);
        void popAndTest(int &, int &);
        void topAndTest(int &, int &);
        void display();
    private:
        int myTop;
        int items[SIZE];
};

//*******************************************

stack::stack()
{
    myTop = -1;
}

//*******************************************

int stack::empty()
{
    return ( myTop == -1 );
}

//*******************************************

void stack::pushAndTest(int x, int &overflow)
{
    if(myTop == SIZE - 1)
        overflow = 1;
    else
    {
        overflow = 0;
        items[++myTop] = x;
    }
    
}

//********************************************

void stack::popAndTest(int &x, int &undeflow)
{
    if(empty())
        undeflow = 1;
    else
    {
        undeflow = 0;
        x = items[myTop--];
    }
}

//********************************************

void stack::topAndTest(int &x, int &underflow)
{
    if(empty())
        underflow = 1;
    else
    {
        underflow = 0;
        x = items[myTop];
    }
}

//********************************************

void stack::display()
{
    for(int i = myTop; i > 0; i--)
        cout << items[i] << " ";
    cin.get();
}

//********************************************

int menu();
int main()
{
    int x, underflow, overflow;
    stack s;
    while(1)
    {   
        
        switch (menu())
        {
        case 1:
            s.display();
            break;
        
        case 2:
            cout << "Enter x to push:";
            cin >> x;
            s.pushAndTest(x, overflow);
            if(overflow)
            {
                cout << "Stack is full.";
                cin.get();
            }
            break;
        
        case 3:
            s.popAndTest(x, underflow);
            if(underflow)
                cout << "Stack is empty.";
            else
                cout << "Poped Value is " << x;
            cin.get();
            break;
        case 4:
            s.topAndTest(x, underflow);
            if(underflow)
                cout << "Stack is empty.";
            else
                cout << "Retrieved value is " << x;
            cin.get();
            break;
        case 5:
            exit(1);
        
        }//end of switch
    }//end of while
}

//********************************************

int menu()
{
    int c;
    cout << endl;
    cout << "1.Print stack.\n";
    cout << "2.Add to stack.\n";
    cout << "3.Pop from stack.\n";
    cout << "4.Retrieve from stack.\n";
    cout << "5.Exit\n";
    cout << "Enter Your Select(1-5):";
    cin >> c;
    return c;
}