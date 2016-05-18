#include "semen.h"


static scope * current ;
static int incremental = 0;

void CreateVariable(const char * name, const char * type, int savetype)
{

	variable * newvariable = (variable*)malloc(sizeof(variable));
	strncpy(newvariable->name, name, 256);
	strncpy(newvariable->type, type, 20);
	newvariable->vartype = savetype;
	newvariable->next = current->var;
	current->var = newvariable;

}


int stringchecker(char * input, char * check)
{
	int i, result = 1;
	if (strlen(input) != strlen(check))
		return 0;
	for (i = 0; input[i] != '\0' && check[i] != '\0'; i++) {
		if (input[i] != check[i]) {
			result = 0;
			break;
		}
	}
	return result;
}


int checkvariable(char * name)
{
	scope * checker = current;
	while (1)
	{
		variable * varcheck;
		if (checker->var == NULL)
		{
			if (checker->outer == NULL)
				return 0;
			else checker = checker->outer;
			continue;
		}
		else varcheck = checker->var;
		while (1)
		{
			if (stringchecker(name, varcheck->name))
			{
				if (varcheck->vartype == 0 || varcheck->vartype == 1)
					return 1;
			}
			if (varcheck->next == NULL)
			{
				if (checker->outer == NULL)
					return 0;
				else checker = checker->outer;
				break;
			}
			else
				varcheck = varcheck->next;
		}
	}
	return 0;
}


int checkfunction(char * name)
{
	scope * checker = current;
	while (1)
	{
		variable * varcheck;
		if (checker->var == NULL)
		{
			if (checker->outer == NULL)
				return 0;
			else checker = checker->outer;
			continue;
		}
		else varcheck = checker->var;
		while (1)
		{
			if (stringchecker(name, varcheck->name))
			{
				if (varcheck->vartype == 2)
					return 1;
			}
			if (varcheck->next == NULL)
			{
				if (checker->outer == NULL)
					return 0;
				else checker = checker->outer;
				break;
			}
			else
				varcheck = varcheck->next;
		}
	}
	return 0;
}





int checkass(char * name)
{
	scope * checker = current;
	while (1)
	{
		variable * varcheck;
		if (checker->var == NULL)
		{
			if (checker->outer == NULL)
				return 0;
			else checker = checker->outer;
			continue;
		}
		else varcheck = checker->var;
		while (1)
		{
			if (stringchecker(name, varcheck->name))
			{
				if (varcheck->vartype == 0)
					return 1;
				else if (varcheck->vartype == 1)return 0;
			}
			if (varcheck->next == NULL)
			{
				if (checker->outer == NULL)
					return 0;
				else checker = checker->outer;
				break;
			}
			else
				varcheck = varcheck->next;
		}
	}
	return 0;
}




int checkscopevariable(char * name)
{
	scope * checker = current;
	while (1)
	{
		variable * varcheck;
		if (checker->var == NULL)
			return 0;
		else varcheck = checker->var;
		while (1)
		{
			if (stringchecker(name, varcheck->name))
			{
				if (varcheck->vartype == 0 || varcheck->vartype == 1)
					return 1;
			}
			if (varcheck->next == NULL)
			{
				return 0;
			}
			else
				varcheck = varcheck->next;
		}
	}
	return 0;
}


int checkscopeFun(char * name)
{
	scope * checker = current;
	while (1)
	{
		variable * varcheck;
		if (checker->var == NULL)
			return 0;
		else varcheck = checker->var;
		while (1)
		{
			if (stringchecker(name, varcheck->name))
			{
				if (varcheck->vartype == 2)
					return 1;
			}
			if (varcheck->next == NULL)
			{
				return 0;
			}
			else
				varcheck = varcheck->next;
		}
	}
	return 0;
}





int InsertVariable(char * name, char * type, int con)
{
	if (checkscopevariable(name))
		return 0;
	else
		CreateVariable(name, type, con);
	return 1;
}


int Insertfunction(char * name, char * type)
{
	if (checkscopeFun(name))
		return 0;
	else
		CreateVariable(name, type, 2);
	return 1;
}


void Createscope()
{
	scope * newscope = ( scope*)malloc(sizeof(scope));
	newscope->outer = current;
	newscope->var = NULL;
	current = newscope;
	current->scopenumber = incremental;
	incremental++;
	
}

int GetOuterLab()
{

	return current->outer->scopenumber;

}

int GetLab()
{

	return current->scopenumber;

}


void removescope()
{
	while (current->var != NULL)
	{
		variable * ToDelete = current->var;
		current->var = current->var->next;
		free(ToDelete);
	}
	scope * Todelete = current;
	current = current->outer;
	free(Todelete);
}

void Initscope()
{
	current = (scope *)malloc(sizeof(scope));
	current->outer = NULL;
	current->var = NULL;
	current->scopenumber = incremental;
	incremental++;
	
}

