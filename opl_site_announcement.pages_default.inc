<?php
/**
 * @file
 * opl_site_announcement.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function opl_site_announcement_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'entity_panels_node_site_announcement_teaser__panel_context_6cfd5274-17d5-46ff-a9dc-a7c61d851fa3';
  $handler->task = 'entity_panels';
  $handler->subtask = 'node-site_announcement-teaser';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '83bcbfbd-7bbe-4784-bb52-151dbd5d26b4';
  $display->storage_type = 'unknown';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-baee2834-bfd7-4ec0-a93a-6ee488c4d7f8';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Button',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<button type="button" class="close" data-dismiss="alert" aria-label="Close"><span aria-hidden="true">&times;</span></button>',
    'format' => 'newcomers_full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'baee2834-bfd7-4ec0-a93a-6ee488c4d7f8';
  $display->content['new-baee2834-bfd7-4ec0-a93a-6ee488c4d7f8'] = $pane;
  $display->panels['middle'][0] = 'new-baee2834-bfd7-4ec0-a93a-6ee488c4d7f8';
  $pane = new stdClass();
  $pane->pid = 'new-2f594746-dce6-49a7-9779-dd8a9ce9f025';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'icon',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<i class="fa fa-exclamation-triangle aria-hidden="true"></i>',
    'format' => 'newcomers_full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2f594746-dce6-49a7-9779-dd8a9ce9f025';
  $display->content['new-2f594746-dce6-49a7-9779-dd8a9ce9f025'] = $pane;
  $display->panels['middle'][1] = 'new-2f594746-dce6-49a7-9779-dd8a9ce9f025';
  $pane = new stdClass();
  $pane->pid = 'new-b5be7681-f75c-448f-9ca2-688e8a569029';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:title_field';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'title_linked',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'title_style' => 'h3',
      'title_link' => '',
      'title_class' => '',
    ),
    'context' => 'argument_entity_panels_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'b5be7681-f75c-448f-9ca2-688e8a569029';
  $display->content['new-b5be7681-f75c-448f-9ca2-688e8a569029'] = $pane;
  $display->panels['middle'][2] = 'new-b5be7681-f75c-448f-9ca2-688e8a569029';
  $pane = new stdClass();
  $pane->pid = 'new-800c0d66-172a-45b8-b371-fec346eaaab6';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'smart_trim_format',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'trim_length' => '50',
      'trim_type' => 'words',
      'trim_suffix' => '...',
      'trim_link' => '0',
      'more_link' => '0',
      'more_text' => 'Read more',
      'summary_handler' => 'full',
      'trim_options' => array(
        'text' => 0,
      ),
      'trim_preserve_tags' => '',
    ),
    'context' => 'argument_entity_panels_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '800c0d66-172a-45b8-b371-fec346eaaab6';
  $display->content['new-800c0d66-172a-45b8-b371-fec346eaaab6'] = $pane;
  $display->panels['middle'][3] = 'new-800c0d66-172a-45b8-b371-fec346eaaab6';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['entity_panels_node_site_announcement_teaser__panel_context_6cfd5274-17d5-46ff-a9dc-a7c61d851fa3'] = $handler;

  return $export;
}
