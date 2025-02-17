int	main()
{
	int *ptr = new int;
	*ptr = 42;
	delete ptr;
	if (*ptr == 42)
		return (1);
}
