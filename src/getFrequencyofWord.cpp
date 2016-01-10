/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word){
	if(str==NULL) return 0;
	int i = 0,j=0,k=0,l=0,count=0;
	/*while (str[i] != '\0')
	{
		while(str[i] == word[i] && word[j]!='\0')
		{
			i++;
			j++;
		}
		if (word[j] == '\0')
		{
			count++;
			j = 0;
		}
	}*/
	//char v = ' ';
	while (str[k] != '\0')  k++;
	while (word[l] != '\0') l++;
	/*while (i<k)
	{
		int f = 0;
		j = 0;
		while (j<l)
		{
			if (str[i++] != word[j++])
			{
				f = 1; i--; break;
			}
		}
		if ((f == 0) && (i == k || str[i] == ' ') && (v == ' '))
			count++;
		v = str[i++];
	}*/
	int count1 = 0;
	for (i = 0; i < k;)
	{
		j = 0;
		count = 0;
		while ((str[i] == word[j]))
		{
			count++;
			i++;
			j++;
		}
		if (count == l)
		{
			count1++;
			count = 0;
		}
		else
			i++;
	}
	return count1;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	if (str==NULL)	return 0;
	int i = 0, j = 0,k=0,l=0, count = 0;
	while (str[k] != '\0')  k++;
	while (word[l] != '\0') l++;
	for (i = 0; i < k;)
	{

	}
}

