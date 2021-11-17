#include <bits/stdc++.h>
using namespace std;

// tokens
const string NUMBERS = "NUMBERS";
const string PLUS = "+";
const string MINUS = "-";
const string MUL = "*";
const string DIV = "/";
const string LPAREN = "(";
const string RPAREN = ")";

// check the token is number or not
bool is_numberic(string str)
{
  try
  {
    stod(str);
    return true;
  }
  catch (...)
  {
    return false;
  }
}

// evaluation of given text
double evaluateFP(string non_parsed_text)
{
  double calculated = 0.0;
  stack<double> num_stack;
  stack<string> op_stack;
  stringstream ss(non_parsed_text);
  string token;
  
  while (ss >> token)
  {
    if (token == RPAREN)
    {
      while (!op_stack.empty() && op_stack.top() != LPAREN)
      {
        double num2 = num_stack.top();
        num_stack.pop();
        double num1 = num_stack.top();
        num_stack.pop();
        string op = op_stack.top();
        op_stack.pop();
        if (op == PLUS)
        {
          num_stack.push(num1 + num2);
        }
        else if (op == MINUS)
        {
          num_stack.push(num1 - num2);
        }
        else if (op == MUL)
        {
          num_stack.push(num1 * num2);
        }
        else if (op == DIV)
        {
          num_stack.push(num1 / num2);
        }
      }
      op_stack.pop();
    }
    else if (token == LPAREN)
    {
      op_stack.push(token);
    }
    else if (is_numberic(token))
    {
      // if the token is number, push it to stack
      num_stack.push(stod(token));
    }
    else
    {
      op_stack.push(token);
    }
  }
  calculated = num_stack.top();
  return calculated;
}