<?php
/**
 * @file
 * tomes_pages.features.inc
 */

/**
 * Implements hook_views_api().
 */
function tomes_pages_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tomes_pages_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('To be placed in the menu or in the feed.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
