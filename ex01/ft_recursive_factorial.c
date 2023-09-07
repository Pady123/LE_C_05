/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmekoudi <gmekoudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:33:14 by gmekoudi          #+#    #+#             */
/*   Updated: 2023/09/06 18:56:56 by gmekoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	return (ft_recursive_factorial(nb - 1) * nb);
}
/*int main() 
{
    int nb;

    printf("Entrez un nombre : ");
    scanf("%d", &nb);

    int resultat = ft_recursive_factorial(nb);
	
    printf("O fatorial de %d é : %d\n", nb, resultat);
    
    return 0;
}*/
