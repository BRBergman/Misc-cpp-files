#include "toupper.h"
#include <iostream>


std::string toupperstring(char in[])
{
	int x = strlen(in)+1;
	
	char uppered[x];
	for (int i = 0; i < x ; i++)
	{
		uppered[i]= toupper(in[i]);
		
	}
	
	std::string reval = uppered;
	return reval;
}

std::string toupperstring(std::string in)
{
	
	int x = strlen(in.c_str())+1;
	
	char uppered[x];
	for (int i = 0; i < x ; i++)
	{
		uppered[i]= toupper(in[i]);
		
	}
	
	std::string reval = uppered;
	return reval;
}

