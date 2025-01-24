/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ternary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hle-hena <hle-hena@students.42perpignan    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:12:45 by hle-hena          #+#    #+#             */
/*   Updated: 2024/11/18 17:59:44 by hle-hena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

long long int	ft_tern_int(int cnd, long long int val1, long long int val2)
{
	if (cnd)
		return (val1);
	return (val2);
}

char	*ft_tern_str(int cnd, char *ret1, char *ret2)
{
	if (cnd)
		return (ret1);
	return (ret2);
}
