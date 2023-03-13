
#include<bits/stdc++.h>
using namespace std;
int calcOperand(int a,int b,char op)
{
    int val;
    switch(op)
    {
        case '+':
            val = b + a;
            break;
        case '-':
            val = b - a;
            break;
        case '*':
            val = b * a;
            break;
        case '/': 
            val = b / a;
            break;
        default:
            break;
    }
    return val;
}
int calcPostfix(string str)
{
    stack<int> st;
    for(int i = 0; i < str.length();i++)
    {
        if(isdigit(str[i]))
        {
            st.push(str[i] - '0');
        }
        else
        {
            int num1 = st.top();
            st.pop();
            int num2 = st.top();
            st.pop();

            int value = calcOperand(num1,num2,str[i]);

            st.push(value);
        }
    }
    return st.top();
}
int main()
{

    string expression;
    cout << "\nEnter postfix expression : ";
    getline(cin,expression);

    cout << "\nThe value of postfix expression is : " << calcPostfix(expression);
    return 0;
}