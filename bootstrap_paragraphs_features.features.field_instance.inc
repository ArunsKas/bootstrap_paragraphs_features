<?php

/**
 * @file
 * bootstrap_paragraphs_features.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function bootstrap_paragraphs_features_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'paragraphs_item-bp_blank-bp_background'.
  $field_instances['paragraphs_item-bp_blank-bp_background'] = array(
    'bundle' => 'bp_blank',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'bp_background',
    'label' => 'Background',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-bp_blank-bp_unrestricted'.
  $field_instances['paragraphs_item-bp_blank-bp_unrestricted'] = array(
    'bundle' => 'bp_blank',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'bp_unrestricted',
    'label' => 'Unrestricted',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-bp_blank-bp_width'.
  $field_instances['paragraphs_item-bp_blank-bp_width'] = array(
    'bundle' => 'bp_blank',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'bp_width',
    'label' => 'Width',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-bp_block-bp_background'.
  $field_instances['paragraphs_item-bp_block-bp_background'] = array(
    'bundle' => 'bp_block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'bp_background',
    'label' => 'Background',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-bp_block-bp_block'.
  $field_instances['paragraphs_item-bp_block-bp_block'] = array(
    'bundle' => 'bp_block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'blockreference',
        'settings' => array(
          'show_empty_blocks' => FALSE,
        ),
        'type' => 'blockreference_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'blockreference',
        'settings' => array(
          'show_empty_blocks' => FALSE,
        ),
        'type' => 'blockreference_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'bp_block',
    'label' => 'Block',
    'required' => 0,
    'settings' => array(
      'blockreference_modules' => array(
        'block' => 'block',
        'devel' => 0,
        'menu' => 0,
        'node' => 0,
        'system' => 0,
        'user' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'blockreference',
      'settings' => array(
        'autocomplete_path' => 'blockreference/autocomplete',
        'blockreference_ac_match_method' => 'contains',
        'size' => 60,
      ),
      'type' => 'blockreference_autocomplete',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-bp_block-bp_width'.
  $field_instances['paragraphs_item-bp_block-bp_width'] = array(
    'bundle' => 'bp_block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'bp_width',
    'label' => 'Width',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-bp_card-bp_background'.
  $field_instances['paragraphs_item-bp_card-bp_background'] = array(
    'bundle' => 'bp_card',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'bp_background',
    'label' => 'Background',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-bp_card-bp_card_content'.
  $field_instances['paragraphs_item-bp_card-bp_card_content'] = array(
    'bundle' => 'bp_card',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'paragraphs_editor_preview',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'bp_card_content',
    'label' => 'Card Content',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'bp_blank' => -1,
        'bp_block' => -1,
        'bp_card' => -1,
        'bp_carousel' => -1,
        'bp_column_wrapper' => -1,
        'bp_columns' => -1,
        'bp_columns_three_uneven' => -1,
        'bp_columns_two_uneven' => -1,
        'bp_image' => -1,
        'bp_simple' => -1,
        'bp_view' => -1,
        'xeno_hero' => -1,
      ),
      'bundle_weights' => array(
        'bp_blank' => 2,
        'bp_block' => 3,
        'bp_card' => 4,
        'bp_carousel' => 5,
        'bp_column_wrapper' => 9,
        'bp_columns' => 6,
        'bp_columns_three_uneven' => 7,
        'bp_columns_two_uneven' => 8,
        'bp_image' => 10,
        'bp_simple' => 11,
        'bp_view' => 12,
        'xeno_hero' => 13,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-bp_card-bp_padding_b'.
  $field_instances['paragraphs_item-bp_card-bp_padding_b'] = array(
    'bundle' => 'bp_card',
    'default_value' => array(
      0 => array(
        'value' => 'paragraph--padding paragraph--padding--paddingbottom',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'bp_padding_b',
    'label' => 'Padding Bottom',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-bp_card-bp_padding_h'.
  $field_instances['paragraphs_item-bp_card-bp_padding_h'] = array(
    'bundle' => 'bp_card',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'bp_padding_h',
    'label' => 'Padding Horizontal',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-bp_card-bp_width'.
  $field_instances['paragraphs_item-bp_card-bp_width'] = array(
    'bundle' => 'bp_card',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'bp_width',
    'label' => 'Width',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-bp_carousel-bp_background'.
  $field_instances['paragraphs_item-bp_carousel-bp_background'] = array(
    'bundle' => 'bp_carousel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'bp_background',
    'label' => 'Background',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-bp_carousel-bp_slide_content'.
  $field_instances['paragraphs_item-bp_carousel-bp_slide_content'] = array(
    'bundle' => 'bp_carousel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'bp_slide_content',
    'label' => 'Slide Content',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'bp_blank' => 'bp_blank',
        'bp_carousel' => -1,
        'bp_columns' => 'bp_columns',
        'bp_columns_three_uneven' => 'bp_columns_three_uneven',
        'bp_image' => 'bp_image',
        'bp_simple' => 'bp_simple',
      ),
      'bundle_weights' => array(
        'bp_blank' => 2,
        'bp_carousel' => 3,
        'bp_columns' => 4,
        'bp_columns_three_uneven' => 5,
        'bp_image' => 6,
        'bp_simple' => 7,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-bp_carousel-bp_slide_interval'.
  $field_instances['paragraphs_item-bp_carousel-bp_slide_interval'] = array(
    'bundle' => 'bp_carousel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'bp_slide_interval',
    'label' => 'Slide Interval',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-bp_carousel-bp_width'.
  $field_instances['paragraphs_item-bp_carousel-bp_width'] = array(
    'bundle' => 'bp_carousel',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'bp_width',
    'label' => 'Width',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-bp_column_wrapper-bp_column_content_w'.
  $field_instances['paragraphs_item-bp_column_wrapper-bp_column_content_w'] = array(
    'bundle' => 'bp_column_wrapper',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'paragraphs_editor_preview',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'bp_column_content_w',
    'label' => 'Column Wrapper Content',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'bp_blank' => -1,
        'bp_block' => -1,
        'bp_carousel' => -1,
        'bp_column_wrapper' => -1,
        'bp_columns' => -1,
        'bp_columns_three_uneven' => -1,
        'bp_columns_two_uneven' => -1,
        'bp_image' => -1,
        'bp_simple' => -1,
        'xeno_hero' => -1,
      ),
      'bundle_weights' => array(
        'bp_blank' => 2,
        'bp_block' => 3,
        'bp_carousel' => 4,
        'bp_column_wrapper' => 8,
        'bp_columns' => 5,
        'bp_columns_three_uneven' => 6,
        'bp_columns_two_uneven' => 7,
        'bp_image' => 9,
        'bp_simple' => 10,
        'xeno_hero' => 11,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-bp_columns-bp_background'.
  $field_instances['paragraphs_item-bp_columns-bp_background'] = array(
    'bundle' => 'bp_columns',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'bp_background',
    'label' => 'Background',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-bp_columns-bp_column_content'.
  $field_instances['paragraphs_item-bp_columns-bp_column_content'] = array(
    'bundle' => 'bp_columns',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'paragraphs_editor_preview',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'bp_column_content',
    'label' => 'Column Content',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'bp_blank' => -1,
        'bp_columns' => -1,
        'bp_image' => -1,
        'bp_simple' => -1,
      ),
      'bundle_weights' => array(
        'bp_blank' => 2,
        'bp_columns' => 3,
        'bp_image' => 4,
        'bp_simple' => 5,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-bp_columns-bp_width'.
  $field_instances['paragraphs_item-bp_columns-bp_width'] = array(
    'bundle' => 'bp_columns',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'bp_width',
    'label' => 'Width',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-bp_columns_three_uneven-bp_background'.
  $field_instances['paragraphs_item-bp_columns_three_uneven-bp_background'] = array(
    'bundle' => 'bp_columns_three_uneven',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'bp_background',
    'label' => 'Background',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-bp_columns_three_uneven-bp_column_content_3'.
  $field_instances['paragraphs_item-bp_columns_three_uneven-bp_column_content_3'] = array(
    'bundle' => 'bp_columns_three_uneven',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'paragraphs_editor_preview',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'bp_column_content_3',
    'label' => 'Column Content',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'bp_blank' => 'bp_blank',
        'bp_carousel' => -1,
        'bp_columns' => -1,
        'bp_columns_three_uneven' => -1,
        'bp_columns_two_uneven' => -1,
        'bp_image' => 'bp_image',
        'bp_simple' => 'bp_simple',
        'xeno_hero' => -1,
      ),
      'bundle_weights' => array(
        'bp_blank' => 2,
        'bp_carousel' => 9,
        'bp_columns' => 3,
        'bp_columns_three_uneven' => 4,
        'bp_columns_two_uneven' => 12,
        'bp_image' => 5,
        'bp_simple' => 6,
        'xeno_hero' => 15,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-bp_columns_three_uneven-bp_column_style_3'.
  $field_instances['paragraphs_item-bp_columns_three_uneven-bp_column_style_3'] = array(
    'bundle' => 'bp_columns_three_uneven',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'bp_column_style_3',
    'label' => 'Column Style',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-bp_columns_three_uneven-bp_width'.
  $field_instances['paragraphs_item-bp_columns_three_uneven-bp_width'] = array(
    'bundle' => 'bp_columns_three_uneven',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'bp_width',
    'label' => 'Width',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-bp_columns_two_uneven-bp_background'.
  $field_instances['paragraphs_item-bp_columns_two_uneven-bp_background'] = array(
    'bundle' => 'bp_columns_two_uneven',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'bp_background',
    'label' => 'Background',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-bp_columns_two_uneven-bp_column_content_2'.
  $field_instances['paragraphs_item-bp_columns_two_uneven-bp_column_content_2'] = array(
    'bundle' => 'bp_columns_two_uneven',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'paragraphs_editor_preview',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'bp_column_content_2',
    'label' => 'Column Content',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'bp_blank' => -1,
        'bp_carousel' => -1,
        'bp_columns' => -1,
        'bp_columns_three_uneven' => -1,
        'bp_columns_two_uneven' => -1,
        'bp_image' => -1,
        'bp_simple' => -1,
        'xeno_hero' => -1,
      ),
      'bundle_weights' => array(
        'bp_blank' => 2,
        'bp_carousel' => 3,
        'bp_columns' => 4,
        'bp_columns_three_uneven' => 5,
        'bp_columns_two_uneven' => 6,
        'bp_image' => 7,
        'bp_simple' => 8,
        'xeno_hero' => 9,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-bp_columns_two_uneven-bp_column_style_2'.
  $field_instances['paragraphs_item-bp_columns_two_uneven-bp_column_style_2'] = array(
    'bundle' => 'bp_columns_two_uneven',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'bp_column_style_2',
    'label' => 'Column Style',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-bp_columns_two_uneven-bp_width'.
  $field_instances['paragraphs_item-bp_columns_two_uneven-bp_width'] = array(
    'bundle' => 'bp_columns_two_uneven',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'bp_width',
    'label' => 'Width',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-bp_image-bp_background'.
  $field_instances['paragraphs_item-bp_image-bp_background'] = array(
    'bundle' => 'bp_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'bp_background',
    'label' => 'Background',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-bp_image-bp_image'.
  $field_instances['paragraphs_item-bp_image-bp_image'] = array(
    'bundle' => 'bp_image',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'bp_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-bp_image-bp_link'.
  $field_instances['paragraphs_item-bp_image-bp_link'] = array(
    'bundle' => 'bp_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_absolute',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'bp_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => '',
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-bp_image-bp_width'.
  $field_instances['paragraphs_item-bp_image-bp_width'] = array(
    'bundle' => 'bp_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'bp_width',
    'label' => 'Width',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-bp_simple-bp_background'.
  $field_instances['paragraphs_item-bp_simple-bp_background'] = array(
    'bundle' => 'bp_simple',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'bp_background',
    'label' => 'Background',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-bp_simple-bp_text'.
  $field_instances['paragraphs_item-bp_simple-bp_text'] = array(
    'bundle' => 'bp_simple',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'bp_text',
    'label' => 'Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-bp_simple-bp_width'.
  $field_instances['paragraphs_item-bp_simple-bp_width'] = array(
    'bundle' => 'bp_simple',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'bp_width',
    'label' => 'Width',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-bp_view-bp_background'.
  $field_instances['paragraphs_item-bp_view-bp_background'] = array(
    'bundle' => 'bp_view',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'bp_background',
    'label' => 'Background',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-bp_view-bp_view'.
  $field_instances['paragraphs_item-bp_view-bp_view'] = array(
    'bundle' => 'bp_view',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'viewfield',
        'settings' => array(),
        'type' => 'viewfield_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'viewfield',
        'settings' => array(),
        'type' => 'viewfield_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'bp_view',
    'label' => 'View',
    'required' => 0,
    'settings' => array(
      'allowed_views' => array(),
      'force_default' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'viewfield',
      'settings' => array(),
      'type' => 'viewfield_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'paragraphs_item-bp_view-bp_width'.
  $field_instances['paragraphs_item-bp_view-bp_width'] = array(
    'bundle' => 'bp_view',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'bp_width',
    'label' => 'Width',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

    // Exported field_instance: 'paragraphs_item-xeno_hero-bp_background'.
  $field_instances['paragraphs_item-xeno_hero-bp_background'] = array(
    'bundle' => 'xeno_hero',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'bp_background',
    'label' => 'Background',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-xeno_hero-bp_background_image'.
  $field_instances['paragraphs_item-xeno_hero-bp_background_image'] = array(
    'bundle' => 'xeno_hero',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'bp_background_image',
    'label' => 'Background Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-xeno_hero-bp_content'.
  $field_instances['paragraphs_item-xeno_hero-bp_content'] = array(
    'bundle' => 'xeno_hero',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'bp_content',
    'label' => 'Content',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'bp_blank' => -1,
        'bp_carousel' => -1,
        'bp_columns' => -1,
        'bp_columns_three_uneven' => -1,
        'bp_image' => -1,
        'bp_simple' => -1,
        'xeno_hero' => -1,
      ),
      'bundle_weights' => array(
        'bp_blank' => 2,
        'bp_carousel' => 3,
        'bp_columns' => 4,
        'bp_columns_three_uneven' => 5,
        'bp_image' => 6,
        'bp_simple' => 7,
        'xeno_hero' => 8,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'paragraphs_item-xeno_hero-bp_invert'.
  $field_instances['paragraphs_item-xeno_hero-bp_invert'] = array(
    'bundle' => 'xeno_hero',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'bp_invert',
    'label' => 'Invert',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-xeno_hero-bp_overlay'.
  $field_instances['paragraphs_item-xeno_hero-bp_overlay'] = array(
    'bundle' => 'xeno_hero',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'bp_overlay',
    'label' => 'Overlay',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-xeno_hero-bp_parallax'.
  $field_instances['paragraphs_item-xeno_hero-bp_parallax'] = array(
    'bundle' => 'xeno_hero',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'bp_parallax',
    'label' => 'Parallax',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-xeno_hero-bp_zoom'.
  $field_instances['paragraphs_item-xeno_hero-bp_zoom'] = array(
    'bundle' => 'xeno_hero',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'bp_zoom',
    'label' => 'Zoom',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Background');
  t('Background Image');
  t('Block');
  t('Card Content');
  t('Column Content');
  t('Column Style');
  t('Column Wrapper Content');
  t('Content');
  t('Image');
  t('Invert');
  t('Link');
  t('Overlay');
  t('Padding Bottom');
  t('Padding Horizontal');
  t('Parallax');
  t('Slide Content');
  t('Slide Interval');
  t('Text');
  t('Unrestricted');
  t('View');
  t('Width');
  t('Zoom');

  return $field_instances;
}
