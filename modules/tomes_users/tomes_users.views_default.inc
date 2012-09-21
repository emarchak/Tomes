<?php
/**
 * @file
 * tomes_users.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tomes_users_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'players';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'The Players';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'The Players';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 0;
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['path'] = '#uid-[uid]';
  $handler->display->display_options['fields']['picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['picture']['element_type'] = '0';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['picture']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = 0;
  $handler->display->display_options['fields']['picture']['image_style'] = 'medium';
  /* Field: User: Full Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['label'] = '';
  $handler->display->display_options['fields']['field_name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_name']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_name']['alter']['path'] = '#uid-[uid]';
  $handler->display->display_options['fields']['field_name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_name']['alter']['link_class'] = 'lightbox';
  $handler->display->display_options['fields']['field_name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_name']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_name']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_name']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_name']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_name']['field_api_classes'] = 0;
  /* Field: User: Biography */
  $handler->display->display_options['fields']['field_bio']['id'] = 'field_bio';
  $handler->display->display_options['fields']['field_bio']['table'] = 'field_data_field_bio';
  $handler->display->display_options['fields']['field_bio']['field'] = 'field_bio';
  $handler->display->display_options['fields']['field_bio']['label'] = '';
  $handler->display->display_options['fields']['field_bio']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_bio']['alter']['text'] = '<div class="biography lightbox_popup" id="uid-[uid]">[field_bio]</div>';
  $handler->display->display_options['fields']['field_bio']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_bio']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_bio']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_bio']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_bio']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_bio']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_bio']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_bio']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_bio']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_bio']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_bio']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_bio']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_bio']['element_type'] = '0';
  $handler->display->display_options['fields']['field_bio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bio']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_bio']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_bio']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_bio']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_bio']['field_api_classes'] = 0;
  /* Sort criterion: User: Full Name (field_name) */
  $handler->display->display_options['sorts']['field_name_value']['id'] = 'field_name_value';
  $handler->display->display_options['sorts']['field_name_value']['table'] = 'field_data_field_name';
  $handler->display->display_options['sorts']['field_name_value']['field'] = 'field_name_value';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Picture */
  $handler->display->display_options['filters']['picture']['id'] = 'picture';
  $handler->display->display_options['filters']['picture']['table'] = 'users';
  $handler->display->display_options['filters']['picture']['field'] = 'picture';
  $handler->display->display_options['filters']['picture']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'cast';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'The Players';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['players'] = $view;

  return $export;
}
