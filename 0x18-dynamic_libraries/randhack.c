int rand()
{
	static int call = 0;

	call++;
	if (call == 1 || call == 2)
		return (8);
	if (call == 3)
		return (7);
	if (call == 4)
		return (9);
	if (call == 5)
		return (23);
	if (call == 6)
		return (74);
}
