/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: ihering- <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/28 13:58:32 by ihering-       #+#    #+#                */
/*   Updated: 2019/10/29 16:42:54 by ihering-      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*s2;
	size_t	i;

	i = 0;
	if (!(s2 = ft_strnew(n)))
		return (NULL);
	while (s1[i] && i < n)
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}

int		get_copy(char **line, char *content, char c)
{
	int		i;
	char	*temp;

	i = 0;
	temp = *line;
	while (content[i] != '\0' && content[i] != c)
	{
		i++;
	}
	if (!(*line = ft_strndup(content, i)))
		return (0);
	return (i);
}

t_list	*get_line(int fd, t_list **list)
{
	t_list	*temp;

	if (!list)
		return (NULL);
	temp = *list;
	while (temp)
	{
		if ((int)temp->content_size == fd)
			return (temp);
		temp = temp->next;
	}
	temp = ft_lstnew("", fd);
	ft_lstadd(list, temp);
	return (temp);
}

int		read_line(const int fd, char **content)
{
	int		my_read;
	char	*temp;
	char	buf[BUFF_SIZE + 1];

	while ((my_read = read(fd, buf, BUFF_SIZE)))
	{
		buf[my_read] = '\0';
		temp = *content;
		if (*content)
		{
			temp = *content;
			*content = ft_strjoin(*content, buf);
			free(temp);
			temp = NULL;
		}
		else
			*content = ft_strdup(buf);
		if (ft_strchr(buf, ENDL))
			break ;
	}
	return (my_read);
}

int		get_next_line(const int fd, char **line)
{
	char			buf[BUFF_SIZE + 1];
	size_t			result;
	static t_list	*list;
	t_list			*current;
	char			*temp;

	current = 0;
	if (fd < 0 || !line || (read(fd, buf, 0)) < 0 ||
		(!(current = get_line(fd, &list))))
		return (-1);
	temp = current->content;
	result = read_line(fd, &temp);
	current->content = temp;
	if (!result && !*temp)
		return (0);
	result = get_copy(line, current->content, ENDL);
	temp = current->content;
	if (temp[result] != '\0')
	{
		current->content = ft_strdup(&((current->content)[result + 1]));
		free(temp);
	}
	else
		temp[0] = '\0';
	return (1);
}
