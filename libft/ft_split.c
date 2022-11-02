#include"libft.h"

void ft_free(char **arr,size_t r)
{
	size_t i;

	i = 0;
	while(i < r)
	{
		free(arr[i]);
		i++;
	}
}

size_t ft_lastchar(char const *s, char c)
{
	size_t i , r;
	 i = ft_strlen(s) - 1;
	 printf("%d",s[i]);
	r =0;
	if(s[i] != c)
		r++;
	i = 0;
	while(s[i])
	{
		  if((s[i] != c && s[i + 1] == c))
			  r++;
	 i++;
	}
	return r;
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
	printf("%lu\n",r);
	arr = (char**)malloc((r + 1) * sizeof(char*));
	if (!arr)
		return (NULL);
	arr[r] = NULL;
	
	ft_allocation(arr,s,c,r);
	ft_strmake(arr,s,c,r);
	return(arr);
}
// int main(){
	
// 	char s[] ="mmmmmmm";
// 	char c = 'm' ;
// 	int a = ft_lastchar("+m+m+m",'+');
// 	printf("%d",a);
// 	// int i = 0;
// 	// int j = 0;

// // 	while(arr[i])
// // 	{
// // 	    while(arr[i][j])
// // 	    {
// // 	         printf("%c",arr[i][j]);
// // 	        j++;
// // 	    }
// // 	    j = 0;
// // 		printf("\n");
// // 	    i++;
// // 	}

//  }
// void ft_allocation(char **arr,char const *s,char c,size_t r)
// {
// 	size_t  b;
// 	size_t i;
// 	size_t j;

// 	j = 0;
// 	i = 0;
// 	while(i < r)
// 	{   
// 		b = 0;
// 		while(s[j] != c && s[j])
// 		{
// 			b++;
// 			j++;
// 		}
// 		if(b != 0)
// 		{ 
// 			arr[i] = (char*)malloc(b * sizeof(char*)+1);
// 			i++;
// 		}
// 		j++;
// 	}
// }
// void ft_strmake(char **arr, char const *s, char c, size_t r)
// {
// 	size_t		b;
// 	size_t		i;
// 	size_t		j;

// 	i = 0;
// 	j = 0;
// 	b = 0;
// 	while(i < r)
// 	{   
// 		b = 0;
// 		while(s[j] != c && s[j])
// 		{
// 			arr[i][b] = s[j];
// 			b++;
// 			j++;
// 		}
// 		if(b != 0)
// 		{
// 			arr[i][b] = '\0';    
// 			i++;
// 		}
// 		j++;
// 	}
// }