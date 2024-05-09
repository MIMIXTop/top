#pragma once
#ifndef SORT_H
#define SORT_H

#include <cctype>
#include "struct.h"
#include "steck.h"

using namespace std;

void sortFAST_numbers(Stack* stk, Stack* sort);

void sortFAST_one_pr(Stack* stk, Stack* sort);

void sortFAST_sale(Stack* stk, Stack* sort);

void sortFAST_cost_pr(Stack* stk, Stack* sort);

void sortFAST_profit(Stack* stk, Stack* sort);

void sortFAST_product(Stack* stk, Stack* sort);

#endif // !SORT_H
