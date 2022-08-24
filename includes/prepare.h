//
// Created by Han Gyul Kim on 2022/08/24.
//

#ifndef EVAL_FIXED_PREPARE_H
# define EVAL_FIXED_PREPARE_H

# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include <string.h>
# include <math.h>
# include <unistd.h>

#define HAPPINESS 6

typedef int** CIGAR;
typedef char** TRUCK;
typedef char** BOXES;
typedef char* BOX;
typedef char* DOUGHNUTS;
typedef char PAPER;

void O_i_hate_this_work(int progress);
void O_every_doughnuts_i_sigh();
void O_not_only_sigh_i_cry();
void O_even_it_makes_me_moan();
void O_boxes_are_devils();
void O_doughnuts_are_evil();
void O_boss_is_angry(CIGAR cigarette);
void O_boss_is_not_angry_anymore(CIGAR cigarette);
void boss_went_to_smoke(void);
void ft_bzero(void *s, size_t n);
void trash(char ***box);
char **alloc_boxes(int no_way_home);
int double_check_count(int count);

void go_to_work(void);

TRUCK   duty(DOUGHNUTS doughnut_pile, PAPER paper);

#endif //EVAL_FIXED_PREPARE_H
