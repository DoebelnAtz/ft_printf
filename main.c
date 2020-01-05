/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadlercr <aadlercr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 15:47:26 by aadlercr          #+#    #+#             */
/*   Updated: 2019/11/21 16:25:19 by aadlercr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>


int main(int argc, char const *argv[])
{
	int i;
	void *ptr;
	i = 5;
	ptr = &i;
	int ret1;
	int ret2;
	if (argc == 1)
	{
		ft_printf("\n|%|020s|", "Hello");
		ft_printf("\n|%|20s|", "Hello");
		ft_printf("\n|%*.*s|", 20, 3, "Hello");
		printf("\n|%*.*s|", 20, 3, "Hello");
	}
	if (argc == 5)
	{

		ft_printf("\n\n          ~@255;16;3;  ~@255;16;3;  ~@255;16;3;  ~@255;16;3;  ~@255;16;3;  ~@255;16;3;  ~-");
		ft_printf("\n        ~@255;16;3;  ~@255;16;3;  ~@255;16;3;  ~@255;16;3;  ~@255;16;3;  ~@255;16;3;  ~@255;16;3;  ~@255;16;3;  ~@255;16;3;  ~-");
		ft_printf("\n        ~@153;101;52;  ~@153;101;52;  ~@153;101;52;  ~@252;182;101;  ~@252;182;101;  ~@1;1;1;  ~@252;182;101;  ~-");
		ft_printf("\n      ~@153;101;52;  ~@252;182;101;  ~@153;101;52;  ~@252;182;101;  ~@252;182;101;  ~@252;182;101;  ~@1;1;1;  ~@252;182;101;  ~@252;182;101;  ~@252;182;101;  ~-");
		ft_printf("\n      ~@153;101;52;  ~@252;182;101;  ~@153;101;52;  ~@153;101;52;  ~@252;182;101;  ~@252;182;101;  ~@252;182;101;  ~@1;1;1;  ~@252;182;101;  ~@252;182;101;  ~@252;182;101;  ~-");
		ft_printf("\n        ~@153;101;52;  ~@252;182;101;  ~@252;182;101;  ~@252;182;101;  ~@252;182;101;  ~@1;1;1;  ~@1;1;1;  ~@1;1;1;  ~@1;1;1;  ~-");
		ft_printf("\n          ~@252;182;101;  ~@252;182;101;  ~@252;182;101;  ~@252;182;101;  ~@252;182;101;  ~@252;182;101;  ~-");
		ft_printf("\n        ~@255;16;3;  ~@255;16;3;  ~@52;42;245;  ~@255;16;3;  ~@255;16;3;  ~@52;42;245;  ~@255;16;3;  ~@255;16;3;  ~-        ~-");
		ft_printf("\n      ~@255;16;3;  ~@255;16;3;  ~@255;16;3;  ~@52;42;245;  ~@255;16;3;  ~@255;16;3;  ~@52;42;245;  ~@255;16;3;  ~@255;16;3;  ~@255;16;3;  ~-");
		ft_printf("\n    ~@255;16;3;  ~@255;16;3;  ~@255;16;3;  ~@255;16;3;  ~@52;42;245;  ~@52;42;245;  ~@52;42;245;  ~@52;42;245;  ~@255;16;3;  ~@255;16;3;  ~@255;16;3;  ~@255;16;3;  ~-");
		ft_printf("\n    ~@255;16;3;  ~@255;16;3;  ~@255;16;3;  ~@255;16;3;  ~@52;42;245;  ~@52;42;245;  ~@52;42;245;  ~@52;42;245;  ~@255;16;3;  ~@255;16;3;  ~@255;16;3;  ~@255;16;3;  ~-");
		ft_printf("\n    ~@252;182;101;  ~@252;182;101;  ~@255;16;3;  ~@52;42;245;  ~@252;251;3;  ~@52;42;245;  ~@52;42;245;  ~@252;251;3;  ~@52;42;245;  ~@255;16;3;  ~@252;182;101;  ~@252;182;101;  ~-");
		ft_printf("\n    ~@252;182;101;  ~@252;182;101;  ~@252;182;101;  ~@52;42;245;  ~@52;42;245;  ~@52;42;245;  ~@52;42;245;  ~@52;42;245;  ~@52;42;245;  ~@252;182;101;  ~@252;182;101;  ~@252;182;101;  ~-");
		ft_printf("\n    ~@252;182;101;  ~@252;182;101;  ~@52;42;245;  ~@52;42;245;  ~@52;42;245;  ~@52;42;245;  ~@52;42;245;  ~@52;42;245;  ~@52;42;245;  ~@52;42;245;  ~@252;182;101;  ~@252;182;101;  ~-");
		ft_printf("\n        ~@52;42;245;  ~@52;42;245;  ~@52;42;245;  ~-    ~@52;42;245;  ~@52;42;245;  ~@52;42;245;  ~-        ~-");
		ft_printf("\n      ~@158;66;9;  ~@158;66;9;  ~@158;66;9;  ~-        ~@158;66;9;  ~@158;66;9;  ~@158;66;9;  ~-      ~-");
		ft_printf("\n    ~@158;66;9;  ~@158;66;9;  ~@158;66;9;  ~@158;66;9;  ~-        ~@158;66;9;  ~@158;66;9;  ~@158;66;9;  ~@158;66;9;  ~-\n\n\n");
	}
	if (argc == 2)
	{
		((ret1 = printf("\n|unicode a?|")) == (ret2 = ft_printf("\nft: 0|%ls %lc?| ", L"ỰṄΐ𝐂𝐎𝞭𝙀", L'ᴁ') - 5)) ? 0 : printf("Invalid return 0: ft: %d vs %d", ret1, ret2);
	}
	if (argc == 3)
	{
		((ret1 = printf("\n|CAN IT WRITE BASIC ?|")) == (ret2 = ft_printf("\nft: 0|CAN IT WRITE BASIC ?| ") - 6)) ? 0 : printf("Invalid return 0: ft: %d vs %d", ret1, ret2);
		
		((ret1 = printf("\n|CAN IT WRITE ỰṄΐ𝐂𝐎𝞭𝙀|")) == (ret2 = ft_printf("\nft: 1|CAN IT WRITE ỰṄΐ𝐂𝐎𝞭𝙀| ") - 6)) ? 0 : printf("Invalid return 1 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%20s|", "HELLO")) == (ret2 = ft_printf("\nft: 2|%20s| ", "HELLO") - 6)) ? 0 : printf("Invalid return 2 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%20.7s|", "HELLO")) == (ret2 = ft_printf("\nft: 3|%20.7s| ", "HELLO") - 6)) ? 0 : printf("Invalid return 3 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%5s%-5s%.3s%7s|", "HELLO", "HELLO", "HELLO", "HELLO")) == (ret2 = ft_printf("\nft: 4|%5s%-5s%.3s%7s| ", "HELLO", "HELLO", "HELLO", "HELLO") - 6)) ? 0 : printf("Invalid return 4 ft: %d vs %d", ret1, ret2);
		
		((ret1 = printf("\n|%20.2s|", "HELLO")) == (ret2 = ft_printf("\nft: 5|%20.2s| ", "HELLO") - 6)) ? 0 : printf("Invalid return 5 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%-20.2s|", "HELLO")) == (ret2 = ft_printf("\nft: 6|%-20.2s| ", "HELLO") - 6)) ? 0 : printf("Invalid return 6 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%20.1f|", 1.1)) == (ret2 = ft_printf("\nft: 7|%20.1f| ", 1.1) - 6)) ? 0 : printf("Invalid return 7 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%20.2s|", "HELLO")) == (ret2 = ft_printf("\nft: 8|%20.2s| ", "HELLO") - 6)) ? 0 : printf("Invalid return 8 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%20.5f|", 10005.10005)) == (ret2 = ft_printf("\nft: 9|%20.5f| ", 10005.10005) - 6)) ? 0 : printf("Invalid return 9 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%-20.5f|", -10005.10005)) == (ret2 = ft_printf("\nft:10|%-20.5f| ", -10005.10005) - 6)) ? 0 : printf("Invalid return 10 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%0#20.5x|", 12345)) == (ret2 = ft_printf("\nft:11|%0#20.5x| ", 12345) - 6)) ? 0 : printf("Invalid return 11 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%-20.15x|", -12345)) == (ret2 = ft_printf("\nft:12|%-20.15x| ", -12345) - 6)) ? 0 : printf("Invalid return 12 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%#-20.15X|", -12345)) == (ret2 = ft_printf("\nft:13|%#-20.15X| ", -12345) - 6)) ? 0 : printf("Invalid return 13 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%#-20.15o|", 12345)) == (ret2 = ft_printf("\nft:14|%#-20.15o| ", 12345) - 6)) ? 0 : printf("Invalid return 14 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%#20o|", -2147483647)) == (ret2 = ft_printf("\nft:15|%#20o| ", -2147483647) - 6)) ? 0 : printf("Invalid return 15 ft: %d vs %d", ret1, ret2);	

		((ret1 = printf("\n|% -13d % 6.5d|", -2147483647, -15)) == (ret2 = ft_printf("\nft:16|% -13d % 6.5d| ", -2147483647, -15) - 6)) ? 0 : printf("Invalid return 16 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%20p|", ptr)) == (ret2 = ft_printf("\nft:17|%20p| ", ptr) - 6)) ? 0 : printf("Invalid return 17 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%20%|")) == (ret2 = ft_printf("\nft:18|%20%| ") - 6)) ? 0 : printf("Invalid return 18 ft: %d vs %d", ret1, ret2);		

		((ret1 = printf("\n|%#-20.15x|", 0)) == (ret2 = ft_printf("\nft:19|%#-20.15x| ", 0) - 6)) ? 0 : printf("Invalid return 19 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%#20o|", 1234)) == (ret2 = ft_printf("\nft:20|%#20o| ", 1234) - 6)) ? 0 : printf("Invalid return 20 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%#20.6o|", 1234)) == (ret2 = ft_printf("\nft:21|%#20.6o| ", 1234) - 6)) ? 0 : printf("Invalid return 21 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%#20.5o|", 1234)) == (ret2 = ft_printf("\nft:22|%#20.5o| ", 1234) - 6)) ? 0 : printf("Invalid return 22 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%20.5f|", 100105.10105)) == (ret2 = ft_printf("\nft:23|%20.5f| ", 100105.10105) - 6)) ? 0 : printf("Invalid return 23 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%-20.11f|", -10005.1012211005)) == (ret2 = ft_printf("\nft:24|%-20.11f| ", -10005.1012211005) - 6)) ? 0 : printf("Invalid return 24 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%-20.1f|", -10005.1012211005)) == (ret2 = ft_printf("\nft:25|%-20.1f| ", -10005.1012211005) - 6)) ? 0 : printf("Invalid return 25 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%-20.0f|", -10005.1012211005)) == (ret2 = ft_printf("\nft:26|%-20.0f| ", -10005.1012211005) - 6)) ? 0 : printf("Invalid return 26 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%-20.f|", 10005.1012211005)) == (ret2 = ft_printf("\nft:27|%-20.f| ", 10005.1012211005) - 6)) ? 0 : printf("Invalid return 27 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%-20f|", 10005.1012211005)) == (ret2 = ft_printf("\nft:28|%-20f| ", 10005.1012211005) - 6)) ? 0 : printf("Invalid return 28 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%20.0d|", 0)) == (ret2 = ft_printf("\nft:29|%20.0d| ", 0) - 6)) ? 0 : printf("Invalid return 29 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%20ld|", 9223372036854775807)) == (ret2 = ft_printf("\nft:30|%20ld| ", 9223372036854775807) - 6)) ? 0 : printf("Invalid return 30 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%20ld|", 9223372036854775807)) == (ret2 = ft_printf("\nft:31|%20ld| ", 9223372036854775807) - 6)) ? 0 : printf("Invalid return 31 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%020i|", -71)) == (ret2 = ft_printf("\nft:32|%020i| ", -71) - 6)) ? 0 : printf("Invalid return 32 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%20hd|", 32769)) == (ret2 = ft_printf("\nft:33|%20hd| ", 32769) - 6)) ? 0 : printf("Invalid return 33 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%00+20.4d|", 0)) == (ret2 = ft_printf("\nft:34|%00+20.4d| ", 0) - 6)) ? 0 : printf("Invalid return 34 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|% 05.7d% 4.9hi !|", 24, (short)-2345)) == (ret2 = ft_printf("\nft:35|% 05.7d% 4.9hi !| ", 24, (short)-2345) - 6)) ? 0 : printf("Invalid return 35 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%20.0u|", 0)) == (ret2 = ft_printf("\nft:36|%20.0u| ", 0) - 6)) ? 0 : printf("Invalid return 36 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%20.0x|", 0)) == (ret2 = ft_printf("\nft:37|%20.0x| ", 0) - 6)) ? 0 : printf("Invalid return 37 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%20.0o|", 0)) == (ret2 = ft_printf("\nft:38|%20.0o| ", 0) - 6)) ? 0 : printf("Invalid return 38 ft: %d vs %d", ret1, ret2);		

		((ret1 = printf("\n|%----12p %5p|", ptr, NULL)) == (ret2 = ft_printf("\nft:39|%----12p %5p| ", ptr, NULL) - 6)) ? 0 : printf("Invalid return 39 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%#5.3x %#014X|", 0x25, 0)) == (ret2 = ft_printf("\nft:40|%#5.3x %#014X| ", 0x25, 0) - 6)) ? 0 : printf("Invalid return 40 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%#08.5x %#011X|", 0x25, 1234)) == (ret2 = ft_printf("\nft:41|%#08.5x %#011X| ", 0x25, 1234) - 6)) ? 0 : printf("Invalid return 41 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%-8s %11s|", NULL, NULL)) == (ret2 = ft_printf("\nft:42|%-8s %11s| ", NULL, NULL) - 6)) ? 0 : printf("Invalid return 42 ft: %d vs %d", ret1, ret2);
		
		((ret1 = printf("\n|%-8.2s %11s|", NULL, NULL)) == (ret2 = ft_printf("\nft:43|%-8.2s %11s| ", NULL, NULL) - 6)) ? 0 : printf("Invalid return 43 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%#08.0o|%#011o|", 0, 0)) == (ret2 = ft_printf("\nft:44|%#08.0o|%#011o| ", 0, 0) - 6)) ? 0 : printf("Invalid return 44 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%#08.0x|%#011x|", 0, 0)) == (ret2 = ft_printf("\nft:45|%#08.0x|%#011x| ", 0, 0) - 6)) ? 0 : printf("Invalid return 45 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%#08.0X|%011.0X|", 0, 0)) == (ret2 = ft_printf("\nft:46|%#08.0X|%011.0X| ", 0, 0) - 6)) ? 0 : printf("Invalid return 46 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%#08.1o|%#011.2o|", 2, 0)) == (ret2 = ft_printf("\nft:47|%#08.1o|%#011.2o| ", 2, 0) - 6)) ? 0 : printf("Invalid return 47 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%+20.5f|", 0.0)) == (ret2 = ft_printf("\nft:48|%+20.5f| ", 0.0) - 6)) ? 0 : printf("Invalid return 48 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%+20.5f|", 1.1)) == (ret2 = ft_printf("\nft:49|%+20.5f| ", 1.1) - 6)) ? 0 : printf("Invalid return 49 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%#020.5f|", 0.1)) == (ret2 = ft_printf("\nft:50|%#020.5f| ", 0.1) - 6)) ? 0 : printf("Invalid return 50 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%020.5f|", 5.1)) == (ret2 = ft_printf("\nft:51|%020.5f| ", 5.1) - 6)) ? 0 : printf("Invalid return 51 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%-+20.5f|", 10005.10005)) == (ret2 = ft_printf("\nft:52|%-+20.5f| ", 10005.10005) - 6)) ? 0 : printf("Invalid return 52 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%+-#20f|", 0.0)) == (ret2 = ft_printf("\nft:53|%+-#20f| ", 0.0) - 6)) ? 0 : printf("Invalid return 53 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%+-#20.0f|", 0.0)) == (ret2 = ft_printf("\nft:54|%+-#20.0f| ", 0.0) - 6)) ? 0 : printf("Invalid return 54 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%+-20d|", 0)) == (ret2 = ft_printf("\nft:55|%+-20d| ", 0) - 6)) ? 0 : printf("Invalid return 55 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%+020.6d|", 1)) == (ret2 = ft_printf("\nft:56|%+020.6d| ", 1) - 6)) ? 0 : printf("Invalid return 56 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%020u|", 0)) == (ret2 = ft_printf("\nft:57|%020u| ", 0) - 6)) ? 0 : printf("Invalid return 57 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%20u|", 0)) == (ret2 = ft_printf("\nft:58|%20u| ", 0) - 6)) ? 0 : printf("Invalid return 58 ft: %d vs %d", ret1, ret2);
		
		((ret1 = printf("\n|%#5x|%8.d|%5.0d|", 0, 0 ,0)) == (ret2 = ft_printf("\nft:59|%#5x|%8.d|%5.0d| ", 0, 0 ,0) - 6)) ? 0 : printf("Invalid return 59 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%5.1u|%8p|%5.p|", 0, NULL, NULL)) == (ret2 = ft_printf("\nft:60|%5.1u|%8p|%5.p| ", 0, NULL, NULL) - 6)) ? 0 : printf("Invalid return 60 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%#05.13X|%4.1x|", 2411, 0)) == (ret2 = ft_printf("\nft:61|%#05.13X|%4.1x| ", 2411, 0) - 6)) ? 0 : printf("Invalid return 61 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%X|%x|%3u|%ld|", 111111, 111111, 51, (long)-125)) == (ret2 = ft_printf("\nft:62|%X|%x|%3u|%ld| ", 111111, 111111, 51, (long)-125) - 6)) ? 0 : printf("Invalid return 62 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%c%c%c%c%c%c%c%c%c%c%c|%3.c|%4c|", 'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', 51, 55)) == (ret2 = ft_printf("%c%c%c:%o|%c%c%c%c%c%c%c%c%c%c%c|%3.c|%4c| ", '\n', 'f', 't', 51, 'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', 51, 55) - 6)) ? 0 : printf("Invalid return 63 ft: %d vs %d", ret1, ret2);
	
		((ret1 = printf("\n|%-+ 6.4d|% 7d|% 5.3d|", 5, 5 , -5)) == (ret2 = ft_printf("\nft:64|%+ -6.4d|% 7d|% 5.3d| ", 5, 5 , -5) - 6)) ? 0 : printf("Invalid return 64 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%#10o|%#9x|", 0, 0)) == (ret2 = ft_printf("\nft:65|%#10o|%#9x| ", 0, 0) - 6)) ? 0 : printf("Invalid return 65 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%.14o|%#5o|", 12, 1)) == (ret2 = ft_printf("\nft:66|%.14o|%#5o| ", 12, 1) - 6)) ? 0 : printf("Invalid return 66 ft: %d vs %d", ret1, ret2);
		
		((ret1 = printf("\n|%06.2o|%#4o|%#-8.3o|", 0, 0, 0)) == (ret2 = ft_printf("\nft:67|%06.2o|%#4o|%#-8.3o| ", 0, 0, 0) - 6)) ? 0 : printf("Invalid return 67 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%#06.2x|%#04.0x|%-7.3X|", 1234, 1234, 1234)) == (ret2 = ft_printf("\nft:68|%#06.2x|%#04.0x|%-7.3X| ", 1234, 1234, 1234) - 6)) ? 0 : printf("Invalid return 68 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%#07o|%#4o|%#-6.3o|", 1234, 1234, 1234)) == (ret2 = ft_printf("\nft:69|%#07o|%#4o|%#-6.3o| ", 1234, 1234, 1234) - 6)) ? 0 : printf("Invalid return 69 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%#6o|%#6x|%#6X|", 1234, 1234, 1234)) == (ret2 = ft_printf("\nft:70|%#6o|%#6x|%#6X| ", 1234, 1234, 1234) - 6)) ? 0 : printf("Invalid return 70 ft: %d vs %d", ret1, ret2);

		((ret1 = printf("\n|%#-6o|%-6x|%#-6X|", 1234, 1234, 1234)) == (ret2 = ft_printf("\nft:71|%#-6o|%-6x|%#-6X| ", 1234, 1234, 1234) - 6)) ? 0 : printf("Invalid return 71 ft: %d vs %d", ret1, ret2);
	}
	return 0;
} 