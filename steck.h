#pragma once
#ifndef STECK_H
#define STECKH

#include <iostream>
#include  <cstdlib>
#include <iomanip>
#include <windows.h>
#include "struct.h"
#include "input_output.h"

using namespace std;

struct Node {
	MyZavod value;
	Node* next;
};

struct Stack {
	Node* head;
	int top;
};

void push(Stack* stk, MyZavod* value);//

Node* pop_node(Stack* stk);

void init(Stack* stk);

void del_el_s(Stack* stk,int number);

void del_full(Stack* stk);

void Stack_swap(Stack* stk, int num1,int num2);

void print_Stack_Table(Stack* stk);

void printStack(Stack* stk);

Stack* refresh(Stack* stk,int i);

void fieldChange(Stack* stk, int num);

Node* Change(Node* stk,int numField);

#endif // !STECK_H
