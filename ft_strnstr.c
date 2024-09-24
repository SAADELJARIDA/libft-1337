char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	j;
	int	i;

	i = 0;

	if (!*little)
		return ((char *)big);
	while (big[i])
	{
		j = 0;
		while (big[i + j] == little[j] && (j + i < len) && little[j])
			j++;
		if (!little[j])
			return (char *)(str + i);
		i++;	
	}
	return (0);
}

int main()
