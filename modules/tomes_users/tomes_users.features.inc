<?php
/**
 * @file
 * tomes_users.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tomes_users_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tomes_users_views_api() {
  return array("version" => "3.0");
}
