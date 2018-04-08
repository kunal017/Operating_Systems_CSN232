
void printXY(int r, int c, char ch)
{
	char* vm = (char*) 0xb8000;
	vm += ( r * 80 + c ) * 2 + 3;
	*vm = ch;
}

void printDesi(int r, int c, char ch, char design)
{
	char* vm = (char*) 0xb8000;
	vm += ( r * 80 + c ) * 2 + 3;
	*(vm + 1) = design;
	*vm = ch;
}

void printColor(int r, int c, int design)
{
	char* vm = (char*) 0xb8000;
	vm += ( r * 80 + c ) * 2 + 4;
	*(vm) = design;
}


void clear()
	{
		int r,c;
		for ( r = 0 ; r < 25 ; r++ )
		{
			for ( c = 0 ; c < 80 ; c++ )
				{
					printXY(r, c, ' ');
				}
		}
	}

void printStr(int r, int c, char* s)
{

	while(*s != '\0')
	{
		
		printXY(r,c,*s);
		c++;
		s++;
	}
}

void colorize()
	{
		int counter = 0,r,c;
		for ( r = 0 ; r < 25 ; r++ )
			{
				for ( c = 0 ; c < 80 ; c++ )
					{
						printColor(r, c, (counter % 14)+1 );
						counter++;
					}
			}
	}

void delay(int x)
	{
		int i,j;
		for ( i = 0 ; i < x ; i++ )
			{
				for ( j = 0 ; j < x ; j++ )
					{
						
					}
			}
	}
