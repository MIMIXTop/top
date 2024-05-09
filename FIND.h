#pragma once
#ifndef  FIND_H
#define FIND_H

#include "struct.h"
#include "steck.h"
#include <iostream>

using namespace std;

struct NodeT {
	MyZavod data;
	NodeT* left;
	NodeT* right;
};

NodeT* add_product(NodeT* tree, MyZavod data);

NodeT* add_numbers(NodeT* tree, MyZavod data);

NodeT* add_sale(NodeT* tree, MyZavod data);

NodeT* add_one_pr(NodeT* tree, MyZavod data);

NodeT* add_cost_pr(NodeT* tree, MyZavod data);

NodeT* add_profit(NodeT* tree, MyZavod data);

//-----------------------------------------

void find_product(NodeT* tree, string field, int triger);

void find_numbers(NodeT* tree, int field, int triger);

void find_sale(NodeT* tree, int field, int triger);

void find_one_pr(NodeT* tree, double field, int triger);

void find_cost_pr(NodeT* tree, double field, int triger);

void find_profit(NodeT* tree, double field, int triger);

//------------------------------------------
void freemem(NodeT* tree);

#endif // ! FIND_H
