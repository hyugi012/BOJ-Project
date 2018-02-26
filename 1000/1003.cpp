#include <stdio.h>

int mem0[41] = { 1, 0, };
int mem1[41] = { 0, 1, };
int j, k;
int main()
{
	int T;

	scanf_s("%d", &T);

	for (int tc = 1; tc <= T; tc++) {
		int N;
		scanf_s("%d", &N);
		
		for (int i = 0; i <= N; i++) {
			if (i == 0) {
				j = mem0[0]; k = mem1[0];
			}
			else if (i == 1) {
				j = mem0[1]; k = mem1[1];
			}
			else {
				mem0[i] = mem0[i - 1] + mem0[i - 2];
				mem1[i] = mem1[i - 1] + mem1[i - 2];
				j = mem0[i];
				k = mem1[i];
			}
		}

		printf("%d %d\n", j, k);
	}
}
