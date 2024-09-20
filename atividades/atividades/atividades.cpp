#include <iostream>

#define L 3
#define C 3
int main() {
	 int i, j, m[L][C];
	 int a = 0, b = 0, c = 0;
	 int d = 0, e = 0, f = 0;
	//entra com valores para as variáveis
		for (i = 0; i < L; i++) {
			for (j = 0; j < C; j++) {
				(i == j) ? a += m[i][j] : 0;
				if (j == C - i - 1) b = b + m[i][j];
				if (j < i) c += m[i][j];
				(j < i) ? d = d + m[i][j] : 0;
				(j <= C - i - 2) ? e += m[i][j] : 0;
				if (j >= C - i) f = f + m[i][j];
			}
		}
	return 0;
}