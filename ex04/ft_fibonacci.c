/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmekoudi <gmekoudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:04:14 by gmekoudi          #+#    #+#             */
/*   Updated: 2023/09/06 19:04:06 by gmekoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	a;

	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index > 1)
	{
		a = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (a);
	}
	else
		return (-1);
}
/*int main()
{
    int index;   
    printf("Digite o índice do elemento que você deseja calcular : ");
    scanf("%d", &index);

    int result = ft_fibonacci(index);

    printf("O %désimo elemento de Fibonacci é : %d\n", index, result);
    
    return 0;
}*/
