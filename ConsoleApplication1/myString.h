#pragma once
class myString
{
public:
	myString(void);
	~myString(void);
	int setValue( char c, int index);
	
private:
	char	text[255];
	int		size;
};

