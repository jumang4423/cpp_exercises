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

map<string, int> precedence = {
    {LPAREN, 0}, {RPAREN, 0}, {PLUS, 1}, {MINUS, 1}, {MUL, 2}, {DIV, 2}};

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

double calculate(double num1, double num2, string op)
{
  if (op == PLUS)
    return num1 + num2;
  else if (op == MINUS)
    return num1 - num2;
  else if (op == MUL)
    return num1 * num2;
  else if (op == DIV)
    return num1 / num2;
  else
    return 0;
}

// evaluation of given text
double evaluate(string non_parsed_text)
{
  double calculated = 0.0;
  stack<double> num_stack;
  stack<string> op_stack;
  stringstream ss(non_parsed_text);
  string token;

  while (ss >> token)
  {
    if (is_numberic(token))
    {
      num_stack.push(stod(token));
    }
    else if (token == MUL || token == DIV || token == PLUS || token == MINUS)
    {
      while (!op_stack.empty() && precedence[op_stack.top()] >= precedence[token])
      {
        double num2 = num_stack.top();
        num_stack.pop();
        double num1 = num_stack.top();
        num_stack.pop();
        string op = op_stack.top();
        op_stack.pop();
        num_stack.push(calculate(num1, num2, op));
      }
      op_stack.push(token);
    }
    else if (token == LPAREN)
    {
      op_stack.push(LPAREN);
    }
    else if (token == RPAREN)
    {
      while (!op_stack.empty() && op_stack.top() != LPAREN)
      {
        double num2 = num_stack.top();
        num_stack.pop();
        double num1 = num_stack.top();
        num_stack.pop();
        string op = op_stack.top();
        op_stack.pop();
        num_stack.push(calculate(num1, num2, op));
      }
      op_stack.pop();
    }
  }

  while (!op_stack.empty())
  {
    double num2 = num_stack.top();
    num_stack.pop();
    double num1 = num_stack.top();
    num_stack.pop();
    string op = op_stack.top();
    op_stack.pop();
    num_stack.push(calculate(num1, num2, op));
  }

  calculated = num_stack.top();

  return calculated;
}