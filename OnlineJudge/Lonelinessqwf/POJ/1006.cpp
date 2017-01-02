/***************************************************
POJ_1006 : 	Biorhythms
By Lonelinessqwf
Memory:248K	Time:813MS
2017-1-1
***************************************************/
#include<iostream>
using namespace std;
void print(int x)
{
	static int i = 1;
	cout << "Case " << i++<< ": the next triple peak occurs in "<<x << " days."<<endl;
}
int main()
{
	int p, e, i, d;
	while (cin >> p >> e >> i >> d)
	{
		int count = 0;
		if (p == -1 && e == -1 && i == -1 && d == -1) break;

		if (p > d) p = p - (p - d) / 23 * 23;
		if (e > d) e = e - (e - d) / 28 * 28;
		if (i > d) i = i - (i - d) / 33 * 33;

		if (p == e && e == i && i == d) count++;
		while (((d + count - p) % 23 != 0) ||((d + count - e) % 28 != 0) ||((d + count - i) % 33 != 0))
		{
			count++;
		}
		print(count);

	}
	return 0;

}
/**************************************************
Biorhythms
Time Limit: 1000MS		Memory Limit: 10000K
Total Submissions: 132568		Accepted: 42322

Description
Some people believe that there are three cycles in a person's life that start the day he or she is born. These three cycles are the physical, emotional, and intellectual cycles, and they have periods of lengths 23, 28, and 33 days, respectively. There is one peak in each period of a cycle. At the peak of a cycle, a person performs at his or her best in the corresponding field (physical, emotional or mental). For example, if it is the mental curve, thought processes will be sharper and concentration will be easier.
Since the three cycles have different periods, the peaks of the three cycles generally occur at different times. We would like to determine when a triple peak occurs (the peaks of all three cycles occur in the same day) for any person. For each cycle, you will be given the number of days from the beginning of the current year at which one of its peaks (not necessarily the first) occurs. You will also be given a date expressed as the number of days from the beginning of the current year. You task is to determine the number of days from the given date to the next triple peak. The given date is not counted. For example, if the given date is 10 and the next triple peak occurs on day 12, the answer is 2, not 3. If a triple peak occurs on the given date, you should give the number of days to the next occurrence of a triple peak.

Input
You will be given a number of cases. The input for each case consists of one line of four integers p, e, i, and d. The values p, e, and i are the number of days from the beginning of the current year at which the physical, emotional, and intellectual cycles peak, respectively. The value d is the given date and may be smaller than any of p, e, or i. All values are non-negative and at most 365, and you may assume that a triple peak will occur within 21252 days of the given date. The end of input is indicated by a line in which p = e = i = d = -1.

Output
For each test case, print the case number followed by a message indicating the number of days to the next triple peak, in the form:

Case 1: the next triple peak occurs in 1234 days.

Use the plural form ``days'' even if the answer is 1.

Sample Input

0 0 0 0
0 0 0 100
5 20 34 325
4 5 6 7
283 102 23 320
203 301 203 40
-1 -1 -1 -1

Sample Output

Case 1: the next triple peak occurs in 21252 days.
Case 2: the next triple peak occurs in 21152 days.
Case 3: the next triple peak occurs in 19575 days.
Case 4: the next triple peak occurs in 16994 days.
Case 5: the next triple peak occurs in 8910 days.
Case 6: the next triple peak occurs in 10789 days.

Source
East Central North America 1999
***************************************************/