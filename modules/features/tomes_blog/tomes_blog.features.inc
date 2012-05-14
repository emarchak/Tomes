<?php
/**
 * @file
 * tomes_blog.features.inc
 */

/**
 * Implements hook_views_api().
 */
function tomes_blog_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}
