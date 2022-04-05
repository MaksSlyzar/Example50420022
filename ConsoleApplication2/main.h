#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <Windows.h>
#include <fstream>
#include <conio.h>

using namespace std;

struct date {
    int day;
    int month;
    int year;
};

struct student {
    int id;
    char name[10];
    char surname[10];
    date dr;
    float sb;
};
