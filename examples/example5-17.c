void f(int a, float b) {}
void g(int a, float b) {}
void h(int a, float b) {}

void (*fparr[])(int, float) = {
	/* initializers */
	f, g, h, f, g, h
};

main()
{
	/* then call one */

	fparr[5] (1, 3.4);
}
