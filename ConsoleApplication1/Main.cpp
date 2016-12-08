// Vigenere cipher algorithm implementation

#include "stdafx.h"
#include <string>
#include <locale>

#include "stringTransformer.h"
#include "vigenereTable.h"
#include "textStream.h"

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "");
	system("chcp 1250");
	
	std::string message = "";
	std::string key = "";
	std::string keyWord = "";

	VigenereTable table;
	if(table.readTable() < 0)
	{
		printf("Not found vtabla.dat");
		return -1;
	}

	printf("Type a message here to be encrypted. Message must be less than 255 characters \n");

	do
	{
		message = TextStream::read(true);
		if(message.size() > 255 )
		{
			printf("Message must be less than 255 characters \n");
		}

		if( message.size() < 1 )
		{
			printf("Type a message here to be encrypted. \n");
		}
		
	}while(message.size() > 255 || message.size() < 1);

	StringTransformer::toUpper(message);
	printf("Message: %s  \n",message.data());

	printf("Key: \n");
	do
	{
		key = TextStream::read();
		if(key.size() > 5 )
		{
			printf("Key must be maximum 5 characters \n");
		}

		if( key.size() < 1 )
		{
			printf("Key: \n");
		}

	}while(key.size() > 5 || key.size() < 1);
	
	StringTransformer::toUpper(key);
	
	for(int i=0; i<message.size(); i++)
	{
		keyWord.push_back(key[i%key.size()]);
	}
	printf("Keyword: %s  \n",keyWord.data());

	for(int i=0;i<message.size();i++)
	{
		message[i] = table.getEncryptedLetter(message[i], keyWord[i]);
	}
	printf("Cipher text: %s  \n",message.data());
	TextStream::write(message);

	return 0;
}

