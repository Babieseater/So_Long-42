/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemypathfinding.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smayrand <smayrand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 02:40:01 by smayrand          #+#    #+#             */
/*   Updated: 2022/06/08 02:41:03 by smayrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

mid_height = map height / 2;
mid_width = map width / 2

//player is on the left side of the map or enemy is on the oppposite side of the player
if (player_pos_x < mid_width || enemy_position_x > player_pos_x)
	move enemy left;

//player is on the right side 
else if (player_pos_x > mid_width || enemy_position_x > player_pos_x)
	move enemy right;

//player is on the top side or enemy is on the bottom
else if (player_pos_y < mid_height || enemy_position_y > player_pos_y)
	move enemy up;

//player is on the bottom or enemy is on the top
else if (player_pos_y > mid_height || enemy_position_y < player_pos_y)
	move enemy down;