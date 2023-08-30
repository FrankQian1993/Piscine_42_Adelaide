/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liqian <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:05:26 by liqian            #+#    #+#             */
/*   Updated: 2023/02/19 16:02:40 by liqian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define EVEN_MSG "I have an even number of arguments."
# define ODD_MSG "I have an odd number of arguments."
# define TRUE true
# define FALSE false
# define SUCCESS 0
# define EVEN(num) (num % 2 == 0)

typedef enum t_bool
{
	true = 1,
	false = 0
}t_bool;
#endif
