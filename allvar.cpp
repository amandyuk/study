#include "allvar.h"
template <typename T>
static void swap(T&, T&);
bf::bf(std::string const& chars, size_t max_len, std::string const& cur){
//	int wordlen = 1;
//	std::string arr_of_symb = s;
//	std::string cur(s.size(), s[0]); //creating first init word
//	wordlist.push_back(cur);
//	for (int pos_of_chch = 0; pos_of_chch <s.size();  pos_of_chch++)
//	{
//		for (int j = 0; j<s.size()-1; j++)
//		{
//			cur[pos_of_chch]=arr_of_symb[j];
//			wordlist.push_back(cur);
//		}
//		//now we need to figure out how to increment like numbers
//	}
//
	visit (chars, max_len, cur);
}

void bf::visit(std::string const& chars, size_t max_len, std::string const& cur) {
    if(cur.length() == max_len) {
      return;
    }
    else {
      for(auto c : chars) {
        std::string next = cur + c;
        std::cout << next << std::endl;
        visit(chars, max_len, next);
      }
    }
}


template <typename T>
void swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}
