<?php
// Footheme by Adaptivethemes.com, a starter sub-sub-theme.

/**
 * Rename each function and instance of "footheme" to match
 * your subthemes name, e.g. if you name your theme "footheme" then the function
 * name will be "footheme_preprocess_hook". Tip - you can search/replace
 * on "footheme".
 */

/**
 * Override or insert variables into the html templates.
 * Replace 'footheme' with your themes name, i.e. mytheme_preprocess_html()
 */
function tomes_preprocess_html(&$vars) {

  // Load the media queries styles
  // If you change the names of these files they must match here - these files are
  // in the /css/ directory of your subtheme - the names must be identical!
  $media_queries_css = array(
    'tomes.responsive.style.css',
   //'tomes.responsive.gpanels.css'
  );
  load_subtheme_media_queries($media_queries_css, 'tomes');

  //load typekit fonts
  drupal_add_js('//use.typekit.net/gqy7acr.js', array(
      'type' => 'external',
      'scope' => 'footer',
      'preprocess' => FALSE,
    ));
  drupal_add_js('try{Typekit.load();}catch(e){}', array(
      'type' => 'inline',
      'scope' => 'footer'
    ));

  //kill the image classes
  $image_key = array_search('ia-r', $vars['classes_array']);
  if ($image_key) {
    unset($vars['classes_array'][$image_key]);
  }

  $vars['classes'] = trim(implode(' ', $vars['classes_array']));

  global $base_url;
  $vars['base_url'] = $base_url;

  $vars['site_name'] = variable_get('site_name', FALSE);
  $vars['fb_user'] = variable_get('fb_message_user_id', FALSE);

 /**
  * Load IE specific stylesheets
  * AT automates adding IE stylesheets, simply add to the array using
  * the conditional comment as the key and the stylesheet name as the value.
  *
  * See our online help: http://adaptivethemes.com/documentation/working-with-internet-explorer
  *
  * For example to add a stylesheet for IE8 only use:
  *
  *  'IE 8' => 'ie-8.css',
  *
  * Your IE CSS file must be in the /css/ directory in your subtheme.
  */
  /* -- Delete this line to add a conditional stylesheet for IE 7 or less.
  $ie_files = array(
    'lte IE 7' => 'ie-lte-7.css',
  );
  load_subtheme_ie_styles($ie_files, 'footheme'); // Replace 'footheme' with your themes name
  // */
}

/**
 * Override or insert variables into the page templates.
 *
function tomes_preprocess_page(&$vars){

}

/**
 * Override or inser variables into node templates.
 */
   /* --
function tomes_preprocess_node(&$vars) {
}
//*/
