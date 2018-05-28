_Bool point(double x, double y)
{
	if ((x <= 1 && x >= -1 && y <= 1 && y >= -1) && !(x > 0 && y < 0)) 
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
