<?php

/**
 * @file
 * bootstrap_paragraphs_features.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function bootstrap_paragraphs_features_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'bp_background'.
  $field_bases['bp_background'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'bp_background',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'paragraph-color paragraph-color--gooddata-black' => 'GoodData Black',
        'paragraph-color paragraph-color--gooddata-grey' => 'GoodData Grey',
        'paragraph-color paragraph-color--gooddata-grey-light' => 'GoodData Light Grey',
        'paragraph-color paragraph-gradient--dark-to-light' => 'Dark to Light Gradient',
        'paragraph-color paragraph-gradient--dark-to-light-to-dark' => 'Dark to Light to Dark Gradient',
        'paragraph-color paragraph-gradient--blue-dark' => 'Dark Blue Gradient',
        'paragraph-color paragraph-gradient--blue-light' => 'Light Blue Gradient',
        'paragraph-color paragraph-gradient--blue-dotted-world' => 'Light Blue Gradient with Dotted World',
        'paragraph-color paragraph-gradient--blue-box-shadow' => 'Light Blue Gradient with Box Shadow',
        'paragraph--color paragraph--color--rgba-black-slight' => 'Black slight',
        'paragraph--color paragraph--color--rgba-black-light' => 'Black light',
        'paragraph--color paragraph--color--rgba-black-strong' => 'Black strong',
        'paragraph--color paragraph--color--rgba-blue-slight' => 'Blue slight',
        'paragraph--color paragraph--color--rgba-blue-light' => 'Blue light',
        'paragraph--color paragraph--color--rgba-blue-strong' => 'Blue strong',
        'paragraph--color paragraph--color--rgba-bluegrey-slight' => 'Bluegrey slight',
        'paragraph--color paragraph--color--rgba-bluegrey-light' => 'Bluegrey light',
        'paragraph--color paragraph--color--rgba-bluegrey-strong' => 'Bluegrey strong',
        'paragraph--color paragraph--color--rgba-brown-slight' => 'Brown slight',
        'paragraph--color paragraph--color--rgba-brown-light' => 'Brown light',
        'paragraph--color paragraph--color--rgba-brown-strong' => 'Brown strong',
        'paragraph--color paragraph--color--rgba-cyan-slight' => 'Cyan slight',
        'paragraph--color paragraph--color--rgba-cyan-light' => 'Cyan light',
        'paragraph--color paragraph--color--rgba-cyan-strong' => 'Cyan strong',
        'paragraph--color paragraph--color--rgba-green-slight' => 'Green slight',
        'paragraph--color paragraph--color--rgba-green-light' => 'Green light',
        'paragraph--color paragraph--color--rgba-green-strong' => 'Green strong',
        'paragraph--color paragraph--color--rgba-grey-slight' => 'Grey slight',
        'paragraph--color paragraph--color--rgba-grey-light' => 'Grey light',
        'paragraph--color paragraph--color--rgba-grey-strong' => 'Grey strong',
        'paragraph--color paragraph--color--rgba-indigo-slight' => 'Indigo slight',
        'paragraph--color paragraph--color--rgba-indigo-light' => 'Indigo light',
        'paragraph--color paragraph--color--rgba-indigo-strong' => 'Indigo strong',
        'paragraph--color paragraph--color--rgba-lime-slight' => 'Lime slight',
        'paragraph--color paragraph--color--rgba-lime-light' => 'Lime light',
        'paragraph--color paragraph--color--rgba-lime-strong' => 'Lime strong',
        'paragraph--color paragraph--color--rgba-orange-slight' => 'Orange slight',
        'paragraph--color paragraph--color--rgba-orange-light' => 'Orange light',
        'paragraph--color paragraph--color--rgba-orange-strong' => 'Orange strong',
        'paragraph--color paragraph--color--rgba-pink-slight' => 'Pink slight',
        'paragraph--color paragraph--color--rgba-pink-light' => 'Pink light',
        'paragraph--color paragraph--color--rgba-pink-strong' => 'Pink strong',
        'paragraph--color paragraph--color--rgba-purple-slight' => 'Purple slight',
        'paragraph--color paragraph--color--rgba-purple-light' => 'Purple light',
        'paragraph--color paragraph--color--rgba-purple-strong' => 'Purple strong',
        'paragraph--color paragraph--color--rgba-red-slight' => 'Red slight',
        'paragraph--color paragraph--color--rgba-red-light' => 'Red light',
        'paragraph--color paragraph--color--rgba-red-strong' => 'Red strong',
        'paragraph--color paragraph--color--rgba-stylish-slight' => 'Stylish slight',
        'paragraph--color paragraph--color--rgba-stylish-light' => 'Stylish light',
        'paragraph--color paragraph--color--rgba-stylish-strong' => 'Stylish strong',
        'paragraph--color paragraph--color--rgba-teal-slight' => 'Teal slight',
        'paragraph--color paragraph--color--rgba-teal-light' => 'Teal light',
        'paragraph--color paragraph--color--rgba-teal-strong' => 'Teal strong',
        'paragraph--color paragraph--color--rgba-white-slight' => 'White slight',
        'paragraph--color paragraph--color--rgba-white-light' => 'White light',
        'paragraph--color paragraph--color--rgba-white-strong' => 'White strong',
        'paragraph--color paragraph--color--rgba-yellow-slight' => 'Yellow slight',
        'paragraph--color paragraph--color--rgba-yellow-light' => 'Yellow light',
        'paragraph--color paragraph--color--rgba-yellow-strong' => 'Yellow strong',
        'paragraph--color--transparent' => 'Transparent',
        'paragraph--color paragraph--color--primary' => 'Brand Primary Color',
        'paragraph--color paragraph--color--secondary' => 'Brand Secondary Color',
        'paragraph--color paragraph--color--success' => 'Brand Success Color',
        'paragraph--color paragraph--color--info' => 'Brand Info Color',
        'paragraph--color paragraph--color--warning' => 'Brand Warning Color',
        'paragraph--color paragraph--color--danger' => 'Brand Danger Color',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'bp_background_image'.
  $field_bases['bp_background_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'bp_background_image',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'bp_block'.
  $field_bases['bp_block'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'bp_block',
    'indexes' => array(
      'moddelta' => array(
        0 => 'moddelta',
      ),
    ),
    'locked' => 0,
    'module' => 'blockreference',
    'settings' => array(
      'referenceable_modules' => array(),
    ),
    'translatable' => 0,
    'type' => 'blockreference',
  );

  // Exported field_base: 'bp_image'.
  $field_bases['bp_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'bp_image',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'bp_card_content'.
  $field_bases['bp_card_content'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'bp_card_content',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  // Exported field_base: 'bp_column_content'.
  $field_bases['bp_column_content'] = array(
    'active' => 1,
    'cardinality' => 6,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'bp_column_content',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  // Exported field_base: 'bp_column_content_2'.
  $field_bases['bp_column_content_2'] = array(
    'active' => 1,
    'cardinality' => 2,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'bp_column_content_2',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  // Exported field_base: 'bp_column_content_3'.
  $field_bases['bp_column_content_3'] = array(
    'active' => 1,
    'cardinality' => 3,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'bp_column_content_3',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  // Exported field_base: 'bp_column_content_w'.
  $field_bases['bp_column_content_w'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'bp_column_content_w',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  // Exported field_base: 'bp_column_style_2'.
  $field_bases['bp_column_style_2'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'bp_column_style_2',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'paragraph--style--75-25' => '3/4 - 1/4',
        'paragraph--style--66-33' => '2/3 - 1/3',
        'paragraph--style--25-75' => '1/4 - 3/4',
        'paragraph--style--33-66' => '1/3 - 2/3',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'bp_column_style_3'.
  $field_bases['bp_column_style_3'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'bp_column_style_3',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'paragraph--style--25-50-25' => '1/4 - 1/2 - 1/4',
        'paragraph--style--50-25-25' => '1/2 - 1/4 - 1/4',
        'paragraph--style--25-25-50' => '1/4 - 1/4 - 1/2',
        'paragraph--style--16-66-16' => '1/6 - 2/3 - 1/6',
        'paragraph--style--66-16-16' => '2/3 - 1/6 - 1/6',
        'paragraph--style--16-16-66' => '1/6 - 1/6 - 2/3',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'bp_content'.
  $field_bases['bp_content'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'bp_content',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  // Exported field_base: 'bp_image'.
  $field_bases['bp_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'bp_image',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => FALSE,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'bp_invert'.
  $field_bases['bp_invert'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'bp_invert',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'invert' => 'Invert',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'bp_link'.
  $field_bases['bp_link'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'bp_link',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'bp_overlay'.
  $field_bases['bp_overlay'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'bp_overlay',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        9 => '9 - Darkest',
        8 => 8,
        7 => 7,
        6 => 6,
        5 => 5,
        4 => 4,
        3 => 3,
        2 => 2,
        1 => '1 - Lightest',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'bp_padding_b'.
  $field_bases['bp_padding_b'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'bp_padding_b',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'paragraph--padding-bottom--on' => 'On',
        'paragraph--padding-bottom--off' => 'Off',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'bp_padding_h'.
  $field_bases['bp_padding_h'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'bp_padding_h',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'paragraph--padding-horizontal--small' => 'Small',
        'paragraph--padding-horizontal--medium' => 'Medium',
        'paragraph--padding-horizontal--large' => 'Large',
        'paragraph--padding-horizontal--x-large' => 'X-Large',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'bp_parallax'.
  $field_bases['bp_parallax'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'bp_parallax',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'fixed' => 'Fixed',
        6 => 'Slowest',
        5 => 'Slower',
        4 => 'Slow',
        3 => 'Fast',
        2 => 'Faster',
        1 => 'Fastest',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'bp_slide_content'.
  $field_bases['bp_slide_content'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'bp_slide_content',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  // Exported field_base: 'bp_slide_interval'.
  $field_bases['bp_slide_interval'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'bp_slide_interval',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'false' => 'None',
        1000 => '1 Second',
        2000 => '2 Seconds',
        3000 => '3 Seconds',
        4000 => '4 Seconds',
        5000 => '5 Seconds',
        6000 => '6 Seconds',
        7000 => '7 Seconds',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'bp_text'.
  $field_bases['bp_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'bp_text',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'bp_unrestricted'.
  $field_bases['bp_unrestricted'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'bp_unrestricted',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'bp_view'.
  $field_bases['bp_view'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'bp_view',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'viewfield',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'viewfield',
  );

  // Exported field_base: 'bp_width'.
  $field_bases['bp_width'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'bp_width',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'paragraph--width--tiny' => 'Tiny',
        'paragraph--width--narrow' => 'Narrow',
        'paragraph--width--medium' => 'Medium',
        'paragraph--width--wide' => 'Wide',
        'paragraph--width--full' => 'Full Screen',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'bp_zoom'.
  $field_bases['bp_zoom'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'bp_zoom',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        6 => 'Slowest',
        5 => 'Slower',
        4 => 'Slow',
        3 => 'Fast',
        2 => 'Faster',
        1 => 'Fastest',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
