/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   synchro.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonieva <yonieva@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 16:04:01 by yonieva           #+#    #+#             */
/*   Updated: 2024/07/08 16:04:01 by yonieva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"
                
long    get_time(t_time time_code)
{
    struct  timeval tv;

    if (gettimeofday(&tv, NULL))
    {
        printf("\033[33m🚨Erreur fonction 'Get_time_of_day' !🚨\n");
        ft_error(6);
    }
    if (time_code == SECOND)
        return (tv.tv_sec + (tv.tv_usec / 1e6));
    else if (time_code == MILLISECOND)
        return ((tv.tv_sec * 1e3) + (tv.tv_usec / 1e3));
    else if (time_code == MICROSECOND)
        return ((tv.tv_sec * 1e6) + tv.tv_usec);
    else
    {
        printf("\033[33m🚨Mauvaise entree pour fonction 'Get_time' !🚨\n");
        ft_error(6);
    }
    return (1337);
}

void    wait_all_thread(t_data *table)
{
    while (!get_bool(&table->table_mutex, &table->all_thread_ready))
        ;
}

void    precise_usleep(long usec, t_data *table)
{
    long    start;
    long    elapsed;
    long    rem;

    start = get_time(MICROSECOND);
    while (get_time(MICROSECOND) - start < usec)
    {
        if (diner_finished(table))
            break;
        elapsed = get_time(MICROSECOND) - start;
        rem = usec - elapsed;

        if (rem > 1e3)
            usleep(usec / 2);
        else
        {
            while (get_time(MICROSECOND) - start < usec)
                ;
        }
    }
}

bool    all_thread_ready()
{
    
}