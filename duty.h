#ifndef DUTY_H
# define DUTY_H

# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include "prepare.h"

typedef char** TRUCK;
typedef char** BOXES;
typedef char* BOX;
typedef char* DOUGHNUTS;
typedef char PAPER;

TRUCK   duty(DOUGHNUTS doughnut_pile, PAPER paper);

#endif