#include <unistd.h>

void ft_print_alphabet(void)
{
	char t = 'a';
	while(t <= 'z')
	{
		write(1, &t, 1);
		t++;
	}
}



int main(void)
{
	ft_print_alphabet();
	return 0;
}
