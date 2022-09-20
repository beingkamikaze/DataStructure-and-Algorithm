#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int prec(char c)
{
    if(c=='^')
    return 3;
    else if(c=='/'||c=='*')
    return 2;
    else if(c=='+'||c=='-')
    return 1;
    else
    return -1;
}
void infixtopostfix(string s)
{
    stack<char> st;
    string result;
    for(int i=0;i<s.length();i++)
    {
        char c=s[i];
        //If c is operand
        if((c>='a'&&c<='z')||(c>='A' && c<='Z')||(c>='0'&& c<='9'))
        result+=c;
        //if c is '('
        else if(c=='(')
        st.push('(');
        else if(c==')')
        {
            while(st.top()!='(')
            {
                result+=st.top();
                st.pop();
            }
            st.pop();
        }
        //if c is an operand
        else
        {
            while(!st.empty() && prec(s[i])<= prec(st.top()))
            {
                if(c=='^' && st.top()!='^')
                break;
                else
                {
                    result +=st.top();
                    st.pop();
                }
            }
            st.push(c);
        }
    }
        while (!st.empty()) {
        result += st.top();
        st.pop();
    }
 
    cout << result << endl;
}
int main()
{
    string exp = "a+b*(c^d-e)^(f+g*h)-i";
 
    // Function call
    infixtopostfix(exp);
    return 0;
}