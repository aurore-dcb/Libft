#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    if (!lst)
        return (NULL);
    while(lst->next)
        lst = lst->next;
    return (lst);
}

/*#include <stdio.h>

int main(void)
{
    t_list elem1, elem2, elem3, *begin;

    begin = &elem1;
	elem1.next = &elem2;
	elem2.next = &elem3;
	elem3.next = 0;

	elem1.content = "toto";
	elem2.content = "tata";
	elem3.content = "tutu";
    printf("%s\n", ft_lstlast(begin)->content);
}*/