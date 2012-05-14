<?php

/**
 * @file
 * Template for a Vimeo custom formatter.
 *
 * Please note: Vimeo video variables are cached and may not
 * reflect the actual data present on Vimeo.com
 *
 * Player variables:
 * - $player['width']
 * - $player['height']
 * - $player['title']
 * - $player['byline']
 * - $player['portrait']
 * - $player['color']
 * - $player['fullscreen']
 * - $player['autoplay']
 *
 * Node variables:
 * - $node[$variable]
 *
 * Video variables:
 * - $video['id']
 * - $video['title']
 * - $video['description']
 * - $video['url']
 * - $video['upload_date']
 * - $video['thumbnail_small']
 * - $video['thumbnail_medium']
 * - $video['thumbnail_large']
 * - $video['thumbnail_local']  - The large thumbnail stored locally
 * - $video['user_name']
 * - $video['user_portrait_small']
 * - $video['user_portrait_medium']
 * - $video['user_portrait_large']
 * - $video['user_portrait_huge']
 * - $video['stats_number_of_likes']
 * - $video['stats_number_of_plays']
 * - $video['stats_number_of_comments']
 * - $video['duration']
 * - $video['width']
 * - $video['height']
 * - $video['tags']
 */
 
 $url = 'http://player.vimeo.com/video/' . $video['id'] . '?title=' . $player['title'] . '&amp;byline=' . $player['byline'] . '&amp;portrait=' . $player['portrait'];
?>

<strong><?php print $video['title']; ?></strong><br />
<iframe src="<?php print $url; ?>" width="<?php print $player['width']; ?>" height="<?php print $player['height']; ?>" frameborder="0"></iframe>