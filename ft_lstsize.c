#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int i;

    i = 0;
    while (lst)
    {
        i++;
        lst = lst->next;
    }
    return (i);
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
    printf("%d\n", ft_lstsize(begin));
}*/