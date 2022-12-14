/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scholarship_logtime.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 13:56:48 by hanmpark          #+#    #+#             */
/*   Updated: 2022/12/27 16:57:22 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCHOLARSHIP_LOGTIME_H
# define SCHOLARSHIP_LOGTIME_H
# include <stdlib.h>
# include <stdint.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 22
# endif

// GET_NEXT_LINE
char	*get_next_line(int fd);
size_t	ft_strlen(char *str);
void	ft_freeall(char *buf, char *line, char *stash);
void	*ft_calloc(size_t count, size_t size);
char	*ft_bufferjoin(char *s1, char *s2);
char	*ft_linetrim(char *str);
// UTILS
char	*month_is(char *src);
char	*day_is(char *src);
void	free_date(char **date);
void	ccl_timeleft(int *ttlog);
void	ft_putstr_fd(char *s, int fd);
char	*ft_substr(char *str, int len);
// PARSE_STATS
int		parse_stats(void);
// CALCULATE_LOG
int		*ccl_total_time(char **date, int *bnlog);
void	parse_calculation(char **date, char **bonus_date);
void	check_logtime(int *stdlog, int *ttlog);
int		*ccl_log(char **date);
// PARSE_MONTH
char	**parse_month(int month, int fd);
void	get_month(char **str, int month, int lastmonth, int fd);
char	*get_day(int month, int lastmonth, int fd);
// CURRENT_TIME
int		day_left(void);
int		current_month(void);
int		current_day(void);

#endif
