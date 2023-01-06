#include <stdio.h>

int main(void)
{
	char buffer[10] = {0x00};
	unsigned int size = 10;
        unsigned int i;

        i = 0;
        while (i < size)
        {
                if (i % 10)
                {
                        printf(" ");
                }
                if (!(i % 10) && i)
                {
                        printf("\n");
                }
                printf("0x%02x", buffer[i]);
                i++;
        }
        printf("\n");
	return 0;
}
