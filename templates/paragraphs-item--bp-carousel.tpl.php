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
  hide($content['field_background']);
  hide($content['field_width']);
  hide($content['field_slide_interval']);
  hide($content['field_slide_content']);

  $width_field = '';
  if (!empty($content['field_width'])) {
    $width_field = ' ' . render($content['field_width']);
  }

  $background_field = '';
  if (!empty($content['field_background'])) {
    $background_field = ' ' . render($content['field_background']);
  }

  $classes_combined = '';
  $classes_combined = $classes . $background_field . $width_field . 'carousel slide';

  $slide_interval_field = '';
  if (!empty($content['field_slide_interval'])) {
    $slide_interval_field = ' data-interval="' . render($content['field_slide_interval']) . '"';
  }
?>

<div class="<?php print $classes_combined; ?>"<?php print $attributes; ?> data-ride="carousel"<?php print $slide_interval_field; ?>>
  <?php if(count($content['field_slide_content']['#items']) > 1): ?>
    <ol class="carousel-indicators">
      <?php
        $slide_content = count($content['field_slide_content']['#items']);
        for($item = 0; $item < $slide_content; $item += 1){
          if(render($content['field_slide_content'][$item]) != ''){
            if ($item === 0) {
              print '<li class="active" data-slide-to="' . $item . '" data-target="#' . $paragraph_id . '"></li>';
            }
            else {
              print '<li class="" data-slide-to="' . $item . '" data-target="#' . $paragraph_id . '"></li>';
            }
          }
        }
      ?>
  <?php endif?>
  </ol>
  <div class="carousel-inner" role="list">
    <?php
      $slide_content = count($content['field_slide_content']['#items']);
      for($item = 0; $item < $slide_content; $item += 1){
        if(render($content['field_slide_content'][$item]) != ''){
          if ($item === 0) {
            print '<div class="paragraph--layout-slideshow__slide-' . $item . ' item carousel-item active" role="listitem">';
            print render($content['field_slide_content'][$item]);
            print '</div>';
          }
          else {
            print '<div class="paragraph--layout-slideshow__slide-' . $item . ' item carousel-item" role="listitem">';
            print render($content['field_slide_content'][$item]);
            print '</div>';
          }
        }
      }
    ?>
  </div>
  <?php if(count($content['field_slide_content']['#items']) > 1): ?>
  <a class="left carousel-control" href="#<?php print $paragraph_id ?>" role="button" data-slide="prev">
    <span class="glyphicon glyphicon-chevron-left" aria-hidden="true"></span>
    <span class="sr-only">Previous</span>
  </a>
  <a class="right carousel-control" href="#<?php print $paragraph_id ?>" role="button" data-slide="next">
    <span class="glyphicon glyphicon-chevron-right" aria-hidden="true"></span>
    <span class="sr-only">Next</span>
  </a>
  <?php endif?>
</div>
