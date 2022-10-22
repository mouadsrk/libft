#include"libft.h"

void ft_free(char **arr,size_t r)
{
	size_t i;

	i = 0;
	while(i < r)
	{
		free(arr[i]);
	}
}

size_t ft_lastchar(char const *s, char c)
{
	size_t i , r;
	 i = 0;
	r =0;
   
	while(s[i])
	{
		  if((s[i] != c && s[i +1] == c) || (s[i-1] == c && s[i] != c && s[i + 1] == '\0'))
			  r++;
	 i++;
	}
	return r;
}
void ft_allocation(char **arr,char const *s,char c,size_t r)
{
	size_t  b;
	size_t i;
	size_t j;

	j = 0;
	i = 0;
	while(i < r)
	{   
		b = 0;
		while(s[j] != c && s[j])
		{
			b++;
			j++;
		}
		if(b != 0)
		{ 
			arr[i] = (char*)malloc(b * sizeof(char*)+1);
			i++;
		}
		j++;
	}
}
void ft_strmake(char **arr, char const *s, char c, size_t r)
{
	size_t		b;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	b = 0;
	while(i < r)
	{   
		b = 0;
		while(s[j] != c && s[j])
		{
			arr[i][b] = s[j];
			b++;
			j++;
		}
		if(b != 0)
		{
			arr[i][b] = '\0';    
			i++;
		}
		j++;
	}
}

char **ft_split(char const *s, char c)
{
	size_t i;
	size_t r;
	size_t j;
	char **arr;

	i = 0;
	j = 0;
	if(!s)
		return (NULL);
	r = ft_lastchar(s,c);
	arr = (char**)malloc((r + 1) * sizeof(char*));
	if (!arr)
		return (NULL);
	arr[r] = NULL;
	ft_allocation(arr,s,c,r);
	ft_strmake(arr,s,c,r);
	return(arr);
}
// int main(){
	
// 	char s[] ="++hello+++i'm+split++!";
// 	char c = '+' ;
// 	char **arr = ft_split(s[0],c);
// 	int i = 0;
// 	int j = 0;

// 	while(arr[i])
// 	{
// 	    while(arr[i][j])
// 	    {
// 	         printf("%c",arr[i][j]);
// 	        j++;
// 	    }
// 	    j = 0;
// 	    i++;
// 	}
	 
// }


