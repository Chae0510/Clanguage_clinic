#include <stdio.h>

int get_pay(int hours, int day_rate, int hour_rate);

int main() {
	int total_hours;
	int daily_rate = 100000, hourly_rate = 10000;
	int pay;

	while (1) {
		printf("근로 시간은? (종료시 -1)");
		scanf_s("%d", &total_hours);

		if (total_hours == -1) {
			printf("\n프로그램을 종료합니다\n");
			break;
		}
		pay = get_pay(total_hours, daily_rate, hourly_rate);
		printf("오늘의 임금은 %d원\n\n", pay);		
	}
	return 0;	
}

int get_pay(int hours, int day_rate, int hour_rate) {
	int day = hours / 8;
	hours = hours % 8;

	return (day * day_rate + hours * hour_rate);
}