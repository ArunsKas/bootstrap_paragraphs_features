<?php
/**
 * @file
 * bootstrap_paragraphs_features.features.inc
 */

/**
 * Implements hook_paragraphs_info().
 */
function bootstrap_paragraphs_features_paragraphs_info() {
  $items = array(
    'bp_blank' => array(
      'name' => 'Blank',
      'bundle' => 'bp_blank',
      'locked' => '1',
    ),
    'bp_block' => array(
      'name' => 'Drupal Block',
      'bundle' => 'bp_block',
      'locked' => '1',
    ),
    'bp_card' => array(
      'name' => 'Card',
      'bundle' => 'bp_card',
      'locked' => '1',
    ),
    'bp_carousel' => array(
      'name' => 'Carousel',
      'bundle' => 'bp_carousel',
      'locked' => '1',
    ),
    'bp_column_wrapper' => array(
      'name' => 'Column Wrapper',
      'bundle' => 'bp_column_wrapper',
      'locked' => '1',
    ),
    'bp_columns' => array(
      'name' => 'Columns',
      'bundle' => 'bp_columns',
      'locked' => '1',
    ),
    'bp_columns_three_uneven' => array(
      'name' => 'Columns (Three Uneven)',
      'bundle' => 'bp_columns_three_uneven',
      'locked' => '1',
    ),
    'bp_columns_two_uneven' => array(
      'name' => 'Columns (Two Uneven)',
      'bundle' => 'bp_columns_two_uneven',
      'locked' => '1',
    ),
    'bp_image' => array(
      'name' => 'Image',
      'bundle' => 'bp_image',
      'locked' => '1',
    ),
    'bp_simple' => array(
      'name' => 'Simple',
      'bundle' => 'bp_simple',
      'locked' => '1',
    ),
    'bp_view' => array(
      'name' => 'View',
      'bundle' => 'bp_view',
      'locked' => '1',
    ),
    'xeno_hero' => array(
      'name' => 'Hero',
      'bundle' => 'xeno_hero',
      'locked' => '1',
    ),
  );
  return $items;
}
