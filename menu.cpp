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

        s = test("��� ������ �������: ", 1);
        n = stoi(s);

        switch (n)
        {
        case 1:// ������ �� ���������� 

            while (finish)
            {
                system("cls");
                menu_str();
                s = test("��� ������ �������: ", 1);
                n = stoi(s);
                switch (n)
                {
                case 1:// ���������� 

                    s = test("������� �������� ������ ���������: ", 1);
                    j = stoi(s);

                    system("cls");
                    cout << "���� ��������� �� 15 �������� !!!\n\n";
                    for (int k = 0; k < j; k++) {
                        write(durian);
                        cout << "---------------------------" << endl;
                        push(stk, durian);
                    }

                    break;
                case 2:// �������� 
                    system("cls");
                    del();

                    s = test("��� ������ �������: ", 1);
                    f = stoi(s);

                    switch (f)
                    {
                    case 1:// �������� ����� ������
                        if (stk->top == 0) {
                            cout << "���� ���� !!!";
                        }
                        else {
                            
                            del_full(stk);
                            cout << "���� ������\n";
                        }
                        system("pause");
                        break;
                    case 2:// �������� �������� �����

                        s = test("������� ������� ������� ������ �������: ", 1);
                        f = stoi(s);

                        if(f == 0 or stk->top < f){
                            cout << "��� ������ ��������\n";
                            system("pause");
                            break;
                        }

                        if (stk->top == 0) {
                            cout << "���� ���� !!!";
                        }
                        else {
                            system("cls");
                            del_el_s(stk, f);
                            cout << "������� ������ ������� ";
                        }
                        system("pause");
                        break;
                    case 3:// �����
                        finish = false;
                        break;
                    default:
                        break;
                    }

                    finish = true;
                    break;
                case 3:// �����
                    while (finish) {
                        system("cls");
                        menu_out();

                        s = test("��� ������ ������� : ", 1);
                        n = stoi(s);
                        switch (n)
                        {
                        case 1:// ����� ����������
                            system("cls");

                            printStack(stk);

                            system("pause");
                            break;
                        case 2:// ����� ��������
                            system("cls");

                            print_Stack_Table(stk);

                            system("pause");
                            break;
                        case 3:// �����
                            finish = false;
                            break;
                        default:
                            break;
                        }
                    }

                    finish = true;
                    break;
                case 4:// ����� ���������
                if( stk->top > 2){

                while(true){
                    s = test("����� ������� �� ������ ��������: ", 1);
                    f = stoi(s);

                    if(stk->top >= f)
                        break;
                    cout << "� ����� ��� ������ �������� \n";
                }


                while(true){
                    s = test("� ����� ��������� �� ������ ��������: ", 1);
                    f1 = stoi(s);

                    if(stk->top >= f)
                        break;
                    cout << "� ����� ��� ������ �������� \n";
                }
                
                    Stack_swap(stk, f, f1);
                } else if(stk->top == 2) {

                    Stack_swap(stk,1,2);

                } else {

                    cout << "������������ ��������� ��� ������\n\b";
                    system("pause");

                }
                
                    break;
                case 5://�������������� ������ � ����������

                system("cls");

                if(stk->top == 0){

                    cout << "���� ���� \n";
                    system("pause");
                    break;

                }

                s = test("������� ����� ���������: ",1); 
                n = stoi(s);
                fieldChange(stk,n);

                system("pause");

                    break;
                case 6:// �����

                finish = false;

                    break;
                }
            }

            finish = true;
            break;
        case 2:// ������ � ������� 
            while (finish) {
                system("cls");
                menu_file();

                s = test("��� ������ �������: ", 1);
                n = stoi(s);

                switch (n)
                {
                case 1:// �������� ����� 
                    system("cls");

                    s = test("������� ��� �����: ", 2);
                    file = s;

                    new_BD(file);
                    

                    break;
                case 2: // �������� �����

                    while (true)
                    {  
                        
                        s = test("������� ��� �����: ", 2);
                        file = s;
                        ifstream fil;
                        fil.open(file);
                        
                    }
                    remove_BD(file);

                    break;
                case 3: //���������� ������ � ����

                if(stk->top > 0){
                    save_BD(stk);
                    }else{
                        cout << "���� ����";
                        system("pause");
                    }

                    break;
                case 4:// �������� ������ �� �����
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
        case 3:// ���������� � ����� 
        if(stk == NULL){

            cout << "���� ����";
            system("pause");
            break;

        }
            while (finish)
            {
                system("cls");
                sort_find();

                s = test("��� ������ �������: ", 1);

                n = stoi(s);

                switch (n)
                {
                case 1://sort
                    if(stk->top > 0){
                    while (finish) {
                        system("cls");
                        menu_sort();

                        s = test("��� ������ ������� : ", 1);
                        n = stoi(s);
                        switch (n)
                        {
                        case 1://������� ����������
                        
                            while (finish) {
                                system("cls");



                                menu_fields();

                                s = test("��� ������ ������� : ", 1);
                                n = stoi(s);

                                switch (n)
                                {
                                case 1:// �������� 

                                    while (finish) {
                                        system("cls");
                                        sort_string();

                                        s = test("��� ������ ������� : ", 1);
                                        n = stoi(s);

                                        switch (n)
                                        {
                                        case 1:// �->�
                                            sortFAST_product(stk, vr);
                                            stk = refresh(vr, 1);
                                            break;
                                        case 2:// �->�
                                            sortFAST_product(stk, vr);
                                            stk = refresh(vr,0);
                                            break;
                                        case 3:// �����
                                            finish = false;
                                            break;
                                        default:
                                            break;
                                        }
                                    }
                                    finish = true;
                                    break;
                                case 2:// ����������� 

                                    while (finish) {
                                        system("cls");
                                        type_sort();

                                        s = test("��� ������ ������� : ", 1);
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
                                        case 3:// �����
                                            finish = false;
                                            break;
                                        default:
                                            break;
                                        }
                                    }
                                    finish = true;

                                    break;
                                case 3:// �������

                                    while (finish) {
                                        system("cls");
                                        type_sort();

                                        s = test("��� ������ ������� : ", 1);
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
                                        case 3:// �����
                                            finish = false;
                                            break;
                                        default:
                                            break;
                                        }
                                    }
                                    finish = true;

                                    break;
                                case 4:// ����

                                    while (finish) {
                                        system("cls");
                                        type_sort();

                                        s = test("��� ������ ������� : ", 1);
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
                                        case 3:// �����
                                            finish = false;
                                            break;
                                        default:
                                            break;
                                        }
                                    }
                                    finish = true;

                                    break;
                                case 5:// �������������

                                    while (finish) {
                                        system("cls");
                                        type_sort();

                                        s = test("��� ������ ������� : ", 1);
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
                                        case 3:// �����
                                            finish = false;
                                            break;
                                        default:
                                            break;
                                        }
                                    }
                                    finish = true;

                                    break;
                                case 6:// �������

                                    while (finish) {
                                        system("cls");
                                        type_sort();

                                        s = test("��� ������ ������� : ", 1);
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
                                        case 3:// �����
                                            finish = false;
                                            break;
                                        default:
                                            break;
                                        }
                                    }
                                    finish = true;

                                    break;
                                case 7:// �����
                                    finish = false;
                                    break;
                                default:
                                    break;
                                }
                            }
                            finish = true;
                        

                            break;

                        case 2://��������� 

                            system("cls");
                            print_Stack_Table(stk);
                            system("pause");

                            break;

                        case 3:// �����
                            finish = false;
                            break;
                        default:
                            break;
                        }
                    }
                    finish = true;
                    }else{
                        std::cout << "���� ����\n";
                        system("pause");
                    }
                    break;
                case 2://find
                if(stk->top > 0){
                    while (finish) {

                        system("cls");
                        menu_fields();

                        s = test("������� ��������: ", 1);

                        n = stoi(s);

                        switch (n)
                        {
                        case 1:// ����� �� ��������

                            s = test("������� ������ ��� ������: ",3);

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
                        case 2:// ����� �� ���������� ������������� �������

                            s = test("������� ������ ��� ������: ", 1);

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
                        case 3:// ����� �� ���������� �������� �������

                            s = test("������� ������ ��� ������: ", 1);

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
                        case 4:// ����� �� ���� ������

                            s = test("������� ������ ��� ������: ", 4);

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
                        case 5:// ����� �� ������������� ������ 

                            s = test("������� ������ ��� ������: ", 4);

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
                        case 6:// ����� �� ������� �� �����

                            s = test("������� ������ ��� ������: ", 4);

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
                        case 7:// ����� 
                            finish = false;
                            break;

                        default:
                            break;
                        }
                    }
                    finish = true;
                }else {
                    std::cout << "���� ����\n";
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
                cout << "�� �� ����� ���-�� ��������� !!!";
                cin.clear();
                cin.ignore();
                system("pause");
                break;
            }
        }
    
    cout << "�����";
}