#include "menu.h"
void menu() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_ALL, "RU");

    bool finish = true;
    int n, count = 0;
    int j,f, f1;
    int i = 0;
    ofstream rat;
    double dn;
    




    string s;
    string file;
    MyZavod* durian;
    Stack* stk, *vr;
    stk = ( Stack*)malloc(sizeof(Stack));
    vr = (Stack*)malloc(sizeof(Stack));
    init(stk);
    init(vr);
    NodeT* root = NULL;



    Stack* new_stk;
    new_stk = (Stack*)malloc(sizeof(Stack));
    Node* temp = NULL;
    init(new_stk);
    new_stk->head == NULL;
    int sdf = stk->top;
    string field;


    durian = (MyZavod*)malloc(sizeof(MyZavod));

    while (finish) {
        system("cls");
        main_menu();

        s = test("Что хотите сделать: ", 1);
        n = stoi(s);

        switch (n)
        {
        case 1:// работа со структурой 

            while (finish)
            {
                system("cls");
                menu_str();
                s = test("Что хотите сделать: ", 1);
                n = stoi(s);
                switch (n)
                {
                case 1:// добавление 

                    s = test("Сколько структур хотите заполнить: ", 1);
                    j = stoi(s);

                    system("cls");
                    cout << "Ввод ограничен до 15 символов !!!\n\n";
                    for (int k = 0; k < j; k++) {
                        write(durian);
                        cout << "---------------------------" << endl;
                        push(stk, durian);
                    }

                    break;
                case 2:// удаление 
                    system("cls");
                    del();

                    s = test("Что хотите сделать: ", 1);
                    f = stoi(s);

                    switch (f)
                    {
                    case 1:// удаление всего стрека
                        if (stk->top == 0) {
                            cout << "Стек пуст !!!";
                        }
                        else {
                            
                            del_full(stk);
                            cout << "Стек очищен\n";
                        }
                        system("pause");
                        break;
                    case 2:// удаление элемента стека

                        s = test("Введите элемент который хотите удалить: ", 1);
                        f = stoi(s);

                        if(f == 0 or stk->top < f){
                            cout << "Нет такого элемента\n";
                            system("pause");
                            break;
                        }

                        if (stk->top == 0) {
                            cout << "Стек пуст !!!";
                        }
                        else {
                            system("cls");
                            del_el_s(stk, f);
                            cout << "Элемент удален успешно ";
                        }
                        system("pause");
                        break;
                    case 3:// выход
                        finish = false;
                        break;
                    default:
                        break;
                    }

                    finish = true;
                    break;
                case 3:// вывод
                    while (finish) {
                        system("cls");
                        menu_out();

                        s = test("Что хотите сделать : ", 1);
                        n = stoi(s);
                        switch (n)
                        {
                        case 1:// вывод структурой
                            system("cls");

                            printStack(stk);

                            system("pause");
                            break;
                        case 2:// вывод таблицей
                            system("cls");

                            print_Stack_Table(stk);

                            system("pause");
                            break;
                        case 3:// выход
                            finish = false;
                            break;
                        default:
                            break;
                        }
                    }

                    finish = true;
                    break;
                case 4:// обмен элементов
                if( stk->top > 2){

                while(true){
                    s = test("Какой элемент вы хотите поменять: ", 1);
                    f = stoi(s);

                    if(stk->top >= f)
                        break;
                    cout << "В стеке нет такого элемента \n";
                }


                while(true){
                    s = test("С каким элементом вы хотите поменять: ", 1);
                    f1 = stoi(s);

                    if(stk->top >= f)
                        break;
                    cout << "В стеке нет такого элемента \n";
                }
                
                    Stack_swap(stk, f, f1);
                } else if(stk->top == 2) {

                    Stack_swap(stk,1,2);

                } else {

                    cout << "Недостаточно элементов для обмена\n\b";
                    system("pause");

                }
                
                    break;
                case 5://редактирование данных с структурах

                system("cls");

                if(stk->top == 0){

                    cout << "Стек пуст \n";
                    system("pause");
                    break;

                }

                s = test("Введите номер структуры: ",1); 
                n = stoi(s);
                fieldChange(stk,n);

                system("pause");

                    break;
                case 6:// выход

                finish = false;

                    break;
                }
            }

            finish = true;
            break;
        case 2:// работа с файлами 
            while (finish) {
                system("cls");
                menu_file();

                s = test("Что хотите сделать: ", 1);
                n = stoi(s);

                switch (n)
                {
                case 1:// создание файла 
                    system("cls");

                    s = test("Введите имя файла: ", 2);
                    file = s;

                    new_BD(file);
                    

                    break;
                case 2: // удаление файла

                    while (true)
                    {  
                        
                        s = test("Введите имя файла: ", 2);
                        file = s;
                        ifstream fil;
                        fil.open(file);
                        
                    }
                    remove_BD(file);

                    break;
                case 3: //сохранение данных в файл

                if(stk->top > 0){
                    save_BD(stk);
                    }else{
                        cout << "Стек пуст";
                        system("pause");
                    }

                    break;
                case 4:// выгрузка данных из файла
                    load_BD(stk);
                    break;
                case 5:
                    finish = false;
                    break;
                default:
                    break;
                }
            }

            finish = true;
            break;
        case 3:// сортировка и поиск 
        if(stk == NULL){

            cout << "Стек пуст";
            system("pause");
            break;

        }
            while (finish)
            {
                system("cls");
                sort_find();

                s = test("Что хотите сделать: ", 1);

                n = stoi(s);

                switch (n)
                {
                case 1://sort
                    if(stk->top > 0){
                    while (finish) {
                        system("cls");
                        menu_sort();

                        s = test("Что хотите сделать : ", 1);
                        n = stoi(s);
                        switch (n)
                        {
                        case 1://быстрая сортировка
                        
                            while (finish) {
                                system("cls");



                                menu_fields();

                                s = test("Что хотите сделать : ", 1);
                                n = stoi(s);

                                switch (n)
                                {
                                case 1:// Название 

                                    while (finish) {
                                        system("cls");
                                        sort_string();

                                        s = test("Что хотите сделать : ", 1);
                                        n = stoi(s);

                                        switch (n)
                                        {
                                        case 1:// а->я
                                            sortFAST_product(stk, vr);
                                            stk = refresh(vr, 1);
                                            break;
                                        case 2:// я->а
                                            sortFAST_product(stk, vr);
                                            stk = refresh(vr,0);
                                            break;
                                        case 3:// Выход
                                            finish = false;
                                            break;
                                        default:
                                            break;
                                        }
                                    }
                                    finish = true;
                                    break;
                                case 2:// Произведено 

                                    while (finish) {
                                        system("cls");
                                        type_sort();

                                        s = test("Что хотите сделать : ", 1);
                                        n = stoi(s);

                                        switch (n)
                                        {
                                        case 1:// 0->9
                                            sortFAST_numbers(stk, vr);
                                            stk = refresh(vr, 1);
                                            break;
                                        case 2:// 9->0
                                            sortFAST_numbers(stk, vr);
                                            stk = refresh(vr, 0);
                                            break;
                                        case 3:// Выход
                                            finish = false;
                                            break;
                                        default:
                                            break;
                                        }
                                    }
                                    finish = true;

                                    break;
                                case 3:// Продано

                                    while (finish) {
                                        system("cls");
                                        type_sort();

                                        s = test("Что хотите сделать : ", 1);
                                        n = stoi(s);

                                        switch (n)
                                        {
                                        case 1:// 0->9
                                            sortFAST_sale(stk, vr);
                                            stk = refresh(vr, 1);
                                            break;
                                        case 2:// 9->0
                                            sortFAST_sale(stk, vr);
                                            stk = refresh(vr, 0);
                                            break;
                                        case 3:// Выход
                                            finish = false;
                                            break;
                                        default:
                                            break;
                                        }
                                    }
                                    finish = true;

                                    break;
                                case 4:// Цена

                                    while (finish) {
                                        system("cls");
                                        type_sort();

                                        s = test("Что хотите сделать : ", 1);
                                        n = stoi(s);

                                        switch (n)
                                        {
                                        case 1:// 0->9
                                            sortFAST_one_pr(stk, vr);
                                            stk = refresh(vr, 1);
                                            break;
                                        case 2:// 9->0
                                            sortFAST_one_pr(stk, vr);
                                            stk = refresh(vr, 0);
                                            break;
                                        case 3:// Выход
                                            finish = false;
                                            break;
                                        default:
                                            break;
                                        }
                                    }
                                    finish = true;

                                    break;
                                case 5:// Себестоимость

                                    while (finish) {
                                        system("cls");
                                        type_sort();

                                        s = test("Что хотите сделать : ", 1);
                                        n = stoi(s);

                                        switch (n)
                                        {
                                        case 1:// 0->9
                                            sortFAST_cost_pr(stk, vr);
                                            stk = refresh(vr, 1);
                                            break;
                                        case 2:// 9->0
                                            sortFAST_cost_pr(stk, vr);
                                            stk = refresh(vr, 0);
                                            break;
                                        case 3:// Выход
                                            finish = false;
                                            break;
                                        default:
                                            break;
                                        }
                                    }
                                    finish = true;

                                    break;
                                case 6:// Прибыль

                                    while (finish) {
                                        system("cls");
                                        type_sort();

                                        s = test("Что хотите сделать : ", 1);
                                        n = stoi(s);

                                        switch (n)
                                        {
                                        case 1:// 0->9
                                            sortFAST_profit(stk, vr);
                                            stk = refresh(vr, 1);
                                            break;
                                        case 2:// 9->0
                                            sortFAST_profit(stk, vr);
                                            stk = refresh(vr, 0);
                                            break;
                                        case 3:// Выход
                                            finish = false;
                                            break;
                                        default:
                                            break;
                                        }
                                    }
                                    finish = true;

                                    break;
                                case 7:// Выход
                                    finish = false;
                                    break;
                                default:
                                    break;
                                }
                            }
                            finish = true;
                        

                            break;

                        case 2://Результат 

                            system("cls");
                            print_Stack_Table(stk);
                            system("pause");

                            break;

                        case 3:// выход
                            finish = false;
                            break;
                        default:
                            break;
                        }
                    }
                    finish = true;
                    }else{
                        std::cout << "Стек пуст\n";
                        system("pause");
                    }
                    break;
                case 2://find
                if(stk->top > 0){
                    while (finish) {

                        system("cls");
                        menu_fields();

                        s = test("Введите значение: ", 1);

                        n = stoi(s);

                        switch (n)
                        {
                        case 1:// поиск по названию

                            s = test("Введите строку для поиска: ",3);

                            i = stk->top;
                            for (int v = 0; v < i; v++) {

                                temp = pop_node(stk);
                                root = add_product(root, temp->value);
                                push(new_stk, &temp->value);

                            }
                            stk = refresh(new_stk, 1);

                            find_product(root, s,0);

                            freemem(root);

                            root = NULL;

                            break;
                        case 2:// поиск по количеству произведенных товаров

                            s = test("Введите строку для поиска: ", 1);

                            n = stoi(s);

                            i = stk->top;
                            for (int v = 0; v < i; v++) {

                                temp = pop_node(stk);
                                root = add_numbers(root, temp->value);
                                push(new_stk, &temp->value);

                            }
                            stk = refresh(new_stk, 1);

                            find_numbers(root, n,0);

                            freemem(root);

                            root = NULL;

                            break;
                        case 3:// поиск по количеству проданых товаров

                            s = test("Введите строку для поиска: ", 1);

                            n = stoi(s);

                            i = stk->top;
                            for (int v = 0; v < i; v++) {

                                temp = pop_node(stk);
                                root = add_sale(root, temp->value);
                                push(new_stk, &temp->value);

                            }
                            stk = refresh(new_stk, 1);

                            find_sale(root, n,0);

                            freemem(root);

                            root = NULL;
                            
                            break;
                        case 4:// поиск по цене товара

                            s = test("Введите строку для поиска: ", 4);

                            dn = stod(s);

                            i = stk->top;
                            for (int v = 0; v < i; v++) {

                                temp = pop_node(stk);
                                root = add_one_pr(root, temp->value);
                                push(new_stk, &temp->value);

                            }
                            stk = refresh(new_stk, 1);

                            find_one_pr(root, dn,0);

                            freemem(root);

                            root = NULL;

                            break;
                        case 5:// поиск по себестоимости товара 

                            s = test("Введите строку для поиска: ", 4);

                            dn = stod(s);

                            i = stk->top;
                            for (int v = 0; v < i; v++) {

                                temp = pop_node(stk);
                                root = add_cost_pr(root, temp->value);
                                push(new_stk, &temp->value);

                            }
                            stk = refresh(new_stk, 1);

                            find_cost_pr(root, dn,0);

                            freemem(root);

                            root = NULL;

                            break;
                        case 6:// поиск по прибыли за товар

                            s = test("Введите строку для поиска: ", 4);

                            dn = stod(s);

                            i = stk->top;
                            for (int v = 0; v < i; v++) {

                                temp = pop_node(stk);
                                root = add_profit(root, temp->value);
                                push(new_stk, &temp->value);

                            }
                            stk = refresh(new_stk, 1);

                            find_profit(root, n,0);

                            freemem(root);

                            root = NULL;

                            break;
                        case 7:// выход 
                            finish = false;
                            break;

                        default:
                            break;
                        }
                    }
                    finish = true;
                }else {
                    std::cout << "Стек пуст\n";
                    system("pause");
                }
                    break;
                case 3:
                    finish = false;
                    break;
                default:
                    break;
                }

            }
            finish = true;
            break;
        case 4:
        
            finish = false;

            break;

            default:
                system("cls");
                cout << "Ты по моему что-то перепутал !!!";
                cin.clear();
                cin.ignore();
                system("pause");
                break;
            }
        }
    
    cout << "ТОЧКА";
}