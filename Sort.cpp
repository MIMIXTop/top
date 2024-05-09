#include "Sort.h"

void sortFAST_numbers(Stack* stk, Stack* sort) {

	Node* pivot = NULL;
	pivot = (Node*)malloc(sizeof(Node*));

	Node* temp = NULL;
	temp = (Node*)malloc(sizeof(Node*));

	Stack* left, * right;
	left = (Stack*)malloc(sizeof(Stack));
	right = (Stack*)malloc(sizeof(Stack));

	init(left);
	init(right);

	pivot = pop_node(stk);

	int size = stk->top;

		push(left, &pivot->value);

		if (stk->top == 0) {
			push(sort, &pivot->value);
			return;
		}
		else {
			for (int i = 0; i < size; i++)
			{
				temp = pop_node(stk);
				if (temp->value.numbers < pivot->value.numbers) {
					push(left, &temp->value);
				}
				else {
					push(right, &temp->value);
				}
			}

			free(temp);
			if (left->top != 0) {
				sortFAST_numbers(left, sort);
			}
			if (right->top != 0) {
				sortFAST_numbers(right, sort);
			}
		}
			

}

void sortFAST_sale(Stack* stk, Stack* sort) {

	Node* pivot = NULL;
	pivot = (Node*)malloc(sizeof(Node*));

	Node* temp = NULL;
	temp = (Node*)malloc(sizeof(Node*));

	Stack* left, *right;
	left = (Stack*)malloc(sizeof(Stack));
	right = (Stack*)malloc(sizeof(Stack));

	init(left);
	init(right);

	pivot = pop_node(stk);

	int size = stk->top;

	push(left, &pivot->value);

	if (stk->top == 0) {
		push(sort, &pivot->value);
		return;
	}
	else {
		for (int i = 0; i < size; i++)
		{
			temp = pop_node(stk);
			if (temp->value.sale < pivot->value.sale) {
				push(left, &temp->value);
			}
			else {
				push(right, &temp->value);
			}
		}

		free(temp);
		if (left->top != 0) {
			sortFAST_sale(left, sort);
		}
		if (right->top != 0) {
			sortFAST_sale(right, sort);
		}
	}


}

void sortFAST_one_pr(Stack* stk, Stack* sort) {

	Node* pivot = NULL;
	pivot = (Node*)malloc(sizeof(Node*));

	Node* temp = NULL;
	temp = (Node*)malloc(sizeof(Node*));

	Stack* left, * right;
	left = (Stack*)malloc(sizeof(Stack));
	right = (Stack*)malloc(sizeof(Stack));

	init(left);
	init(right);

	pivot = pop_node(stk);

	int size = stk->top;

	push(left, &pivot->value);

	if (stk->top == 0) {
		push(sort, &pivot->value);
		return;
	}
	else {
		for (int i = 0; i < size; i++)
		{
			temp = pop_node(stk);
			if (temp->value.one_pr < pivot->value.one_pr) {
				push(left, &temp->value);
			}
			else {
				push(right, &temp->value);
			}
		}

		free(temp);
		if (left->top != 0) {
			sortFAST_one_pr(left, sort);
		}
		if (right->top != 0) {
			sortFAST_one_pr(right, sort);
		}
	}


}

void sortFAST_cost_pr(Stack* stk, Stack* sort) {

	Node* pivot = NULL;
	pivot = (Node*)malloc(sizeof(Node*));

	Node* temp = NULL;
	temp = (Node*)malloc(sizeof(Node*));

	Stack* left, * right;
	left = (Stack*)malloc(sizeof(Stack));
	right = (Stack*)malloc(sizeof(Stack));

	init(left);
	init(right);

	pivot = pop_node(stk);

	int size = stk->top;

	push(left, &pivot->value);

	if (stk->top == 0) {
		push(sort, &pivot->value);
		return;
	}
	else {
		for (int i = 0; i < size; i++)
		{
			temp = pop_node(stk);
			if (temp->value.cost_price < pivot->value.cost_price) {
				push(left, &temp->value);
			}
			else {
				push(right, &temp->value);
			}
		}

		free(temp);
		if (left->top != 0) {
			sortFAST_cost_pr(left, sort);
		}
		if (right->top != 0) {
			sortFAST_cost_pr(right, sort);
		}
	}


}

void sortFAST_profit(Stack* stk, Stack* sort) {

	Node* pivot = NULL;
	pivot = (Node*)malloc(sizeof(Node*));

	Node* temp = NULL;
	temp = (Node*)malloc(sizeof(Node*));

	Stack* left, * right;
	left = (Stack*)malloc(sizeof(Stack));
	right = (Stack*)malloc(sizeof(Stack));

	init(left);
	init(right);

	pivot = pop_node(stk);

	int size = stk->top;

	push(left, &pivot->value);

	if (stk->top == 0) {
		push(sort, &pivot->value);
		return;
	}
	else {
		for (int i = 0; i < size; i++)
		{
			temp = pop_node(stk);
			if (temp->value.profit < pivot->value.profit) {
				push(left, &temp->value);
			}
			else {
				push(right, &temp->value);
			}
		}

		free(temp);
		if (left->top != 0) {
			sortFAST_profit(left, sort);
		}
		if (right->top != 0) {
			sortFAST_profit(right, sort);
		}
	}


}

void sortFAST_product(Stack* stk, Stack* sort) {
	string piv_str, temp_str;

	Node* pivot = NULL;
	pivot = (Node*)malloc(sizeof(Node*));

	Node* temp = NULL;
	temp = (Node*)malloc(sizeof(Node*));

	Stack* left, * right;
	left = (Stack*)malloc(sizeof(Stack));
	right = (Stack*)malloc(sizeof(Stack));

	init(left);
	init(right);

	pivot = pop_node(stk);

	int size = stk->top;

	piv_str = pivot->value.product;

	push(left, &pivot->value);

	if (stk->top == 0) {
		push(sort, &pivot->value);
		return;
	}
	else {
		for (int i = 0; i < size; i++)
		{
			temp = pop_node(stk);

			temp_str = temp->value.product;

			if (temp_str < piv_str){
				push(left, &temp->value);
			}
			else {
				push(right, &temp->value);
			}
		}

		free(temp);
		if (left->top != 0) {
			sortFAST_product(left, sort);
		}
		if (right->top != 0) {
			sortFAST_product(right, sort);
		}
	}


}