<?php
/**
 * @file
 * opl_site_announcement.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function opl_site_announcement_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'site_announcements';
  $view->description = 'announcements';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Site announcements';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['items_per_page'] = 0;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'alert alert-[field_announcement_category] alert-dismissible';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* Field: Content: Announcement category */
  $handler->display->display_options['fields']['field_announcement_category']['id'] = 'field_announcement_category';
  $handler->display->display_options['fields']['field_announcement_category']['table'] = 'field_data_field_announcement_category';
  $handler->display->display_options['fields']['field_announcement_category']['field'] = 'field_announcement_category';
  $handler->display->display_options['fields']['field_announcement_category']['label'] = '';
  $handler->display->display_options['fields']['field_announcement_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_announcement_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_announcement_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_announcement_category']['type'] = 'site_announcement_icon';
  /* Field: Content: Rendered Content */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '[body] [edit_node]';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'site_announcement' => 'site_announcement',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    15 => 0,
    6 => 0,
    1 => 0,
    24 => 0,
    7 => 0,
    12 => 0,
    14 => 0,
    16 => 0,
    9 => 0,
    3 => 0,
    21 => 0,
    20 => 0,
    18 => 0,
    22 => 0,
    5 => 0,
    26 => 0,
    11 => 0,
    23 => 0,
    10 => 0,
    19 => 0,
    4 => 0,
    25 => 0,
    13 => 0,
    8 => 0,
    17 => 0,
    27 => 0,
    28 => 0,
    29 => 0,
  );

  /* Display: General announcements (site announcements) */
  $handler = $view->new_display('block', 'General announcements (site announcements)', 'block_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_branch_target_id']['id'] = 'field_branch_target_id';
  $handler->display->display_options['relationships']['field_branch_target_id']['table'] = 'field_data_field_branch';
  $handler->display->display_options['relationships']['field_branch_target_id']['field'] = 'field_branch_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Announcement category */
  $handler->display->display_options['fields']['field_announcement_category']['id'] = 'field_announcement_category';
  $handler->display->display_options['fields']['field_announcement_category']['table'] = 'field_data_field_announcement_category';
  $handler->display->display_options['fields']['field_announcement_category']['field'] = 'field_announcement_category';
  $handler->display->display_options['fields']['field_announcement_category']['label'] = '';
  $handler->display->display_options['fields']['field_announcement_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_announcement_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_announcement_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_announcement_category']['type'] = 'site_announcement_icon';
  /* Field: Content: Rendered Content */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '[body] [edit_node]';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'site_announcement' => 'site_announcement',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    15 => 0,
    6 => 0,
    1 => 0,
    24 => 0,
    7 => 0,
    12 => 0,
    14 => 0,
    16 => 0,
    9 => 0,
    3 => 0,
    21 => 0,
    20 => 0,
    18 => 0,
    22 => 0,
    5 => 0,
    26 => 0,
    11 => 0,
    23 => 0,
    10 => 0,
    19 => 0,
    4 => 0,
    25 => 0,
    13 => 0,
    8 => 0,
    17 => 0,
    27 => 0,
    28 => 0,
    29 => 0,
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = 1;

  /* Display: Page - site announcement overview */
  $handler = $view->new_display('page', 'Page - site announcement overview', 'page_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    15 => '15',
    21 => '21',
  );
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_announcement_category' => 'field_announcement_category',
    'title' => 'title',
    'body' => 'body',
    'clone_node' => 'clone_node',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_announcement_category' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'clone_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href="/node/add/site-announcement">Add a site announcement</a>';
  $handler->display->display_options['header']['area']['format'] = '2';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Announcement category */
  $handler->display->display_options['fields']['field_announcement_category']['id'] = 'field_announcement_category';
  $handler->display->display_options['fields']['field_announcement_category']['table'] = 'field_data_field_announcement_category';
  $handler->display->display_options['fields']['field_announcement_category']['field'] = 'field_announcement_category';
  $handler->display->display_options['fields']['field_announcement_category']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'site_announcement' => 'site_announcement',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    15 => 0,
    6 => 0,
    1 => 0,
    24 => 0,
    7 => 0,
    12 => 0,
    14 => 0,
    16 => 0,
    9 => 0,
    3 => 0,
    21 => 0,
    20 => 0,
    18 => 0,
    22 => 0,
    5 => 0,
    26 => 0,
    11 => 0,
    23 => 0,
    10 => 0,
    19 => 0,
    4 => 0,
    25 => 0,
    13 => 0,
    8 => 0,
    17 => 0,
    27 => 0,
    28 => 0,
    29 => 0,
  );
  /* Filter criterion: Content: Announcement category (field_announcement_category) */
  $handler->display->display_options['filters']['field_announcement_category_value']['id'] = 'field_announcement_category_value';
  $handler->display->display_options['filters']['field_announcement_category_value']['table'] = 'field_data_field_announcement_category';
  $handler->display->display_options['filters']['field_announcement_category_value']['field'] = 'field_announcement_category_value';
  $handler->display->display_options['filters']['field_announcement_category_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_announcement_category_value']['expose']['operator_id'] = 'field_announcement_category_value_op';
  $handler->display->display_options['filters']['field_announcement_category_value']['expose']['label'] = 'Announcement category';
  $handler->display->display_options['filters']['field_announcement_category_value']['expose']['operator'] = 'field_announcement_category_value_op';
  $handler->display->display_options['filters']['field_announcement_category_value']['expose']['identifier'] = 'field_announcement_category_value';
  $handler->display->display_options['filters']['field_announcement_category_value']['expose']['remember_roles'] = array(
    2 => '2',
    15 => 0,
    6 => 0,
    1 => 0,
    24 => 0,
    7 => 0,
    12 => 0,
    14 => 0,
    16 => 0,
    9 => 0,
    3 => 0,
    21 => 0,
    20 => 0,
    18 => 0,
    22 => 0,
    5 => 0,
    26 => 0,
    11 => 0,
    23 => 0,
    10 => 0,
    19 => 0,
    4 => 0,
    25 => 0,
    13 => 0,
    8 => 0,
    17 => 0,
    27 => 0,
    28 => 0,
    29 => 0,
  );
  /* Filter criterion: Content: Branch (field_branch) */
  $handler->display->display_options['filters']['field_branch_target_id']['id'] = 'field_branch_target_id';
  $handler->display->display_options['filters']['field_branch_target_id']['table'] = 'field_data_field_branch';
  $handler->display->display_options['filters']['field_branch_target_id']['field'] = 'field_branch_target_id';
  $handler->display->display_options['filters']['field_branch_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_branch_target_id']['expose']['operator_id'] = 'field_branch_target_id_op';
  $handler->display->display_options['filters']['field_branch_target_id']['expose']['label'] = 'Branch';
  $handler->display->display_options['filters']['field_branch_target_id']['expose']['operator'] = 'field_branch_target_id_op';
  $handler->display->display_options['filters']['field_branch_target_id']['expose']['identifier'] = 'field_branch_target_id';
  $handler->display->display_options['filters']['field_branch_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    15 => 0,
    6 => 0,
    1 => 0,
    24 => 0,
    7 => 0,
    12 => 0,
    14 => 0,
    16 => 0,
    9 => 0,
    3 => 0,
    21 => 0,
    20 => 0,
    18 => 0,
    22 => 0,
    5 => 0,
    26 => 0,
    11 => 0,
    23 => 0,
    10 => 0,
    19 => 0,
    4 => 0,
    25 => 0,
    13 => 0,
    8 => 0,
    17 => 0,
    27 => 0,
    28 => 0,
    29 => 0,
  );
  $handler->display->display_options['path'] = 'admin/content/opl/site-announcements';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Site Announcements';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Imagine space */
  $handler = $view->new_display('block', 'Imagine space', 'block_4');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'alert alert-[field_announcement_category] alert-dismissible';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Announcement category */
  $handler->display->display_options['fields']['field_announcement_category']['id'] = 'field_announcement_category';
  $handler->display->display_options['fields']['field_announcement_category']['table'] = 'field_data_field_announcement_category';
  $handler->display->display_options['fields']['field_announcement_category']['field'] = 'field_announcement_category';
  $handler->display->display_options['fields']['field_announcement_category']['label'] = '';
  $handler->display->display_options['fields']['field_announcement_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_announcement_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_announcement_category']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_announcement_category']['type'] = 'site_announcement_icon';
  /* Field: Content: Rendered Content */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'teaser';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '[body] [edit_node]';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'site_announcement' => 'site_announcement',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    15 => 0,
    6 => 0,
    1 => 0,
    24 => 0,
    7 => 0,
    12 => 0,
    14 => 0,
    16 => 0,
    9 => 0,
    3 => 0,
    21 => 0,
    20 => 0,
    18 => 0,
    22 => 0,
    5 => 0,
    26 => 0,
    11 => 0,
    23 => 0,
    10 => 0,
    19 => 0,
    4 => 0,
    25 => 0,
    13 => 0,
    8 => 0,
    17 => 0,
    27 => 0,
    28 => 0,
    29 => 0,
  );
  /* Filter criterion: Content: Subject of announcement (if not a branch) (field_subject_of_announcement_if) */
  $handler->display->display_options['filters']['field_subject_of_announcement_if_value']['id'] = 'field_subject_of_announcement_if_value';
  $handler->display->display_options['filters']['field_subject_of_announcement_if_value']['table'] = 'field_data_field_subject_of_announcement_if';
  $handler->display->display_options['filters']['field_subject_of_announcement_if_value']['field'] = 'field_subject_of_announcement_if_value';
  $handler->display->display_options['filters']['field_subject_of_announcement_if_value']['value'] = array(
    1 => '1',
  );

  /* Display: Kiosk */
  $handler = $view->new_display('block', 'Kiosk', 'block_5');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'alert alert-[field_announcement_category] alert-dismissible';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'site_announcement' => 'site_announcement',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    15 => 0,
    6 => 0,
    1 => 0,
    24 => 0,
    7 => 0,
    12 => 0,
    14 => 0,
    16 => 0,
    9 => 0,
    3 => 0,
    21 => 0,
    20 => 0,
    18 => 0,
    22 => 0,
    5 => 0,
    26 => 0,
    11 => 0,
    23 => 0,
    10 => 0,
    19 => 0,
    4 => 0,
    25 => 0,
    13 => 0,
    8 => 0,
    17 => 0,
    27 => 0,
    28 => 0,
    29 => 0,
  );
  /* Filter criterion: Content: Subject of announcement (if not a branch) (field_subject_of_announcement_if) */
  $handler->display->display_options['filters']['field_subject_of_announcement_if_value']['id'] = 'field_subject_of_announcement_if_value';
  $handler->display->display_options['filters']['field_subject_of_announcement_if_value']['table'] = 'field_data_field_subject_of_announcement_if';
  $handler->display->display_options['filters']['field_subject_of_announcement_if_value']['field'] = 'field_subject_of_announcement_if_value';
  $handler->display->display_options['filters']['field_subject_of_announcement_if_value']['value'] = array(
    2 => '2',
  );

  /* Display: Meeting rooms */
  $handler = $view->new_display('block', 'Meeting rooms', 'block_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'alert alert-[field_announcement_category] alert-dismissible';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'site_announcement' => 'site_announcement',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    15 => 0,
    6 => 0,
    1 => 0,
    24 => 0,
    7 => 0,
    12 => 0,
    14 => 0,
    16 => 0,
    9 => 0,
    3 => 0,
    21 => 0,
    20 => 0,
    18 => 0,
    22 => 0,
    5 => 0,
    26 => 0,
    11 => 0,
    23 => 0,
    10 => 0,
    19 => 0,
    4 => 0,
    25 => 0,
    13 => 0,
    8 => 0,
    17 => 0,
    27 => 0,
    28 => 0,
    29 => 0,
  );
  /* Filter criterion: Content: Subject of announcement (if not a branch) (field_subject_of_announcement_if) */
  $handler->display->display_options['filters']['field_subject_of_announcement_if_value']['id'] = 'field_subject_of_announcement_if_value';
  $handler->display->display_options['filters']['field_subject_of_announcement_if_value']['table'] = 'field_data_field_subject_of_announcement_if';
  $handler->display->display_options['filters']['field_subject_of_announcement_if_value']['field'] = 'field_subject_of_announcement_if_value';
  $handler->display->display_options['filters']['field_subject_of_announcement_if_value']['value'] = array(
    3 => '3',
  );
  $translatables['site_announcements'] = array(
    t('Defaults'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('[body] [edit_node]'),
    t('Published'),
    t('General announcements (site announcements)'),
    t('Content entity referenced from field_branch'),
    t('Page - site announcement overview'),
    t('<a href="/node/add/site-announcement">Add a site announcement</a>'),
    t('Content'),
    t('- Choose an operation -'),
    t('Announcement category'),
    t('Title'),
    t('Body'),
    t('Edit'),
    t('Branch'),
    t('Imagine space'),
    t('Kiosk'),
    t('Meeting rooms'),
  );
  $export['site_announcements'] = $view;

  return $export;
}
