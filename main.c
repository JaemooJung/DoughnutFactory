#include "duty.h"

//we have to put fresh doughnut into boxes from doughnut stockpile and carry those boxes to truck

void go_to_work(void)
{
	DOUGHNUTS fifteen_doughnuts = " ( O ) / ( O ) / ( O ) / ( O ) / ( O ) / ( O ) / ( O ) / ( O ) / ( O ) / ( O ) / ( O ) / ( O ) / ( O ) / ( O ) / ( O ) ";
	DOUGHNUTS ten_doughnuts = " ( 0 ) / ( 0 ) / ( 0 ) / ( 0 ) / ( O ) / ( O ) / ( O ) / ( O ) / ( O ) / ( O ) ";
	TRUCK truck = duty(fifteen_doughnuts, '/');
	TRUCK truck2 = duty(ten_doughnuts, '/');
	printf("======Truck1======\n");
	for (int progress = 0; truck[progress] != NULL; progress++) {
		printf("% 3dth, %s\n", progress + 1, truck[progress]);
	}
	printf("==================\n");
	printf("======Truck2======\n");
	for (int progress = 0; truck2[progress] != NULL; progress++) {
		printf("% 3dth, %s\n", progress + 1, truck2[progress]);
	}
	printf("==================\n");
	for (int i = 0; i < FAULT_COUNT; i++) {
		if (clear_flags(-1, i)) {
			printf("O ");
		} else {
			printf("X ");
		}
	}
	printf("\n");
}

int main(void) 
{
	go_to_work();
	// system("leaks duty");
	return (0);
}