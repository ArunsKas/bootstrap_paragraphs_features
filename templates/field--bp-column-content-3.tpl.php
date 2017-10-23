<?php

/**
 * @file
 * Field template for Column Content 3.
 */
?>

<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php if (!$label_hidden): ?>
    <div<?php print $title_attributes; ?>><?php print $label ?>:&nbsp;</div>
  <?php endif; ?>
  <div<?php print $content_attributes; ?>>
    <?php foreach ($items as $delta => $item): ?>
      <div class="paragraph--type--bp-columns-three-uneven__<?php echo count($items); ?>col-column<?php echo $delta + 1 ?>"<?php print $item_attributes[$delta]; ?>>
        <?php print render($item); ?>
      </div>
    <?php endforeach; ?>
  </div>
</div>
