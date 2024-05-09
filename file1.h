#pragma once
#ifndef FILE_H
#define FILE_H

#include "steck.h"
#include "struct.h"
#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std;

void load_BD(Stack* stk);
void remove_BD(const string& file);
void save_BD(Stack* stk);
void new_BD(const string& bd_file_name);

#endif