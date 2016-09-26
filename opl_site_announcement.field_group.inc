<?php
/**
 * @file
 * opl_site_announcement.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function opl_site_announcement_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_branches|node|site_announcement|form';
  $field_group->group_name = 'group_branches';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site_announcement';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'This announcement affects one or more branches',
    'weight' => '5',
    'children' => array(
      0 => 'field_branch',
      1 => 'field_branch_es_affected_',
      2 => 'field_branches_only_display',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'This announcement affects one or more branches',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-branches field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_branches|node|site_announcement|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_other|node|site_announcement|form';
  $field_group->group_name = 'group_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'site_announcement';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'This announcment affects the Imagine Space, Kiosk or another area',
    'weight' => '6',
    'children' => array(
      0 => 'field_survey',
      1 => 'field_subject_of_announcement_if',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'This announcment affects the Imagine Space, Kiosk or another area',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-other field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_other|node|site_announcement|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('This announcement affects one or more branches');
  t('This announcment affects the Imagine Space, Kiosk or another area');

  return $field_groups;
}
