#pragma once
#include <string>

class TextReader
{
public:
	TextReader(void);
	~TextReader(void);

	static std::string read(bool investigation = false);
};

