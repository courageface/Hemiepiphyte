/***************************************************
POJ_1002 : 486-3279
By Lonelinessqwf
Memory:5228K	Time:1375MS
2016-12-31
****************************************************/
#include<iostream>
#include<string>
#include<map>
using namespace std;
char convert(char c)
{
	switch (c)
	{
	case 'A':
	case 'B':
	case 'C':return '2';
	case 'D':
	case 'E':
	case 'F':return '3';
	case 'G':
	case 'H':
	case 'I':return '4';
	case 'J':
	case 'K':
	case 'L':return '5';
	case 'M':
	case 'N':
	case 'O':return '6';
	case 'P':
	case 'R':
	case 'S':return '7';
	case 'T':
	case 'U':
	case 'V':return '8';
	case 'W':
	case 'X':
	case 'Y':return '9';
	}
	
}
int main()
{
	map<string, int> telp_count;
	bool flag = false;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		string str, rec;
		cin >> str;
		for (string::iterator s_it = str.begin(); s_it != str.end(); s_it++)
		{
			if (*s_it <= 'Z'&&*s_it >= 'A') rec.push_back(convert(*s_it));
			if(*s_it <= '9'&&*s_it >= '0') rec.push_back(*s_it);			
		}
		rec.insert(3, 1, '-');
		telp_count[rec]++;
	}
	
	for (map<string, int>::iterator map_it = telp_count.begin(); map_it != telp_count.end(); map_it++)
		if (map_it->second >= 2) {
			flag = true;
			cout <<map_it->first<< " "<< map_it->second<< endl;
		}
	if (!flag)
		cout << "No duplicates." << endl;
	system("pause");
	return 0;
}
/***************************************************
487-3279
Time Limit: 2000MS		Memory Limit: 65536K
Total Submissions: 284659		Accepted: 51114

Description
Businesses like to have memorable telephone numbers. One way to make a telephone number memorable is to have it spell a memorable word or phrase. For example, you can call the University of Waterloo by dialing the memorable TUT-GLOP. Sometimes only part of the number is used to spell a word. When you get back to your hotel tonight you can order a pizza from Gino's by dialing 310-GINO. Another way to make a telephone number memorable is to group the digits in a memorable way. You could order your pizza from Pizza Hut by calling their ``three tens'' number 3-10-10-10.

The standard form of a telephone number is seven decimal digits with a hyphen between the third and fourth digits (e.g. 888-1200). The keypad of a phone supplies the mapping of letters to numbers, as follows:

A, B, and C map to 2
D, E, and F map to 3
G, H, and I map to 4
J, K, and L map to 5
M, N, and O map to 6
P, R, and S map to 7
T, U, and V map to 8
W, X, and Y map to 9

There is no mapping for Q or Z. Hyphens are not dialed, and can be added and removed as necessary. The standard form of TUT-GLOP is 888-4567, the standard form of 310-GINO is 310-4466, and the standard form of 3-10-10-10 is 310-1010.

Two telephone numbers are equivalent if they have the same standard form. (They dial the same number.)

Your company is compiling a directory of telephone numbers from local businesses. As part of the quality control process you want to check that no two (or more) businesses in the directory have the same telephone number.

Input
The input will consist of one case. The first line of the input specifies the number of telephone numbers in the directory (up to 100,000) as a positive integer alone on the line. The remaining lines list the telephone numbers in the directory, with each number alone on a line. Each telephone number consists of a string composed of decimal digits, uppercase letters (excluding Q and Z) and hyphens. Exactly seven of the characters in the string will be digits or letters.

Output
Generate a line of output for each telephone number that appears more than once in any form. The line should give the telephone number in standard form, followed by a space, followed by the number of times the telephone number appears in the directory. Arrange the output lines by telephone number in ascending lexicographical order. If there are no duplicates in the input print the line:

No duplicates.

Sample Input

12
4873279
ITS-EASY
888-4567
3-10-10-10
888-GLOP
TUT-GLOP
967-11-11
310-GINO
F101010
888-1200
-4-8-7-3-2-7-9-
487-3279

Sample Output

310-1010 2
487-3279 4
888-4567 3

Source
East Central North America 1999
****************************************************/