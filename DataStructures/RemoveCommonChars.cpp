//#include <iostream>
//
//using namespace std;
//#define NO_OF_CHARS 256 
//int *getCharCountArray(char *str)
//{
//	int *count = (int *)calloc(sizeof(int), NO_OF_CHARS);
//	int i;
//	for (i = 0; *(str + i); i++)
//		count[*(str + i)]++;
//	return count;
//}
//
//char* removeDuplicates(char* str, char* mask_str)
//{
//	int *count = getCharCountArray(mask_str);
//	int ip_ind = 0, res_ind = 0;
//	while (*(str + ip_ind))
//	{
//		char temp = *(str + ip_ind);
//		if (count[temp] == 0)
//		{
//			*(str + res_ind) = *(str + ip_ind);
//			res_ind++;
//		}
//		ip_ind++;
//	}
//
//	/* After above step string is ngring.
//	  Removing extra "iittg" after string*/
//	*(str + res_ind) = '\0';
//
//	return str;
//}
//int main()
//{
//	char str1[] = "Adithi Warrier";
//	char str2[] = "Ashwin Warrier";
//	removeDuplicates(str1, str2);
//	return 0;
//}