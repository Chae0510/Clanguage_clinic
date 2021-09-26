#include <stdio.h>

int get_pay(int hours, int day_rate, int hour_rate);

int main() {
	int total_hours;
	int daily_rate = 100000, hourly_rate = 10000;
	int pay;

	while (1) {
		printf("�ٷ� �ð���? (����� -1)");
		scanf_s("%d", &total_hours);

		if (total_hours == -1) {
			printf("\n���α׷��� �����մϴ�\n");
			break;
		}
		pay = get_pay(total_hours, daily_rate, hourly_rate);
		printf("������ �ӱ��� %d��\n\n", pay);		
	}
	return 0;	
}

int get_pay(int hours, int day_rate, int hour_rate) {
	int day = hours / 8;
	hours = hours % 8;

	return (day * day_rate + hours * hour_rate);
}