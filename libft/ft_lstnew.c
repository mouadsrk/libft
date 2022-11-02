#include"libft.h"



t_list *ft_lstnew(void *content)
{
    t_list *s;
    s = malloc (sizeof(t_list));
    s->content = content ;
    s->next = NULL;
    return s;
}

// int main()
// {
//     t_list *ls;

//     char a[] = "hello";
//     ls = ft_lstnew(a);
//     printf("%s", ls->content);
// }