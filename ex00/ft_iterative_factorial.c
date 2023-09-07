/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmekoudi <gmekoudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:15:47 by gmekoudi          #+#    #+#             */
/*   Updated: 2023/09/06 17:58:08 by gmekoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	while (nb > 1)
		result *= nb--;
	return (result);
}
/*int main()
{
    int nb;

    printf ("Entrez un nombre: ");
    scanf ("%d", &nb);
    
    int resultat = ft_iterative_factorial(nb);
    printf("Le factoriel de %d est: %d\n", nb, resultat);
    return 0;
}*/
