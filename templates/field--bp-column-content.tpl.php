<?php

/**
 * @file
 * Field template for Column Content.
 */
?>

<?php foreach ($items as $delta => $item): ?>
  <div class="paragraph--type--bp-columns__<?php echo count($items); ?>col"<?php print $item_attributes[$delta]; ?>>
    <?php print render($item); ?>
  </div>
<?php endforeach; ?>

