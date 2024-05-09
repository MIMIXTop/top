#include "steck.h"

void push(Stack* stk, MyZavod* value) {

	Node* tmp = (Node*)malloc(sizeof(Node));

	tmp->next = stk->head;
	tmp->value = *value;
	stk->head = tmp;
	stk->top++;

}

Node* pop_node(Stack* stk) {
	Node* out;

	out = stk->head;
	stk->head = stk->head->next;
	stk->top--;

	return out;
}

void init(Stack* stk) {
	stk->top = 0;
}

void del_el_s(Stack* stk, int number) {

	Stack* new_st = (Stack*)malloc(sizeof(Stack));
	init(new_st);
	new_st->head = NULL;
	Node* tmp = NULL;

	if (number == stk->top) {
		pop_node(stk);
	}
	else {
		while (stk->top - number > 0) {
			tmp = pop_node(stk);
			push(new_st, &tmp->value);
		}
		pop_node(stk);
		while (new_st->top > 0) {
			tmp = pop_node(new_st);
			push(stk, &tmp->value);
		}
		free(tmp);
	}
}

void del_full(Stack* stk) {
	while (stk->top > 0) {
		pop_node(stk);
	}
}


void Stack_swap(Stack* stk, int num1, int num2) {

	Node *buf1 = NULL, *buf2 = NULL;

	Stack* new_st = (Stack*)malloc(sizeof(Stack));
	init(new_st);
	new_st->head = NULL;
	Node* tmp = NULL;
	
	if (num2 < num1) {
		swap(num1, num2);
	}
	else {

		int go1 = stk->top - num2;
		int back1 = go1;

		while (go1 > 0 )
		{
			tmp = pop_node(stk);
			push(new_st, &tmp->value);
			go1--;
		}

		buf1 = pop_node(stk);

		int go2 = stk->top - num1;
		int back2 = go2;

		while ( go2 > 0)
		{
			tmp = pop_node(stk);
			push(new_st, &tmp->value);
			go2--;
		}

		buf2 = pop_node(stk);
		push(stk, &buf1->value);

		while (back2 > 0)
		{
			tmp = pop_node(new_st);
			push(stk, &tmp->value);
			back2--;
		}

		push(stk, &buf2->value);

		while (back1 > 0)
		{
			tmp = pop_node(new_st);
			push(stk, &tmp->value);
			back1--;
		}

	}
}

void print_Stack_Table(Stack* stk) {

	int i = stk->top;
	Stack* new_st = (Stack*)malloc(sizeof(Stack));
	init(new_st);
	new_st->head = NULL;
	Node* tmp = NULL;
	if(stk->top > 0){
	cout << "|-----------------------------------------------------------------------------------------------|\n";
	cout << "|" << setw(16) << "Название|" <<setw(16)<<"Произведено|"<< setw(16) << "Продано|" << setw(16) << "Цена|" << setw(16) << "Себестоимость|" << setw(17) << "Прибыль|\n";
	cout << "|-----------------------------------------------------------------------------------------------|\n";

	while (i > 0) {
		tmp = pop_node(stk);
		cout << "|"<< setw(15) << tmp->value.product << "|" << setw(15) << tmp->value.numbers << "|" << setw(15)  << tmp->value.sale << "|" << setw(15) << tmp->value.one_pr << "|" << setw(15) << tmp->value.cost_price << "|" << setw(15) << tmp->value.profit << "|" << endl;
		cout << "|-----------------------------------------------------------------------------------------------|\n";
		i--;
		push(new_st, &tmp->value);
	}
	while (new_st->top > 0) {
		tmp = pop_node(new_st);
		push(stk, &tmp->value);
	}
	
	}else{
		
	cout << "Стек пуст!";
}
	free(tmp);
}

void printStack(Stack* stk) {
	int i = stk->top;
	Stack* new_st = (Stack*)malloc(sizeof(Stack));
	init(new_st);
	new_st->head = NULL;
	Node* tmp = NULL;
	if(stk->top > 0){
	while (i > 0) {
		tmp = pop_node(stk);
		cout << "Название : " << tmp->value.product << endl;
		cout << "Произвели: " << tmp->value.numbers << endl;
		cout << "Продали: " << tmp->value.sale << endl;
		cout << "Цена одного товара: " << tmp->value.one_pr << endl;
		cout << "Себестоимость товара: " << tmp->value.cost_price << endl;
		cout << "Выручка: " << tmp->value.profit << endl;
		cout << "---------------------------" << endl;
		i--;
		push(new_st, &tmp->value);
	}
	while (new_st->top > 0) {
		tmp = pop_node(new_st);
		push(stk, &tmp->value);
	}
}else{
	cout << "Стек пуст!";
}
	free(tmp);
}

Stack* refresh(Stack* stk,int i) {

	Stack* new_st = (Stack*)malloc(sizeof(Stack));
	init(new_st);
	new_st->head = NULL;
	Node* tmp = NULL;
	
	if (i == 1) {
		while (stk->top > 0) {
			tmp = pop_node(stk);
			push(new_st, &tmp->value);
		}
		return new_st;
	}

	return stk;

} 

void fieldChange(Stack* stk, int num){

Stack* new_stk = (Stack*)malloc(sizeof(Stack));
new_stk->head = NULL;
Node* temp = NULL;

string s;
int numFilde;

init(new_stk);

for(int i = stk->top,n = 0;n < i - num; n++){

	temp = pop_node(stk);
	push(new_stk, &temp->value);

}

menu_fields1();
while(true){

	s = test("Введите номер поля: ",1);
	numFilde = stoi(s);
	if(numFilde <= 6){
		break;
	}
	cout << "Нет такого поля \n";

}

 stk->head = Change(stk->head,numFilde);

while(new_stk->top > 0){

	temp = pop_node(new_stk);
	push(stk, &temp->value);

}

}

Node* Change(Node* stk, int numField){

	string s;

	switch (numField)
	{
	case 1:
		s = test("Введите необходимое значение: ",3);

		    s.copy(stk->value.product, s.size() + 1);
    		stk->value.product[s.size()] = '\0';
		break;
	case 2:
		s = test("Введите необходимое значение: ",1);
		stk->value.numbers = stoi(s);
		break;
	case 3:
		s = test("Введите необходимое значение: ",1);
		stk->value.sale = stoi(s);
		break;
	case 4:
		s = test("Введите необходимое значение: ",4);
		stk->value.one_pr = stod(s);
		break;
	case 5:
		s = test("Введите необходимое значение: ",4);
		stk->value.cost_price = stod(s);
		break;
	case 6:
		s = test("Введите необходимое значение: ",4);
		stk->value.profit = stod(s);
		break;
	}

	return stk;

}

