<?php

/**
 * @file
 * Field template for Column Content 3.
 */
?>

<?php foreach ($items as $delta => $item): ?>
  <div class="paragraph--type--bp-columns-three-uneven__<?php echo count($items); ?>col-column<?php echo $delta + 1 ?>"<?php print $item_attributes[$delta]; ?>>
    <?php print render($item); ?>
  </div>
<?php endforeach; ?>
