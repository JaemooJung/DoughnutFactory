#include "../prepare.h"

static bool clear_flags(int set_idx, int get_idx) {
	static bool clear_flags[HAPPINESS] = {false, };
	if (set_idx >= 0) {
		clear_flags[set_idx] = true;
		return false;
	}
	return clear_flags[get_idx];
}

void O_folding_boxes(int value) {
	if (value != -42)
		clear_flags(1, -1);
}

void O_every_doughnuts_i_sigh() {
	clear_flags(2, -1);
}

void O_not_only_sigh_i_cry() {
	clear_flags(3, -1);
}

void O_boxes_are_devils() {
	clear_flags(4, -1);
}

void O_doughnuts_are_evil() {
	clear_flags(5, -1);
}

void boss_went_to_smoke(void)
{
	while (42)
		;
}


void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n)
	{
		*ptr = 0;
		ptr++;
		--n;
	}
}

void	trash(char ***box)
{
	int	index;

	index = 0;
	while ((*box)[index] != NULL)
	{
		free((*box)[index]);
		(*box)[index] = NULL;
		++index;
	}
	free(*box);
	return ;
}

char **alloc_boxes(int workload) {
	char **boxes;
	if (workload == 15)
	{
		clear_flags(0, -1); //p1 clear.
	}
	boxes = (char **)malloc(sizeof(char *) * (workload + 1));
	if (boxes == 0)
		return (0);
	return (boxes);
}

int double_check_count(int count) {
	(void)count;
	return (-42);
}

void donut()
{
	int k;
	int time;
    float A=0, B=0, i, j, z[1760];
    char b[1760];
    printf("\x1b[2J");
	time = 0;
    for( ; ; ) {
        memset(b,32,1760);
        memset(z,0,7040);
        for(j=0; 6.28>j; j+=0.07) {
            for(i=0; 6.28 >i; i+=0.02) {
                float sini=sin(i),
                      cosj=cos(j),
                      sinA=sin(A),
                      sinj=sin(j),
                      cosA=cos(A),
                      cosj2=cosj+2,
                      mess=1/(sini*cosj2*sinA+sinj*cosA+5),
                      cosi=cos(i),
                      cosB=cos(B),
                      sinB=sin(B),
                      t=sini*cosj2*cosA-sinj* sinA;
                int x=40+30*mess*(cosi*cosj2*cosB-t*sinB),
                    y= 12+15*mess*(cosi*cosj2*sinB +t*cosB),
                    o=x+80*y,
                    N=8*((sinj*sinA-sini*cosj*cosA)*cosB-sini*cosj*sinA-sinj*cosA-cosi *cosj*sinB);
                if(22>y&&y>0&&x>0&&80>x&&mess>z[o]){
                    z[o]=mess;
                    b[o]=".,-~:;=!*#$@"[N>0?N:0];
                }
            }
			usleep(200);
        }
        for(k=0; 1761>k; k++)
            putchar(k%80?b[k]:10);
        A+=0.08;
        B+= 0.02;
		time++;
		if (time == 400)
			break;
	}
}

void go_to_work(void)
{
	int check;
	DOUGHNUTS fifteen_doughnuts = " ( O ) / ( O ) / ( O ) / ( O ) / ( O ) / ( O ) / ( O ) / ( O ) / ( O ) / ( O ) / ( O ) / ( O ) / ( O ) / ( O ) / ( O ) ";
	DOUGHNUTS ten_doughnuts = " ( 0 ) / ( 0 ) / ( 0 ) / ( 0 ) / ( O ) / ( O ) / ( O ) / ( O ) / ( O ) / ( O ) ";
	TRUCK truck = duty(fifteen_doughnuts, '/');
	TRUCK truck2 = duty(ten_doughnuts, '/');
	printf("There are seven problems to solve.\n");
	printf("Expected result is to display fifteen doughnuts look like this => [ ( 0 ) ] <=\n");
	printf("======Truck1======\n");
	for (int progress = 0; truck[progress] != NULL; progress++) {
		printf("% 3dth, %s\n", progress + 1, truck[progress]);
	}
	trash(&truck);
	printf("==================\n");
	printf("\nProblems Solved : ");
	check = 0;
	for (int i = 0; i < HAPPINESS; i++) {
		printf("%d : ", i);
		if (clear_flags(-1, i)) {
			printf("[ ✅ ] ");
			check++;
		} else {
			printf("[ ❌ ] ");
		}
		if (i < HAPPINESS - 1)
			printf(" /  ");
	}
	printf("\n");
	if (check == 6)
	{
		donut();
		printf("Check for memory leak\n");
	}
}