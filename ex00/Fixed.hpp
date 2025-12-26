/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 18:14:03 by mlouis            #+#    #+#             */
/*   Updated: 2025/12/26 18:27:03 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

class Fixed
{
	public:
		Fixed(void);
		Fixed(const Fixed&);
		Fixed& operator=(const Fixed&);
		~Fixed(void);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		int					_nb;
		static const int	_frac = 8;
};

#endif