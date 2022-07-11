/**
 * swap_int - fn to swap ints
 * @a: first param
 * @b: second param
 * Return: void
 */
void swap_int(int *a, int *b)
{
	/* store value of pointer a temporarily in tmp */
	int tmp = *a;
	/* store value of pointer b in a */
	*a = *b;
	/* store value of tmp into b */
	*b = tmp;
}
