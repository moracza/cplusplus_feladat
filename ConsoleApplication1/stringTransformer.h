#pragma once
#include <string>

class StringTransformer
{
public:
	StringTransformer(void);
	~StringTransformer(void);

	static void toUpper(std::string& aInOutput);
	static void transformToUnaccented( char& character);
};

