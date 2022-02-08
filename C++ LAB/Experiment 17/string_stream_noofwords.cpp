#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int no_ofwords(string str)
{

	stringstream s(str);

	string word;

	int count = 0;
	while (s >> word)
		count++;
	return count;
      }

int main()
{
	string s = "Hello Everyone Welcome to BVRITH "
			"environment here is very cool and pleasant";
	cout << " Number of words are: " << no_ofwords(s);
	return 0;
}

