/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mez-zahi <mez-zahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:30:11 by mez-zahi          #+#    #+#             */
/*   Updated: 2025/02/18 10:58:15 by mez-zahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// void mohcine()
// {
//     system("leaks ./push_swap");
// }

int main(int argc, char **argv)
{
    t_noeud *a;
    t_noeud *b;

    if (argc < 2)
        return (0);
    char    **args;

    int i = 0;
    a = NULL;
    b = NULL;
    if (argc < 2)
        return (0);
    else
    {
        while(argv[++i])
        {
            if(ft_vide_space(argv[i]) == 1)
            {
                    write(1,"Error\n",6);
                    exit(1);
            }
        }
    }
    args = concat_arg(argc, argv);//deja mprtecter les chose if (!args || !args[i])
    Parse_ArgEnd_Init_a(&a, &b, args);
    free_piles(a, b);
    return (0);
}