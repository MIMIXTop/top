#include "FIND.h"

NodeT* add_product(NodeT* tree, MyZavod data) {

	if (tree == NULL) {

		tree = (NodeT*)malloc(sizeof(NodeT));

		tree->data = data;
		tree->left = NULL;
		tree->right = NULL;
		

	}else if (data.product < tree->data.product) {

		tree->left = add_product(tree->left, data);

	}
	else {

		tree->right = add_product(tree->right, data);

	}
	return tree;
}

NodeT* add_numbers(NodeT* tree, MyZavod data) {

	if (tree == NULL) {

		tree = (NodeT*)malloc(sizeof(NodeT));

		tree->data = data;
		tree->left = NULL;
		tree->right = NULL;
		

	}else if (data.numbers < tree->data.numbers) {

		tree->left = add_numbers(tree->left, data);

	}
	else {

		tree->right = add_numbers(tree->right, data);

	}
	return tree;
}

NodeT* add_sale(NodeT* tree, MyZavod data) {

	if (tree == NULL) {

		tree = (NodeT*)malloc(sizeof(NodeT));

		tree->data = data;
		tree->left = NULL;
		tree->right = NULL;


	}else if (data.sale < tree->data.sale) {

		tree->left = add_sale(tree->left, data);

	}
	else {

		tree->right = add_sale(tree->right, data);

	}
	return tree;
}

NodeT* add_one_pr(NodeT* tree, MyZavod data) {

	if (tree == NULL) {

		tree = (NodeT*)malloc(sizeof(NodeT));

		tree->data = data;
		tree->left = NULL;
		tree->right = NULL;


	}else if (data.one_pr < tree->data.one_pr) {

		tree->left = add_one_pr(tree->left, data);

	}
	else {

		tree->right = add_one_pr(tree->right, data);

	}
	return tree;
}

NodeT* add_cost_pr(NodeT* tree, MyZavod data) {

	if (tree == NULL) {

		tree = (NodeT*)malloc(sizeof(NodeT));

		tree->data = data;
		tree->left = NULL;
		tree->right = NULL;


	}else if (data.cost_price < tree->data.cost_price) {

		tree->left = add_cost_pr(tree->left, data);

	}
	else {

		tree->right = add_cost_pr(tree->right, data);

	}
	return tree;
}

NodeT* add_profit(NodeT* tree, MyZavod data) {

	if (tree == NULL) {

		tree = (NodeT*)malloc(sizeof(NodeT));

		tree->data = data;
		tree->left = NULL;
		tree->right = NULL;


	}else if (data.profit < tree->data.profit) {

		tree->left = add_profit(tree->left, data);

	}
	else {

		tree->right = add_profit(tree->right, data);

	}
	return tree;
}

void find_product(NodeT* tree, string field, int triger) {

if(tree != NULL){
	string temp = tree->data.product;

	if (temp == field and triger == 0) {
		cout << "Название : " << tree->data.product << endl;
		cout << "Произвели: " << tree->data.numbers << endl;
		cout << "Продали: " << tree->data.sale << endl;
		cout << "Цена одного товара: " << tree->data.one_pr << endl;
		cout << "Себестоимость товара: " << tree->data.cost_price << endl;
		cout << "Выручка: " << tree->data.profit << endl;
		cout << "---------------------------" << endl;
		system("pause");
		return;
	}

	if(field < temp)
		find_product(tree->left, field, triger);
	else
	find_product(tree->right, field, triger);
	}else {

		cout << "Элемент не найден\n\n";
		system("pause");

	}
	
}

void find_numbers(NodeT* tree, int field, int triger) {

	if(tree != NULL){

	if (tree->data.numbers == field and triger == 0) {
		cout << "Название : " << tree->data.product << endl;
		cout << "Произвели: " << tree->data.numbers << endl;
		cout << "Продали: " << tree->data.sale << endl;
		cout << "Цена одного товара: " << tree->data.one_pr << endl;
		cout << "Себестоимость товара: " << tree->data.cost_price << endl;
		cout << "Выручка: " << tree->data.profit << endl;
		cout << "---------------------------" << endl;
		system("pause");
		return;
	}

	if(field < tree->data.numbers)
		find_numbers(tree->left, field, triger);
	else
		find_numbers(tree->right, field, triger);
	}else {

		cout << "Элемент не найден\n\n";
		system("pause");

	}
}

void find_sale(NodeT* tree, int field, int triger) {

		if(tree != NULL){

	if (tree->data.sale == field and triger == 0) {
		cout << "Название : " << tree->data.product << endl;
		cout << "Произвели: " << tree->data.numbers << endl;
		cout << "Продали: " << tree->data.sale << endl;
		cout << "Цена одного товара: " << tree->data.one_pr << endl;
		cout << "Себестоимость товара: " << tree->data.cost_price << endl;
		cout << "Выручка: " << tree->data.profit << endl;
		cout << "---------------------------" << endl;
		system("pause");
		return;
	}

	if(field < tree->data.sale)
		find_sale(tree->left, field, triger);
	else
		find_sale(tree->right, field, triger);
	}else {

		cout << "Элемент не найден\n\n";
		system("pause");

	}
}

void find_one_pr(NodeT* tree, double field, int triger) {

		if(tree != NULL){

	if (tree->data.one_pr == field and triger == 0) {
		cout << "Название : " << tree->data.product << endl;
		cout << "Произвели: " << tree->data.numbers << endl;
		cout << "Продали: " << tree->data.sale << endl;
		cout << "Цена одного товара: " << tree->data.one_pr << endl;
		cout << "Себестоимость товара: " << tree->data.cost_price << endl;
		cout << "Выручка: " << tree->data.profit << endl;
		cout << "---------------------------" << endl;
		system("pause");
		return;
	}

	if(field < tree->data.one_pr)
		find_one_pr(tree->left, field, triger);
	else
	find_one_pr(tree->right, field, triger);
	}else {

		cout << "Элемент не найден\n\n";
		system("pause");

	}
}

void find_cost_pr(NodeT* tree,double field, int triger) {

		if(tree != NULL){

	if (tree->data.cost_price == field and triger == 0) {
		cout << "Название : " << tree->data.product << endl;
		cout << "Произвели: " << tree->data.numbers << endl;
		cout << "Продали: " << tree->data.sale << endl;
		cout << "Цена одного товара: " << tree->data.one_pr << endl;
		cout << "Себестоимость товара: " << tree->data.cost_price << endl;
		cout << "Выручка: " << tree->data.profit << endl;
		cout << "---------------------------" << endl;
		system("pause");
		return;
	}

	if(field < tree->data.cost_price)
		find_cost_pr(tree->left, field, triger);
	else
		find_cost_pr(tree->right, field, triger);
	}else {

		cout << "Элемент не найден\n\n";
		system("pause");

	}
}

void find_profit(NodeT* tree, double field, int triger) {

		if(tree != NULL){

	if (tree->data.cost_price == field and triger == 0) {
		cout << "Название : " << tree->data.product << endl;
		cout << "Произвели: " << tree->data.numbers << endl;
		cout << "Продали: " << tree->data.sale << endl;
		cout << "Цена одного товара: " << tree->data.one_pr << endl;
		cout << "Себестоимость товара: " << tree->data.cost_price << endl;
		cout << "Выручка: " << tree->data.profit << endl;
		cout << "---------------------------" << endl;
		system("pause");
		return;
	}

	if(field < tree->data.profit)
		find_profit(tree->left, field, triger);
	else
		find_profit(tree->right, field, triger);
	}else {

		cout << "Элемент не найден\n\n";
		system("pause");

	}
}

void freemem(NodeT* tree)
{

	if (tree != NULL)
	{
		freemem(tree->left);
		freemem(tree->right);
		free(tree);
	}
}

void findON(Stack* stk, double field) {

	int i = stk->top;
	Stack* new_st = (Stack*)malloc(sizeof(Stack));
	init(new_st);
	new_st->head = NULL;
	Node* tmp = NULL;

	Node* prit = NULL;
	prit = (Node*)malloc(sizeof(Node));
	int count = 0;


	while (i > 0) {
		tmp = pop_node(stk);
		if (tmp->value.one_pr == field and count != 1) {

			prit = tmp;
			count++;

		}
		i--;
		push(new_st, &tmp->value);
	}
	while (new_st->top > 0) {
		tmp = pop_node(new_st);
		push(stk, &tmp->value);
	}
	if (count == 1) {
		cout << "Название : " << prit->value.product << endl;
		cout << "Произвели: " << prit->value.numbers << endl;
		cout << "Продали: " << prit->value.sale << endl;
		cout << "Цена одного товара: " << prit->value.one_pr << endl;
		cout << "Себестоимость товара: " << prit->value.cost_price << endl;
		cout << "Выручка: " << prit->value.profit << endl;
		cout << "---------------------------" << endl;
		system("pause");
	}
	else {
		cout << "Элемент не найден\n";
		system("pause");
	}
	free(tmp);
	free(prit);

}

void findPRF(Stack* stk, double field) {

	int i = stk->top;
	Stack* new_st = (Stack*)malloc(sizeof(Stack));
	init(new_st);
	new_st->head = NULL;
	Node* tmp = NULL;
	Node* prit = NULL;
	prit = (Node*)malloc(sizeof(Node));
	int count = 0;


	while (i > 0) {
		tmp = pop_node(stk);
		if (tmp->value.profit == field and count != 1) {

			prit = tmp;
			count++;

		}
		i--;
		push(new_st, &tmp->value);
	}
	while (new_st->top > 0) {
		tmp = pop_node(new_st);
		push(stk, &tmp->value);
	}
	if (count == 1) {
		cout << "Название : " << prit->value.product << endl;
		cout << "Произвели: " << prit->value.numbers << endl;
		cout << "Продали: " << prit->value.sale << endl;
		cout << "Цена одного товара: " << prit->value.one_pr << endl;
		cout << "Себестоимость товара: " << prit->value.cost_price << endl;
		cout << "Выручка: " << prit->value.profit << endl;
		cout << "---------------------------" << endl;
		system("pause");
	}
	else {
		cout << "Элемент не найден\n";
		system("pause");
	}
	free(tmp);
	free(prit);

}