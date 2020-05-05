#include "allvar.h"
template <typename T>
static void swap(T&, T&);
bf::bf(std::string& s){
	int wordlen = 1;
	std::string arr_of_symb = s;
	std::string cur(s.size(), s[0]); //creating first init word
	wordlist.push_back(cur);
	for (int pos_of_chch = 0; pos_of_chch <s.size();  pos_of_chch++)
	{
		for (int j = 0; j<s.size()-1; j++)
		{
			cur[pos_of_chch]=arr_of_symb[j];
			wordlist.push_back(cur);
		}
		//now we need to figure out how to increment like numbers
	}

}


template <typename T>
void swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}
