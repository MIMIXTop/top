#include "input_output.h"

using namespace std;

void write(MyZavod* zavod)
{
    *zavod->product = NULL;
    string s;

    s = test("������� �������� ������:  ", 3);

    s.copy(zavod->product, s.size() + 1);
    zavod->product[s.size()] = '\0';

    s = test("������� ������� ��������� ����� ������: ", 1);

    zavod->numbers = stoi(s);

    s = test("������� ������� ������� ����� ������: ", 1);

    zavod->sale = stoi(s);

    while ( zavod->sale > zavod->numbers) {
        cout << "������� �� ��������� ������" << endl;
        s = test("������� ������� ������� ����� ������: ", 1);
        zavod->sale = stoi(s);
    }

    s = test("������� ���� ������ ������: ", 4);
    
    while (true)
    {
        
    try
    {
        zavod->one_pr = stod(s);
        break;
    }
    catch(const std::exception& e)
    {
        cout << "������� ������������ ��������\n";
    }
    
        s = test("������� ���� ������ ������: ", 4);

    }

    while (zavod->one_pr <= 0) {
        cout << "�� ��������� ���� �������� ������ �� ����� ����" << endl;
        s = test("������� ���� ������ ������: ", 4);
        zavod->one_pr = stod(s);
    }


    s = test("������� ������������� ������: ", 4);

    zavod->cost_price = stod(s);

 while (true)
    {
    
    try
    {
        zavod->cost_price = stod(s);
        break;
    }
    catch(const std::exception& e)
    {
        cout << "������� ������������ ��������\n";
    }
    
        s = test("������� ���� ������ ������: ", 4);

    }

    while (zavod->cost_price <= 0 || zavod->cost_price > zavod->one_pr) {
        cout << "�� ��������� ���� �������� ������ �� ����� ����" << endl;
        s = test("������� ������������� ������: ", 1);
        zavod->cost_price = stod(s);
    }



    zavod->profit = zavod->sale * (zavod->one_pr - zavod->cost_price);
}


void main_menu() {
        cout << "|-------------------------------------------------------------|\n";
    cout << "| 1.������ � �������                                          |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "| 2.������ � �������                                          |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "| 3.���������� � �����                                        |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "| 4.����� �� ���������                                        |\n";
    cout << "|-------------------------------------------------------------|\n";
    
}

void menu_str() {
    cout << "|-------------------------------------------------------------|\n";
    cout << "| 1.�������� ��������� � ����                                 |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "| 2.������� ��������� �� �����                                |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "| 3.������� ������ � �������                                  |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "| 4.�������� ��� �������� ���� �������                        |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "| 5.��������� ������ � ���������                              |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "| 6.����� � ������� ����                                      |\n";
    cout << "|-------------------------------------------------------------|\n";
}

void del() {
    cout << "|-------------------------------------------------------------|\n";
    cout << "| 1.������� ���� ����                                         |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "| 2.������� ��������� �� �����                                |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "| 3.��������� �����                                           |\n";
    cout << "|-------------------------------------------------------------|\n";


}

void menu_file() {
    cout << "|-------------------------------------------------------------|\n";
    cout << "| 1.������� ����� ����                                        |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "| 2.������� ����                                              |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "| 3.��������� ������ � ����                                   |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "| 4.��������� ������ �� �����                                 |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "| 5.����� � ������� ����                                      |\n";
    cout << "|-------------------------------------------------------------|\n";
}

void menu_out() {
        cout << "|-------------------------------------------------------------|\n";
    cout << "| 1.������� ����� ���������                                   |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "| 2.������� ����� �������                                     |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "| 3.���������                                                 |\n";
    cout << "|-------------------------------------------------------------|\n";
}

void menu_sort() {

    cout << "|-------------------------------------------------------------|\n";
    cout << "| 1.���� ����������                                           |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "| 2.������� ����� �������                                     |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "| 3.���������                                                 |\n";
    cout << "|-------------------------------------------------------------|\n";

}
 
void menu_fields(){
       cout << "|-------------------------------------------------------------|\n";
    cout << "| �������� ����                                               |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "| 1.��������                                                  |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "| 2.�����������                                               |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "| 3.�������                                                   |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "| 4.����                                                      |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "| 5.�������������                                             |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "| 6.�������                                                   |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "| 7.���������                                                 |\n";
    cout << "|-------------------------------------------------------------|\n";
}

void menu_fields1(){
    cout << "|-------------------------------------------------------------|\n";
    cout << "| �������� ����                                               |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "| 1.��������                                                  |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "| 2.�����������                                               |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "| 3.�������                                                   |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "| 4.����                                                      |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "| 5.�������������                                             |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "| 6.�������                                                   |\n";
    cout << "|-------------------------------------------------------------|\n";
}

void type_sort() {

    cout << "|-------------------------------------------------------------|\n";
    cout << "| 1.����������� �� �������� � ��������                        |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "| 2.����������� �� �������� � ��������                        |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "| 3.���������                                                 |\n";
    cout << "|-------------------------------------------------------------|\n";
}

void sort_string() {

        cout << "|-------------------------------------------------------------|\n";
    cout << "| 1.����������� �� � �� �(�� a �� z)                          |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "| 2.����������� �� � �� �(�� z �� a)                          |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "| 3.���������                                                 |\n";
    cout << "|-------------------------------------------------------------|\n";
}

void sort_find() {
    cout << "|-------------------------------------------------------------|\n";
    cout << "| 1.C���������                                                |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "| 2.�����                                                     |\n";
    cout << "|-------------------------------------------------------------|\n";
    cout << "| 3.���������                                                 |\n";
    cout << "|-------------------------------------------------------------|\n";
}

bool isValidInput(const string& input) {
    for (char ch : input) {
        if (!((ch >= 'a' && ch <= 'z') or (ch >= 'A' && ch <= 'Z') or
            (ch >= '�' && ch <= '�') or (ch >= '�' && ch <= '�') or (ch == ' '))) {
            return false;
        }
    }
    return true;
}

bool isValidInputN(const string& input) {
    if (input.size() == 0) {
        return false;
    }
    for (char ch : input) {
        if (!isdigit(ch)) {
            return false;
        }
    }
    return true;
}

string test(string message, int n) {
    
    string s;
    int count = 0;
    int lenght;

    switch (n)
    {
    case 1:// �������� �� int
        
        cin.clear();
        while (true) {

            cout << message;

            getline(cin, s);
            if(s.length() <= 15)
            if (isValidInputN(s)) {
                if (stol(s) < 0)
                    break;
                return s;
            }
            cout << "������������ ���� !!!\n";
        }
        break;
    case 2:// �������� �� �������� ����� 

        while (true) {
            cout << message << endl;

            getline(cin, s);

            if (s.length() <= 40)
            if (s.size() > 4) {
                if (s[s.size() - 4] == '.') {
                    if ((s[s.size() - 3] == 't') and (s[s.size() - 2] == 'x') and (s[s.size() - 1] == 't')) {
                        return s;
                    }

                }
            }
            cout << "������������ ���� !!!\n";
        }

        break;
    case 3:// �������� �� ������ 
        while (true) {
            cout << message << endl;

            getline(cin, s);

            if (s.length() <= 15)
            if (s.size() > 0) {
                if (isValidInput(s)) {
                    return s;
                }
                cout << "������������ ���� !!!\n";
            }
        }
        break;
    case 4:// �������� �� double

        while (true) {
            cout << message << endl;

            getline(cin, s);
            if (s.length() <= 15){
                lenght = s.size();
                lenght--;
                if (s.length() > 0) {
                    for (int i = 0; i < s.length(); i++) {
                        if (!((s[i] == '.') or (s[i] >= '0') or (s[i] <= '9')) or (s[i] == ',')) {

                            break;
                        }

                        

                        if (s[i] == '.') {
                            count++;
                            if (count > 1) {
                                break;
                            }
                        }

                        if (s[i] == 'e') {
                            break;
                        }

                        if (i == lenght)
                            return s;
                    }
            }
                cout << "������������ ���� !!!\n";
                cin.clear();
            }
        }
        break;

    }
}