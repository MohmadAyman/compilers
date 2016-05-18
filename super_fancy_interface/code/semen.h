#ifndef _SEMEN
#define _SEMEN #pragma once

#include<string.h>
#include<stdlib.h>
typedef struct variable
{
	char name[256];
	char type[20];
	int vartype;
	// 0 variable 1 constant 2 function
	struct variable * next;
}variable;

typedef struct scope
{
	variable * var;
	struct scope * outer;
	int scopenumber;
}scope;




void CreateVariable(const char * name, const char * type, int savetype);


int stringchecker(char * input, char * check);

int checkvariable(char * name);

int checkfunction(char * name);

int checkass(char * name);

int checkscopevariable(char * name);

int checkscopeFun(char * name);

int InsertVariable(char * name, char * type, int con);

int Insertfunction(char * name, char * type);

void Createscope();

int GetOuterLab();

int GetLab();

void removescope();

void Initscope();















#endif