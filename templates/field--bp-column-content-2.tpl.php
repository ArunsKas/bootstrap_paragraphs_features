<?php

/**
 * @file
 * Field template for Column Content 2.
 */
?>

<?php foreach ($items as $delta => $item): ?>
  <div class="paragraph--type--bp-columns-two-uneven__<?php echo count($items); ?>col-column<?php echo $delta + 1 ?>"<?php print $item_attributes[$delta]; ?>>
    <?php print render($item); ?>
  </div>
<?php endforeach; ?>

