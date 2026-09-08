#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int priority(char c){
    if(c == '^'){
        return 3;
    }
    else if(c == '*' || c == '/'){
        return 2;
    }
    else if(c == '+' || c == '-'){
        return 1;
    }
    return 0;
}

int main(){

int i =0;

cout << "Enter the infix expression: ";
string s;
cin >> s;


stack <char> st;
string ans = "";

while(i < s.length()) {
if(s[i] >= 'a' && s[i]<= 'z' || 
    s[i] >= 'A' && s[i] <= 'Z') {
    ans += s[i];
}

else if(s[i] == '('){
    st.push(s[i]);
}
else if(s[i] == ')'){

while(!st.empty() && st.top() != '('){
    ans += st.top();
    st.pop();
}
st.pop();
}

else{
   while(!st.empty() && 
   st.top() != '(' &&
   priority(s[i]) <= priority(st.top())){

   ans += st.top();
   st.pop();
   } 
   st.push(s[i]);
}
i++;
}
while(!st.empty()){
    ans += st.top();
    st.pop();
}
cout << "The postfix expression is: " << ans << endl;
    return 0;
}