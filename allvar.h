#pragma once
#include <string>
#include <iostream>
#include <vector>
class bf
{
	public:
	std::vector<std::string> wordlist;


	bf(const std::string&, size_t, const std::string&);
	void visit(std::string const&, size_t, std::string const&);
};

