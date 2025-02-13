#include "../kernel/types.h"
#include "user.h"

int
main(int* argc, char **argv)
{
	printf("CHIPI CHIPI: %d\n", hartid());
}
