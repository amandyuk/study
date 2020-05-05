#include <iostream>
#include "getword.h"
#include "allvar.h"

int main(int argc, char** argv)
{
	if (argc > 2)
		return 1;

	std::string w = "";

	if (argc == 1)
		w = getWord();
	else
		w = argv[1];
	bf o_br(w);
	size_t len = w.size();
	std::cout<<len;

	for(auto a : o_br.wordlist)
	{std::cout<<a<<std::endl;}
	return 0;
}
