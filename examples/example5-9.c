#define ARLEN 10

main()
{
	int ar[ARLEN], *ip;

	ip = ar;
	while (ip < &ar[ARLEN])
		*(ip++) = 0;
}
