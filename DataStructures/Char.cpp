//#include <iostream>
//#include <string>
//using namespace std;
//void reverse(char* ch, int n)
//{
//	char temp;
//	for (int i =0;i<n/2;i++)
//	{
//		temp = ch[i];
//		ch[i] = ch[n - 2 - i];
//		ch[n - 2 - i] = temp;
//	}
//}
//
//int words(string S)
//{
//	int n = S.length();
//	for (int i = 0; i < n / 2; i++)
//	{
//		if(S[i]!=S[n-i-1])
//		{
//			cout << "No";
//			return 0;
//		}
//	}
//	cout << "Yes";
//	return 1;
//}
//int main()
//{
//	char c[] = "Vinu Warrier";
//	int a[] = { 1,2,3,4,5,6,7,8,9 };
//	int an = sizeof(a) / sizeof(a[0]);
//	int n = sizeof(c) / sizeof(c[0]);
//	reverse(c, n);
//	
//	char c1[] = "aabbccbbaa";
//	cout << words(c1);
//	return 0;
//}