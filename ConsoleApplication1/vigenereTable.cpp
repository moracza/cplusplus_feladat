#include "stdafx.h"
#include "vigenereTable.h"
#include <fstream>

VigenereTable::VigenereTable(void)
{
}


VigenereTable::~VigenereTable(void)
{
}

int VigenereTable::readTable()
{
	std::ifstream f("vtabla.dat");
	if(!f.is_open())
	{
		return -1;
	}
	
	int i = 0;
	do
	{
		char d;
		vtabla[i] = new char[26];
		f.getline(vtabla[i],27);
		i++;
	}while (!f.eof());

	f.close();

	return 0;
}

char VigenereTable::getEncryptedLetter(char messageLetter, char passwordLetter)
{

	int messageIndex = 0;
	int passwordIndex = 0;

	for(int i=0; i<26;i++)
	{
		char mL = vtabla[i][0];
		if( mL == messageLetter)
		{
			messageIndex = i;
		}

		if(vtabla[0][i] == passwordLetter)
		{
			passwordIndex = i;
		}
	}

	return vtabla[messageIndex][passwordIndex];
}
