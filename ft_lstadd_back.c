#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *list;

    list = *lst;
    if (list)
    {
        while (list->next)
            list = list->next;
        list->next = new;
    }
    else
        *lst = new;
}

/*#include <stdio.h>

int main(void)
{
    t_list elem1, elem2, elem3, *begin;

    t_list *new;
    new = ft_lstnew("NEW");

    begin = &elem1;
	elem1.next = &elem2;
	elem2.next = &elem3;
	elem3.next = 0;

	elem1.content = "toto";
	elem2.content = "tata";
	elem3.content = "tutu";
    ft_lstadd_back(&begin, new);
    printf("%s\n", ft_lstlast(begin)->content);
}*/