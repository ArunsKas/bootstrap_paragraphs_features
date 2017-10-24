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
  hide($content['bp_width']);
  hide($content['bp_column_style_3']);

  $width_field = '';
  if (!empty($content['bp_width'])) {
    $width_field = ' ' . render($content['bp_width']);
  }

  $background_field = '';
  if (!empty($content['bp_background'])) {
    $background_field = ' ' . render($content['bp_background']);
  }

  $column_field = '';
  if (!empty($content['bp_column_style_3'])) {
    $column_field = ' ' . render($content['bp_column_style_3']);
  }

  $classes_combined = '';
  $classes_combined = $classes . $background_field . $width_field . $column_field;
?>
<div class="<?php print $classes_combined; ?>"<?php print $attributes; ?>>
  <div class="paragraph__column"<?php print $content_attributes; ?>>
    <?php print render($content); ?>
  </div>
</div>
