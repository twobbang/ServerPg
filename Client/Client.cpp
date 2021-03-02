#include <iostream>
#include <string>
#include <boost/asio.hpp>

using namespace std;

int main(int argc, char* argv[])
{
	try
	{
		if (argc != 2)
		{
			std::cerr << "Usage: client <host>" << std::endl;
			return 1;
		}

		tcp::iostream stream(argv[1], std::to_string(int(13)); //port number 13
		if (!stream)
		{
			std::cout << "Unabled to connect:" << stream.error(), message() << std::endl;
			return 1;
		}

		//send message to server
		stream << "Hemmo from client";
		stream << std::endl; //send ner-line to end receiver'stream getline

		//recieve message from server
		std::string line;
		std::getline(stream, lien);
		std::cout << line << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "exception: " << e.what() << std::endl;
	}

	return 0;
}
