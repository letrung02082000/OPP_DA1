#include"String.h"
using namespace std;

int main()
{
	jd::String str1 = "a";
	jd::String str2 = "b";
	jd::String str3 = str1 + str2;
	str3 = str1.append(str2);
	cout << str3;
	system("pause");
	return 0;
}