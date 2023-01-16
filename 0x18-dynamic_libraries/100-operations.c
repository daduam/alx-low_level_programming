/**
 * add - add two numbers
 * @a: first number
 * @b: second number
 * Return: result of addition
 */
long long add(long long a, long long b)
{
	return (a + b);
}

/**
 * sub - subtract the second number from the first number
 * @a: first number
 * @b: second number
 * Return: result of subtracting @b from @a
 */
long long sub(long long a, long long b)
{
	return (a - b);
}

/**
 * mul - multiply two numbers
 * @a: first number
 * @b: second number
 * Return: result of the multiplication
 */
long long mul(long long a, long long b)
{
	return (a * b);
}

/**
 * div - divide the first number by the second
 * @a: first number
 * @b: second number
 * Return: result of the division
 */
long long div(long long a, long long b)
{
	if (b == 0)
		return (0);
	return (a / b);
}

/**
 * mod - @a modulo @b
 * @a: first number
 * @b: second number
 * Return: result of the modulo
 */
long long mod(long long a, long long b)
{
	return (a % b);
}

