/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmekoudi <gmekoudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:53:51 by gmekoudi          #+#    #+#             */
/*   Updated: 2023/09/06 17:37:03 by gmekoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	n;

	n = nb;
	if (power > 1)
		return (n * ft_recursive_power(n, power - 1));
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (n);
}
/*int main()
{
    int nb;
    int power;

    printf("Entrez o numero : ");
    scanf("%d", &nb);

    printf("Entrez uma potência : ");
    scanf("%d", &power);

    int result = ft_recursive_power(nb, power);
    printf("%d ^ %d = %d\n", nb, power, result);

    return 0;
}*/