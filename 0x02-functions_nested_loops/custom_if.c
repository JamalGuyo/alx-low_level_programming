#include <stdio.h>

/**
 *
 *
 */
void custom_if(int mult, int cols)
{
if (mult <= 9)
			{
				if (cols != 0 && cols != 9)
				{
					printf("  %d,", mult);
				}
				else if (cols == 9)
				{
					printf("  %d", mult);
				}
				else
				{
					printf("%d,", mult);
				}
			}
			else
			{
				if (cols != 0 && cols != 9)
				{
					printf(" %d,", mult);
				}
				else if (cols == 9)
				{
					printf(" %d", mult);
				}
				else
				{
					printf("%d,", mult);
				}
			}
}
