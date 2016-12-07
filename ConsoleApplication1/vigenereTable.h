#pragma once
class VigenereTable
{
public:
	VigenereTable(void);
	~VigenereTable(void);

	int		readTable();
	char	getEncryptedLetter(char messageLetter, char passwordLetter);

private:
	char*	vtabla[27];
};

