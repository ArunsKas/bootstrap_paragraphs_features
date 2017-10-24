<?php

/**
 * @file
 * Default theme implementation for a single paragraph item.
 *
 * Available variables:
 * - $content: An array of content items. Use render($content) to print them
 *   all, or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity
 *   - entity-paragraphs-item
 *   - paragraphs-item-{bundle}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened into
 *   a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */
?>
<?php
  hide($content['bp_background']);
  hide($content['bp_background_image']);
  hide($content['bp_invert']);
  hide($content['bp_overlay']);
  hide($content['bp_parallax']);
  hide($content['bp_zoom']);

  $background_field = '';
  if (!empty($content['bp_background'])) {
    $background_field = ' ' . render($content['bp_background']);
  }

  $background_image_field = '';
  if (!empty($content['bp_background_image'])) {
    $background_image_field = '<div class="paragraph--type--xeno-hero__image">' . render($content['bp_background_image']) . '</div>';
  }

  $invert_field = '';
  if (!empty($content['bp_invert'])) {
    $invert_field = ' ' . render($content['bp_invert']);
  }

  $overlay_field = '';
  if (!empty($content['bp_overlay'])) {
    $overlay_field = ' data-overlay="' . render($content['bp_overlay']) . '"';
  }

  $parallax_field = '';
  if (!empty($content['bp_parallax'])) {
    $parallax_field = ' data-speed="' . render($content['bp_parallax']) . '"';
  }

  $parallax_field = '';
  if (!empty($content['bp_zoom'])) {
    $parallax_field = ' ' . render($content['bp_zoom']);
  }

  $classes_combined = '';
  $classes_combined = $classes . $background_field . $invert_field . $zoom_field;
?>
<div class="<?php print $classes_combined; ?>"<?php print $attributes; ?>>
  <?php print $background_image_field; ?>
  <?php print render($content); ?>
</div>
