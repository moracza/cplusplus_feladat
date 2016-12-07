#pragma once
#include <string>

class StringTransformer
{
public:
	StringTransformer(void);
	~StringTransformer(void);

	/*
	*	Convert text to its uppercase equivalent
	*	@param text Input message
	*/
	static void toUpper(std::string& text);

	/*
	*	Convert input character to its unaccented equivalent
	*	@param letter Input alphabetic character
	*/
	static void transformToUnaccented( char& letter);
};

