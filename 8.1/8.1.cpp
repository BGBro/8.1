#include <iostream>
#include <string>
using namespace std;
int Count(const string s)
{
	int k = 0;
	size_t pos = 0;
	int i = 0;
	for(i; i <= s.length(); i++)
		if (s[i] == ',')
		{
			k++;
			if (k == 3)
			{
				return i;
				break;
			}
		}
}

string Change(string& s)
{
	size_t pos = 0;
	while ((pos = s.find(',', pos)) != -1)
		s.replace(pos, 1, "**");
	return s;
}

int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	cout << "Index of third ',' is " << Count(str) << endl;
	string dest = Change(str);
	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;
	system("pause");
	return 0;
}