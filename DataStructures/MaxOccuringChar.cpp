//#include <iostream>
//
//using namespace std;
//#define ASCII_SIZE 256
//char maxOccuringChar(char* str)
//{
//	int max = 0;
//	int count[ASCII_SIZE] = { 0 };
//	int l = strlen(str);
//	char res;
//	for (int i = 0; i < l; i++)
//	{
//		count[str[i]]++;
//		if (max < count[str[i]])
//		{
//			max = count[str[i]];
//			res = str[i];
//		}
//	}
//	return res;
//}
//int main()
//{
//	char str[] = "Vinu";
//	cout << maxOccuringChar(str);
//	return 0;
//}