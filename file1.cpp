#include "file1.h"

void new_BD(const string& bd_file_name)
{
    ofstream suske;
    suske.open(bd_file_name);
    if (!suske.is_open())
    {
        cout << "Ошибка при создании файла\n";
    }
    else {
        cout << "Файл успешно создан\n";
    }
    system("pause");
}

void save_BD(Stack*stk) {

    int i = stk->top;
    Stack* new_st = (Stack*)malloc(sizeof(Stack));
    init(new_st);
    new_st->head = NULL;
    Node* tmp = NULL;
    
    fstream vasy;
    string file;
    while(true){
while (true)
{
    file = test("Введите имя файла для ввода: ", 2);
    cout << endl;
    vasy.open(file, ios::app);
    if(!vasy.fail()){
    if (!vasy.is_open())
    {
        cout << "Ошибка при открытии файла !!!\n";
    }
    else {
        while (stk->top > 0) {
            tmp = pop_node(stk);
            vasy << tmp->value.product << endl;
            vasy << tmp->value.numbers << endl;
            vasy << tmp->value.sale << endl;
            vasy << tmp->value.one_pr << endl;
            vasy << tmp->value.cost_price << endl;
            vasy << tmp->value.profit << endl;
            push(new_st, &tmp->value);
        }

        while (new_st->top > 0) {

            tmp = pop_node(new_st);
            push(stk, &tmp->value);
        }
        return;
    }
    } else {
        
        cout << "Файл не существует попробуйте снова ...\n\n";

    }
        }
    }
}

void remove_BD(const string& file) {
    if (remove(file.c_str()) == 0) {
        cout << "Файл успешно удален!!!\n";
        system("pause");
    }
    else {
        cout << "Ошибка при удалении файла !!!\n";
        system("pause");
    }

}

void load_BD(Stack* stk) {
    string file, line;
    int counter;
    MyZavod* durian;
    durian = (MyZavod*)malloc(sizeof(MyZavod));

    counter = 0;
    while(true){
    file = test("Введите имя файла для считывания: ", 2);
    ifstream suske;

    suske.open(file, ios::in);
    if(!suske.fail()){
    if (!suske.is_open()) {

    cout << "ERROR!!";  

    } else {
    while (getline(suske, line)) {
        counter++;
    }

    suske.clear();
    suske.seekg(0);

    counter = counter / 6;

        for (int n = 0; n < counter; n++) {
            
            suske.getline(durian->product, 60);
            getline(suske, line);
            durian->numbers = stoi(line);
            getline(suske, line);
            durian->sale = stoi(line);
            getline(suske, line);
            durian->one_pr = stod(line);
            getline(suske, line);
            durian->cost_price = stod(line);
            getline(suske, line);
            durian->profit = stod(line);

            push(stk, durian);
        }
    }
    }else{

        cout << "Файла не существуют попробуйте снова ... \n\n";

    }

    }
}