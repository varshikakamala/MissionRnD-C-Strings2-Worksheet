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
	if (str == NULL) return 0;
	int i = 0, j = 0, k = 0, l = 0, m = 0, count = 0, count1 = 0;
	while (str[k] != '\0')  k++;
	while (word[l] != '\0') l++;
	for (i = 0; i < k; i++)
	{
		j = 0;
		count = 0;
		m = i;
		while (str[m++] == word[j++])
		{
			count++;
			if (count == l)
			{
				count1++;
				break;
			}
		}

	}
	return count1;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	if (str==NULL)	return 0;
	if (str[0] == word[0])
		return 1 + count_word_int_str_way_2_recursion(str, word);
	else
		return count_word_int_str_way_2_recursion(str, word);
}

