#include<stdio.h>
int main(void) {
	int num = 0;
	scanf("%d", &num);
	int index = 1;
	int temp = 0;
	while (true) {
		temp = 3 * index*index - 3 * index + 2;
		//temp += 6 * index - 5;
		if (temp > num) {
			break;

		}
		index++;
	}
	printf("%d\n", index);

}
//	1	(1) <<-- 노쓸모
//	2	3	4	5	6	7	(6)
//	8	9	10	11	12	13	14	15	16	17	18	19	(12)
//	20	21	22	23	24	25	26	27	28	29	30	31	32	33	34	35	36	37	(18)
//	38~61 (61-38+1개) (24)
// 계차수열 5씩 증가하는것을 알수있다.