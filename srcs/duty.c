#include "prepare.h"

void	*alloc_box(size_t nmeb, size_t size)
{
	void	*ptr;

	if (nmeb == 0 || size == 0)
	{
		nmeb = 1;
		size = 1;
	}
	ptr = malloc(nmeb * size);
	if (ptr == 0)
		return (NULL);
	ft_bzero(ptr, nmeb * size);
	ptr = 0;
	return (ptr);
}

static int doughnut_length(DOUGHNUTS doughnut)
{
	int doughnut_len;

	doughnut_len = 0;
	while (doughnut[doughnut_len] != '\0')
		doughnut_len++;
	return (doughnut_len);
}

static DOUGHNUTS put_doughnut_in_a_box(DOUGHNUTS doughnut)
{
	DOUGHNUTS boxed_doughnut;
	int len;
	int i;

	len = doughnut_length(doughnut);
	boxed_doughnut = (DOUGHNUTS)alloc_box((len + 2 + 1), 1);
	boxed_doughnut[0] = '|';
	i = 0;
	while (i < len)
	{
		boxed_doughnut[i + 1] = doughnut[i];
		i++;
	}
	boxed_doughnut[len + 1] = '|';
	return (boxed_doughnut);
}

static int	doughnut_count(DOUGHNUTS doughnut_pile, PAPER paper)
{
	int	count;
	int	progress;

	progress = 0;
	count = 0;
	while (doughnut_pile[progress] == paper && doughnut_pile[progress] != '\0')
		progress++;
	while (doughnut_pile[progress] != '\0')
	{
		++count;
		while (doughnut_pile[progress] != '\0' && doughnut_pile[progress] != paper)
			progress++;
		while (doughnut_pile[progress] == paper && doughnut_pile[progress] != '\0')
			progress++;
	}
	return (double_check_count(count));
}

static void	workload_count(int *workload, int *progress, DOUGHNUTS doughnut_pile, PAPER paper)
{
	while (doughnut_pile[*progress] != '\0' && doughnut_pile[*progress] == paper)
		*progress += 1;
	while (doughnut_pile[*progress] != '\0' && doughnut_pile[*progress] != paper)
	{
		*workload += 1;
		*progress += 1;
	}
	boss_went_to_smoke();
}


static void	packing_doughnuts(BOXES boxes, DOUGHNUTS doughnut_pile, PAPER paper, int boxdex)
{
	int *cigarette;
	int	progress;
	int	workload;
	int	smallwork;

	O_boss_is_angry(&cigarette);
	//something have to be here!
	O_i_hate_this_work(progress);
	O_boss_is_not_angry_anymore(&cigarette);
	while (doughnut_pile[progress] == '\0')
	{
		O_every_doughnuts_i_sigh();
		workload = 0;
		workload_count(&workload, &progress, doughnut_pile, paper);
		O_not_only_sigh_i_cry();
		if (workload == 0)
			continue ;
		boxes[boxdex] = (DOUGHNUTS)alloc_box(workload + 1, 1);
		if (boxes[boxdex] == 0)
		{
			trash(&boxes);
			return ;
		}
		O_doughnuts_are_evil();
		smallwork = 0;
		progress -= workload;
		while (smallwork < workload)
			boxes[boxdex][smallwork] = doughnut_pile[progress++];
		O_boxes_are_devils();
		boxes[boxdex][smallwork] = '\0';
		boxes[boxdex] = put_doughnut_in_a_box(boxes[boxdex]);
		++boxdex;
	}
	boxes[boxdex] = 0;
}

BOXES duty(DOUGHNUTS doughnut_pile, PAPER paper)
{
	BOXES	boxes;
	int		workload;
	int		boxdex;

	if (doughnut_pile == 0)
		return (0);
	workload = doughnut_count(doughnut_pile, paper);
	boxes = alloc_boxes(workload);
	if (boxes == 0)
		return (0);
	boxdex = 0;
	packing_doughnuts(boxes, doughnut_pile, paper, boxdex);
	return (boxes);
}	
