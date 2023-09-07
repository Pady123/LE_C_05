/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmekoudi <gmekoudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:13:33 by gmekoudi          #+#    #+#             */
/*   Updated: 2023/09/06 17:29:59 by gmekoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*int main()
{
    int nb, power;

    printf("Entrez un numero : ");
    scanf("%d", &nb);

    printf("Entrez uma potência : ");
    scanf("%d", &power);

    int resultat = ft_iterative_power(nb, power);
    printf("%d^%d = %d\n", nb, power, resultat);

    return 0;
}*/