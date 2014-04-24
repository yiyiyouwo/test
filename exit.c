#include <head.h>

int test()
{
	printf("test\n");
	sleep(1);
	exit(0);
	//return 0;

}

int main(int argc, const char *argv[])
{
	while(1)
	{
		test();
	}
	return 0;
}
