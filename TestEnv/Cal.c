int Sum(int X, int Y);
int SUB(int X, int Y);
int MULTI(int X, int Y);
int DIV(int X, int Y);
int PER(int X, int Y);

int Sum (int X, int Y)
{
	int z;
	z=X+Y;
	return (z);
}

int SUB(int X,int Y)
{
	int z;
	z=X-Y;
    return (z);
}
	
int MULTI(int X,int Y)
{
	int z;
    z =(X*Y);
    return (z);
}

int DIV(int X,int Y)
{
	int z;
	z=(X/Y);
	return (z);
}

int PER (int X,int Y)
{
	int z;
    z=(X%Y);
    return (z);
}
