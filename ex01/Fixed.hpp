/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 18:14:03 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/26 15:38:21 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iosfwd>

class Fixed
{
	public:
		//* CONSTRUCTORS
		Fixed(void);
		Fixed(const int n);
		Fixed(const float n);
		Fixed(const Fixed& f);
		~Fixed(void);
		Fixed& operator=(const Fixed& f);

		//* SETTERS / GETTERS
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		
		//* CONVERTERS
		float	toFloat(void) const;
		int		toInt(void) const;
	
	private:
		int					_raw;
		static const int	_frac;
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);

#endif