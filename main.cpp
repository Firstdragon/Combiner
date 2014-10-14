#include <iostream>
using namespace std;
int main(void)
{
	int min = 0, i = 0, j = 0, z = 1, m = 0, n = 0, q = 0, k[20][20];
vvod:
	cout << "m="; //ââîä êîëè÷åñòâà ñòðîê
	cin >> m;
	cout << "n="; //ââîä êîëè÷åñòâà ñòîëáöîâ
	cin >> n;
	if ((n <= 0) || (m <= 0)) {
		cout << ("Kolichestvo strok/stolbcov matricy ne mozhet ne byt' polozhitel'nym chislom!") << endl; goto vvod;
	}
	else if ((n <= 0) && (m <= 0)) {
		cout << ("Kolichestvo strok/stolbcov matricy ne mozhet ne byt' polozhitel'nym chislom!") << endl; goto vvod;
	}
	// ñì. âûøå: îáðàáîòêà îøèáîê
	for (i = 0; i < m; i++){
		for (j = 0; j < n; j++) k[i][j] = 1488;
	}
	if (m <= n) min = m; else min = n;
		q = min / 2;
		if (min % 2 == 1) q += 1;
		do{
			for (i = (-1 + z); i <= (n - z); i++){
				k[i][-1 + z] = z;
			}

			for (i = (-1 + z); i <= (n - z); i++){
				k[i][m - z] = z;
			}

			for (j = (-1 + z); j <= (m - z); j++){
				k[n - z][j] = z;
			}
			for (j = (-1 + z); j <= (m - z); j++){
				k[-1 + z][j] = z;
			}
		z = z + 1;
		} while (z <= q);
		
	for (i = 0; i<m; i++)
	{
		//öèêë ïî ïåðåìåííîé i, â êîòîðîì ïåðåáèðàåì ñòðîêè ìàòðèöû
		for (j = 0; j<n; j++)
			cout << k[i][j] << "\t"; //âûâîä î÷åðåäíîãî ýëåìåíòà ìàòðèöû
		cout << endl; //ïåðåõîä íà íîâóþ ñòðîêó ïîñëå âûâîäà âñåõ ýëåìåíòîâ ñòðîêè
	}
	system("pause");
	return 0;
}
