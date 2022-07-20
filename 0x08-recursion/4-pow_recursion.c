/**
 * _pow_recursion - fn to evaluate int raised to power
 * @x: base int
 * @y: exponential int
 * Return: result of exponential
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
