#pragma once
#ifndef IN_OUT_H
#define IN_OUT_H

#include <cstring>
#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <string>
#include <limits.h>
#include <cstdio>
#include <fstream>
#include <string>
#include "struct.h"
#include "steck.h"

using namespace std;

string test(string message, int n);

bool isValidInputN(const string& input);

bool isValidInput(const string& input);

void write(MyZavod* zavod);

void main_menu();//

void del();//

void menu_str();

void menu_file();

void menu_out();

void menu_sort();

void menu_fields();

void menu_fields1();

void type_sort();

void sort_string();

void sort_find();

#endif