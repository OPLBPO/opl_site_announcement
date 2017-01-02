<?php
/**
 * @file
 * opl_site_announcement.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function opl_site_announcement_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function opl_site_announcement_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function opl_site_announcement_node_info() {
  $items = array(
    'site_announcement' => array(
      'name' => t('Site announcement'),
      'base' => 'node_content',
      'description' => t('Custom content type used to post announcements, alerts and other minutia to specific blocks on the site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
