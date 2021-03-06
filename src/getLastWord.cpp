/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	if (str==NULL)	return NULL;
	int i = 0,j=0,k,m=0;
	char *laststr;
	
	while (str[i] != '\0')  i++;
	k = i;
	while (str[k] != ' ')
	{
		m++;
		k--;
	}
	laststr = (char*)malloc(m * sizeof(char));
		while (str[i] != ' ')
	{
		laststr[j] = str[i];
		j++;
		i--;
	}
	laststr[j] = '\0';
	return laststr;
}
