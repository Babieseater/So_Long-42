# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/07 14:38:45 by smayrand          #+#    #+#              #
#    Updated: 2022/07/26 13:53:39 by smayrand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN = '\033[32m'
NONE = '\033[0m'

NAME = so_long

CC = gcc
/* CFLAGS = -Wall -Werror -Wextra
MLXFLAGS =  -lmlx -framework OpenGL -framework AppKit
AR = ar -rcs

RM = rm -f

SRCS = so_long.c\
./data/key_input.c\
./data/exit.c\
./data/game_init.c\
./data/map_read.c\
./gnl/get_next_line_bonus.c\
./gnl/get_next_line_utils_bonus.c

LIBX_A = ./mlx/libmlx.a
PRINTF_A = ./printf/libftprintf.a
#GNL_A = ./gnl/get_next_line_bonus.a
OBJS = $(SRCS:.c=.o)


all: aprintf $(NAME)
	@echo $(GREEN) "FULLY COMPILED" $(NONE)

play: aprintf $(NAME)
	@echo $(GREEN) "FULLY COMPILED" $(NONE)
	@(./so_long maps/inv_map.ber)
	
aprintf:
	@(cd ./printf && make all)
	@echo $(GREEN) "PRINTF COMPILED" $(NONE)
	@(cd ..)

mlx:
	@(cd mlx && make all)
	@echo $(GREEN) "MINILIBX COMPILED" $(NONE)
	@(cd ..)
	
printfclean:
	@(cd ./printf && make fclean)
	@echo $(GREEN) "PRINTF CLEANED" $(NONE)
	@(cd ..)

mlxclean:
	@(cd mlx && make clean)
	@echo $(GREEN) "MINILIBX CLEANED" $(NONE)
	@(cd ..)


$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) $(MLXFLAGS) $(OBJS) $(LIBX_A) $(PRINTF_A) $(GNL_A) -o $(NAME)
	
clean:
	$(RM) $(OBJS)

fclean: clean printfclean
	$(RM) $(NAME)
	@echo $(GREEN) "FULLY CLEANED" $(NONE)

re: fclean all

sexy:
	@echo "    ....... .................::::::^^^^^~~~!!!!77777??JJJJYYYY5555PPPPGGGGBBBB#######&&&&&&&&&&&&&&&##BG5YJJJJ?7!!~^^^:::::::::::::::::::::::::..................  ...........................................:::....:::^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ 	 "
	@echo ".........................................................::::::^^^^^~~~~~!!!!7777???JJJJJYYYYY55YYYYYYYYYJJJ?7!!!~~~^^^::::::::::::::::::::::::::....................  ..........................................:::::....:::^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"
	@echo ".....................::::::::::::::::::..............................................::::::::^^^^^^^^^^^^^^^::::::::::::::::::::::::::::::::::::....................   ..........................................::..:......:::^^~^^^^^^^^^^^^^^^^^^^^^^^^"
	@echo "...........:::..:::::::::::::::::::::::::::::::::::::::::::::::::::::.......................  ..    .  ...............................::::::::......................  .........................................::..........::::^75P5555YYYJJJ????777!!!!~~"
	@echo ".........::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::....................                           .................................  ...........................................::....:....::.::7#&&#&&&&&&&&&&&&&####BBGG"
	@echo " .......::::::::::::::::::::::::::::^^^^^^^^^^^^^^^^^^^^^^^^^^^^:::::::::::::::::::::::::............................                       .......................  ........................................:::.....:::...:::::^J#&&&&&&&&@@@@@@@@@@@@@@@"
	@echo " .........:::::.:::::::::::::::::^^:::^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^::::::::::::::::::::.........................                      ........................  .......................................:::.............:::::^75PGGGGBBBBBB######&&&&&"
	@echo " .........:::::.:::::::::::::::::::::^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^:::...::::::::::::::............................                .........................  ......................................:::::::..........:::::::~~~~~!!!777777??JJJYYYY"
	@echo " ..........::..::::::::::::::::::::::::::^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^::::......::::::::::::............................    .........  .........................   .........................................::::...........::::::::.............::::::::"
	@echo "  ..............::::::::::::::::::::::::::^^^^^^^^^^^^^^^^^^^^^^^^^^^^^:::::... ....::::::::::....................................................................  ............................................::..:........:::::::::::::................"
	@echo "    .....................::::::::::::::::::::::::::::::::^^^^:::::::::::::::...   ....::::::::....................................................................  ....................................................::...:::::::^^::::::::::::::::::::"
	@echo "... ......................::::::::::::::::::::::::::::::::::::::::::::::::::...     ....::::::....................................................................  ........................................................::::::::^^^^^^^^^:::::::::::::"
	@echo "... .....................:::::::::::::::::::::::::::::::::::::::::::::::::::.............:::::.................................................................... ................................................::........::::::::^^^^^^^^^^^^^^:::::::"
	@echo "........................::::::::::::::::::::::::::::::::::::::::::::::::::::.............:::.....................................................................  ..............................................::...........:::::::^^^^^^^^^^^^^^^^^::::"
	@echo "..    .. ..............:::::::::::::::::::::::::::::::::::::::::::::::::::::..........::::::...............................::::^^^^^^~~~~~~~~^^^::................ .............................................::::............:::::^^^^^^^^^^^^^^^^^^:::"
	@echo "..       ................::::::::::::::::::::::::::::::::::::::::::::::::::..........::::::...........................:^^^~^^~^~^^^^^^~~^~~~~~~~~~~~^::........... ..............................................:....:::.......:::::^^^^^^^^^^^^^^^^^::::"
	@echo "..      ..................:..::::::::::::::::::::::::::::::::::::::::::::::.......:::::...........................:^^~~~~^^^^^^^^^^^^^^^^^^^^^^^^~~~~~~~~^:......  .................................................:........::::::::^::^^^^^^^^^^^^^:::::"
	@echo ".. ...........:::::::::::.....::::::::::::::::::::::::::::::::::::::::::::........:::::.......................::^^~^^^^^^^^^^^^^:^^^^:^:^:^:^^^^^^^^^^~^~~~~^::..  ................................................:::.......:::::::::::::^^^^^^^^::::::::"
	@echo ".............:::::::::^^:::::..::.:....::::::::::::::::::::::::::::::::::::....::::.........................:^~~^^^^^^^^^^^^^::::::::::::^::::::::^:^^^^^^~~~~~^:.  .........................................................:::::::::..::::::::::::::::::"
	@echo "...............::::::^^^^^^^:::........:::::::::::::::::::::::::::::::::::::::...........................:^^~^^^^^^^^^^^^^^^:::::::::::::::::::::::::::^^^^^^^^~~~^:..........................................................::::::::..::::::::::::::::::"
	@echo ".................:::::^^^^^^^^::...........:::::::::::::::::::::::::::::::::::.........................:^^~^^^^^^^^^^^^^^^^^^^^::::::::::::::::::::::::::::^^^^^^~~~~^.....................................................:..::::::::..::::::::::::::::::"
	@echo "...................::::::^^^^^^^::..................::::::::::::::::::...............................:^^~^^^^^^^^^^^^:^::::::::::^:^:^^^^:::^:::::::::::::::^^^^^^^^~~^^:.....................................................:::::::...::::::::::::::::::"
	@echo "....................:::::::^^^^^^::.................................................................^^~~^^^^^^:::::^^^:::::::::::::::::::::::::^^^^:::::::::::::^^^^^^^^^^:..........................................:......:::::::::...::::::::::::::::::"
	@echo "......................::::::^^^^^^::..............................................................:^~^^^^^^^^^^^^^^^^^^:^::::^::::::::::::::..:.::::::::::::::::::^:^^^^^^^:...............................................:::::::::....::::::::::::::::::"
	@echo "........................:::::^^^^^^::............................................................:~~^^^^^^^^^^^^^:^^::::::::::::::::::::::::::::.:....::::::::::::::::^^^^::::.............................................::::::::.. ..::::::::::::::::::"
	@echo "............ ..............::::^^^^::...........  ..............................................^~^^^^^^^^^^^^^:^:^:::^:::^^^^:^::::::::::::::::::::::::.:.::::::::::::^^^^:::::..........................................::::::::..  ..::::::::::::::::::"
	@echo " .........    ..............::::^^^:::.......     ............................................:^^^^^^^^^^^^^^^^^:^^^:^^:^^::::^^:::^:::::::::::::::::::::::.:.::::^:::::^^^^:::^:..........................................::::::..  ...::::::::::::::::::"
	@echo ".........      ..............:::::^:::....        ...........................................:^^^^^^~^^^^^^:^^:::::::::::::::::::::::::::::::::::::::::::::::::::::^:::::^^^^:::::.........................................::::..    ...::::::::::::::::::"
	@echo ".........      ..............:::::^::..            ........................................:^^^~^~~^^~^^::::..............................::..::::::::::::.:::::::::::^:^:^^^^^::::...........................:::.........:::::..    ...::::::::::::::::::"
	@echo ".........       ..............::::^::..               ....................................:^^^~^^^~^^::........................................::::::::::.:::::::::::::^^^^^^^^:::^:......................................::^^::.     ..::::::::::::::::::"
	@echo "                ..............:::::::.                     ..............................:^^~^~~~^^::..... .....:::::::::::::::::::::...............:::::::::.:::::::::::^^^^^^^:::^:::::::...............................:::^^:.     ..::::::::::::::::::"
	@echo "..               ..............:::::..                   ................................:~^^~~^^::.... ...:::::::::::::::::::::::::::::::::............::::::.::::::::::::^^^^^:::^:::::::....:.........................::::^^:..    ..::::::::::::::::::"
	@echo "                 .............:::::..                  ..................................^^~~^^::...  ...::::^^^^^^^^^^^^^^:::::::::::::::::::::...........:::::::::::::::::^^^^^::^^:::::...............................::::^^:..   ...::::::::::::::::::"
	@echo "               ...............::::..                 ...................................:~~~^::....  ..:::^^^^~~~~^^^^^^^^^^^::::::::::::::::::::::..........:::::::::::::::::^~^::^:.:::................................::::^^:..   ....:::::::::::::::::"
	@echo "             .................:::..                .....................................:~~^:....  ...::^:::::::::^^^^^^^^^^^^^^::::::::::::::::::::::...........::::::::::::::^~::^.....................................::::^^:..   ...::::::::::::::::::"
	@echo "..            ....................                 ....................................:^~^:....  ..:::::..............::::::::::^^:::^::::::::::::::::::........::::::::::::^^:^^:. ...................................:::::^^:..   ...::::::::::::::::::"
	@echo ".                  ... ........                   .....................................^~^:.... ..:::::..........    ......::::::::::::::::::::::::::::::::.. .....:::::::::::^^^^.   ..................................:::::^::...  ...::::::::::::::::::"
	@echo "                                                  ....................................:^^:.... ..::::::......................:::::::::.............:::::::::.. .....:::::::::::^::.    ................................:::::^:::........::::::::::::::::::"
	@echo "                                                  ....................................:^:...   ::^::::....   .        .......:::::::...........     ......:::..  ....:::^::::^^^^::     ..............................::::::::::::......::::::::::::::::::"
	@echo "                                                  ....................................^:...   ::^^^:::.........     ..  .....:::::::........................::..  ....:::::::^^^^^:.   .......................::::::::::::::::::::::..::::::::::::::::::::"
	@echo "                                                  ...................................:^:..   .^^^^^^:::::.:::................::::::.....      ................:..   ..:::::::::^^^^. ............    ........:::::::::::::::::::::::::::::::::::::::::::::"
	@echo "                                                  ...................................:^...   :^^^^^^^^^^^::.................:^:::::.....    ...      .........::..   ...:::^:::^^^:................  ....:::::::::::::::::::::::::::::::::::::::::::::::::"
	@echo "                                                  ...................................::...  .:^^^^^^^^^~^^^:::::.........::^~^^:::::...........         .......::..  ....::^:::^^^:......................:::::::::::::::::::::::::::::::::::::::::::::::::"
	@echo "                                                  ...................................::...  .:^^^^^^^^~~~~~~^^^^::::::::::^~~^^^::::..................   .....::::..  ....::^^:^^^.......................::::::::::::::::::.........::::::::::::::::::::::"
	@echo "                                                  ...................................::..   .:^^^~^~~~~~~!!!~~^^^^^^^^^^^^^~~^^:::::::::......................:::::.   ...:::^:^^:.....................::...::::::::::::::.............:::::::::::::::::::"
	@echo "                                                  ...................................::..   :^^~^~~~~~~~~~~~~^^^^^^^^^^^^~~!~^^:::::::::::::................::::::::.  ...:::^^^:..........................::::::::::::::::....     ...:::::::::::::::::::"
	@echo "                                                 ....................................::.....:^^^^^~~~^^^^^^^^^^^:::::^^^~~!~^^^:::::::::::::::::::::::::::::::::::::.   ...::^^^:..........................:::::::::::::::::....    ...:::::::::::::::::::"
	@echo "                       ................................................................. .::^^^^^^^^^^^^^^^^:::::.:^~~^^~~~~^^^:::::.:::::::::::::::::::::::::::::::.    ..::^^^:.......................::::::::::::::::::::::....  ...:::::::::::::::::::"
	@echo "                    ....................................................................  :^^^^^^^^:^^::::::::....:^^^^^^~^^^^^:::::::..::::::::::^^^^^^^^::::::::::.    ..::^^^...............................:::::::::::::::::.......:::::::::::::::::::"
	@echo "                   .................................................................... .^~^^^^^^:::::::::::...::::..:::^^^^^^::::::::....:::::::^^^^^^^^^^^:::^^^::.     ..::^:..................................::::::::::::::::.....:::::::::::::::::::"
	@echo "                .......................................................................:^^:.:^^^:::::::::::::::::::::.....::.::.............:::::^:^^^^^^^^^^^::^^:.     ...:^:.................               ...:::::::::::::::::.....::::::::::::::::::"
	@echo "               .............................................................................:^^^::::::::::::::::::::::...............:::....:::::::::::^^^^^^::::::..    ...:^:..................              ...:::::::::::::::::......:::::::::::::::::"
	@echo "             ...............................................................................:^^^^:::::::::::..:::^^^::::.......::::::::::::..::::::::::::::^::::::::..   ...::......................           ...:::::::::::::::::.........::::::::::::::"
	@echo "            ................................................................................:^^^^^^^^::::::....:::::::::::::::::::::::::.::::..::::::::::::::::::::..    ..:::.......................         ....:::::::::::::::::..........:::::::::::::"
	@echo "            .................................................................................::^^^^^^^^^:::...................::::::::.....::::::::::::::::::::::::..    ..::..........................       ....:::::::::::::::::...........::::::::::::"
	@echo "            .................................................................................::::^^^^^^^:::::::::::::........................::::::::..:::::::::::.....  .::............................      ....:::::::::::::::::.............::::::::::"
	@echo "           ...................................................................................::::^^^^^^^:::^^^:::::.........................::::::..:::::::::::::. .....:................................    ....:::::::::::::::::..............:::::::::"
	@echo "           ...................................................................................:::::::::^^^^^^^^^^::::.............:::::::...:::::::.::::::::::::.::. .:..............................::...... ....:::::::::::::::::.................::::::"
	@echo "         .....................................................................................:::::::::^^^^^^^^^^::::::......::::::::::::::::::::::::::::::::::...:::::...........................................:::::::::::::::::..................:::::"
	@echo ".............................................................................................:^::::::::^^^^^^^^^^^^^::::::::::::::::::::::::::::::::::::::::::....................................................:::::::::::::::::....................:::"
	@echo "............................................... .............................................^^:::.:::::^^^^^^^^^^^^^^^:::::::::::::::::::::::::::::::::::::..............................................:.......:::::::::::::::::......................:"
	@echo "............................................    ............................................:^^^::....::::^^^^^^^^^^^^^^::::::::::::::::::::::::::::::::::::................................................:::..:::::::::::::::::::.......::::::::::....."
	@echo "..........................................      ............................................^^^^:::.....:::^^^^:^^^^::::::::::::::::::::::::::::::::::::::::...............   ...................................::::::::::::::::::::::::::::::::::::::..."
	@echo ".......................................         .......................................... .~^^^^:::.......:::::::::::::::::::::::::::::::.:::.....::::::^^..............     ...................................::::::::::::::::::::::::::::::::::::::..."
	@echo "     ..  .........................              ......................................     :^^^^^^:::............::::::::::::::::::..................:::^^:.............      ...........................................::::::::::::::::::::::::::::::..."
	@echo ":::::::.....     ....................................................................      ^^^^^^:::::.............................................::::^^^. ...........................................................................:::::::::::::::...."
	@echo "!!!!!!~^:......... ........::^~~!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!~:.       .^^^^:^^:::::..... .....................................:::::^^:    ..^^^^^:::::::::^::::.................::::::::::::::::::::::::::::::::::::::::::::::::::::::"
	@echo "^^^^^^^:..         ........:^~!777?????77!!!!!77777777777777777777777777?7777777^.        .^^^^^^^^^:::::.................    .. ..............::::::::^^.     .:7777777????????7!^:..............:^~!7777777777777777777777777777777777777777777777777777"
	@echo "                   ...... ..:^~!!!7777!~:..........::::::::::::::::::::::::::::: .        .^^^^^^^^:::::::..................  ................:::::::::^:.       :!!!!!!!!!77777!~^................^~!??JJJJYYYYYYYYYYYYYJJ?????????????JJJJJJJJJJJJJJJJJJ"
	@echo "                    ...   ..:^^~~!!!!!~:.                                       .         :^^^^^^^^::::::::..................  ..............::::::::::^:         ................                 ..^~7??JJJJYYYYYYYYYYJ7~::::::::^^^^^^^^^^^^^^^^^^^^^^^"
	@echo "                          ..:^^~~~~!!!~:.                                  ..             :^^^^^^^^^^::::::::............................:::::::::::::::.         .                                  .^!77???JJJJJYYYYYY?~.         ............          "
	@echo "                          ..:^^^~~~~~~^:.                                                 :^^^^^^^^^:::::::::::::.....................::::::::::::::::::           .                                 .:~!!777????JJJJJJJ7~.         ............          "
	@echo "                          ..:^^^~~~~~~^:                             ...  ...            .:^^^^^^^^^^^:::::::::::::::::::::::::::::::::::::::::::::::::.            .                                .:~!!!!777?????JJJJ7~.         ......:..:..          "
	@echo "                          ..:^^^^~~~~^^.                       ....                      .::^^^^^^^^^^^::^::::::::::::::::::::::::::::::::::::::::::::..            .. .                             .:~~!!!!!7777??????7^.         .........:..          "
	@echo "                          ..:^^^^^^~~^:.                   ......                      . .:::^:^^^:^^^^^::::::::::::::::::::::::::::::::::::::::::::::.             ..                               .:^~!!!!!!!77777??7!^.          ............         "
	@echo "                          ..:^^^^^^~~^:.                  .                           .. .:::^:::::^^^^::::::::::::::::::::::::::::::::::::::::::::::..             ..     .                         .:^~!!!!!!!!!777777!^.          ............         "
	@echo "                          .::^^^^^^~~^:.         ........           ..                .. .:^:::::::::^^::::::::::::::::::::::::::::::::::::::::::::...                     .....                     .:^~!!!!!!!!!!77777!^.          ............         "
	@echo "                          .::^^^^~~~~^:............   .                               .. .:::::::::::::^^:::::::::::::::::::::::::::::::::::::::::...                            ..                  .:^~!!!!!!!!!!!7777!^.          ............         "
	@echo "                          .::^^^~~~^^:....    ..       ..  .                           . ..::::::::::::::::::::::::.......:::::::::::::::::::::::....                              ....              .:~~!!!!!!!!!!!!77!~^.          ............         "
	@echo "                          .:^^^^::......                        .                      ....::::::::::::::::::::::::......::::::::::::::::::::::.....                                   ..            .:~~!!!!!!!!!!!!!!!~^.          ............         "
	@echo "                         .......  ....                    ..                            ....:::::::::::::::::::::::::....::::::::::::::::::::::.....                                    ..           .:~!!!!!!!!!!!!!!!!~:.          .............        "
	@echo "                        ...     .  ...                                                  ....::::::::::::::::::::::::::::::::::::::::::::::::::.....                                     . .....      .:~!!!!!!!!!!!!!!!!~:.          .............        "
	@echo "                       ..   .  ..   .....                .                               .. ..::::::::::::::::::::::::::::::::::::::::::::::......                                            ...    .^~!!!!!!!!!!!!!!!~^:.           ...........         "
	@echo "                     ...            ..                                                    ..   ...:::::::::::::::::::::::::::::::::::::::::.....                                                ......:~!!!!!!!!!!!!~~~~^:.                               "
	@echo "                   ....            ..                                                  .  ...      ...:::::::::::::::::::::::::::::::::.....                                                    .......:^^^^^~~~!!~~~~~^^:.                               "
	@echo "                 .. ..                                                                  .....:          .........:::::::::::::::::....                                                           .. .........:^^~~~~~^^^^:.                               "
	@echo "               ..   ..                   .          .                                    ..::...                ..............                .                                                         ...  ..::^^~~~~^^:.                               "
	@echo "                    .                                                                      .::::.                                          .. .                                                           ....  ..:^^~~~^:.                               "
	@echo "                     .                                                                        ..::..                                     . ...                                                                .    ...:^~~!!!!~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
	@echo "::::::::::.                                                                                    . :^.....                              .....                                                                           .  .:^7JJJJJJJJJJJJJJ???????????????"
	@echo "::::::^^:.                                                                                      ....~:.:..                      .. ....:..                                                                             .    .~J????????JJJJ???????????????"
	@echo "      ..                                       .                                                   ^:.::..:......  ... ......:.........                                                                                      .!???????????????????????????"
	@echo "                                                                                                     .:. ...........:....... ..  .         .                                                                                . .!?7????????????????????????"
	@echo ".....                                                                                                        .....  ....                ..                                                                                     .!77777777?????????????????"
	@echo ".....                                                                                                          ...                 . ..                                                                                       ...~7777777777777777777!!!!!"
	@echo ". ..                                                                                                              ....... . ........                                                                                           ...^!77777777777777!^......"
	@echo " ..                                                                                                                       . .                                                                                                   ...:~!!!!!7!77777!^       "
	@echo "...                                                                                                                                                                                                                               ...^!!!!!!!!!!!!:       "
	@echo "..                                                                                                                                                                                                                                 ...:~!!!!!!!!!~:       "
	@echo ".                                                                                                                                                                                                                                    ..:~!~~!!!!!~:       "
	@echo "                                                                                                                                                                                                                                      . :~~~~~~~~~:       "
	@echo "                                                                                                                                                                                                                                       ..:~~~~~~~~:       "
	



.PHONY: aprintf printfclean mlx mlxclean all clean fclean re sexy
