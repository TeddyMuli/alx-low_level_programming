#define ABS(x)
({
	int x;
       if ((x) < 0)
	{
	x = x * -1;
	}
	else
	{
	x = x * 1;
	}
	x;
})
