#pragma once

class VigenereTable
{
public:

	VigenereTable(void);
	~VigenereTable(void);

	/**
	*	Read Vigenere table data from file.
	*	@return If not found vtabla.dat return -1 otherwise return 0	
	*/
	int		readTable();

	/*
	*	Encrypt letter using Vigener table
	*	@param messageLetter letter from transformed message
	*	@param keyLetter letter from keyword
	*	@return Encrypted character
	*/
	char	getEncryptedLetter(char messageLetter, char keyLetter);

private:
	char*	vtable[27]; // Vigenere table
};

