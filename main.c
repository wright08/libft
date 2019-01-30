#include <ctype.h>
#include <stdio.h>

char	**ft_strsplit(const char *s, char c);

int main(void)
{
	char	**arr;
	int		i;
	arr = ft_strsplit("eeae", 'e');
	if (arr)
	{
		i = 0;
		while (arr[i])
			printf("%s\n", arr[i++]);
	}
	return (0);
}
