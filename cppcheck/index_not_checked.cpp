void	test_func(int x)
{
	int buf[100];
	buf[x] = 0;
}

int main()
{
	test_func(100);
}
