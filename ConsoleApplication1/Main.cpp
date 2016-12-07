// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <locale>

#include "stringTransformer.h"
#include "vigenereTable.h"
#include "textReader.h"

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "");
	system("chcp 1250");
	//std::fstream f("vtabla.dat");
	
	std::string message = "";
	std::string password = "";
	std::string passwordText = "";

	VigenereTable table;
	if(table.readTable() < 0)
	{
		printf("Not found vtabla.dat");
		return -1;
	}

	printf("Type a message here to be encrypt it. Message size is must be less then 255 character \n");

	do
	{
		message = TextReader::read(true);
		if(message.size() > 255 )
		{
			printf("Message size is must be less then 255 character \n");
		}

		if( message.size() < 1 )
		{
			printf("Type a message here to be encrypt it. \n");
		}
		
	}while(message.size() > 255 || message.size() < 1);

	StringTransformer::toUpper(message);
	printf("Message: %s  \n",message.data());

	printf("Password: \n");
	do
	{
		password = TextReader::read();
		if(password.size() > 5 )
		{
			printf("Password size is must be less then 6 character \n");
		}

		if( password.size() < 1 )
		{
			printf("Password: \n");
		}

	}while(password.size() > 5 || password.size() < 1);
	
	StringTransformer::toUpper(password);
	
	for(int i=0; i<message.size(); i++)
	{
		passwordText.push_back(password[i%password.size()]);
	}
	printf("Password text: %s  \n",passwordText.data());

	for(int i=0;i<message.size();i++)
	{
		message[i] = table.getEncryptedLetter(message[i], passwordText[i]);
	}
	printf("Encrypted text: %s  \n",message.data());
	

	return 0;
}

