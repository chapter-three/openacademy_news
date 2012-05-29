<?php
/**
 * @file
 * openacademy_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openacademy_news_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_views_api().
 */
function openacademy_news_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function openacademy_news_node_info() {
  $items = array(
    'openacademy_news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('An important piece of news to post to your site. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
