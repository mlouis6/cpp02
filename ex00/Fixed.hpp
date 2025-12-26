/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 18:14:03 by mlouis            #+#    #+#             */
/*   Updated: 2025/12/26 18:42:24 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

class Fixed
{
	public:
		Fixed(void);
		Fixed(const Fixed& f);
		Fixed& operator=(const Fixed& f);
		~Fixed(void);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		int					_raw;
		static const int	_frac = 8;
};

#endif