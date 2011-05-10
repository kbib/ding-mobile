<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function ding_mobile_news_imagecache_default_presets() {
  $items = array(
    'mobile-list-image' => array(
      'presetname' => 'mobile-list-image',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '800px',
            'height' => '248px',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function ding_mobile_news_views_api() {
  return array(
    'api' => '2',
  );
}
