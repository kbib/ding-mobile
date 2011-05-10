<?php

/**
 * Implementation of hook_strongarm().
 */
function ding_mobile_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile-tools-theme-switch';
  $strongarm->value = 'mobile-tools-mobile-url';

  $export['mobile-tools-theme-switch'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_notification';
  $strongarm->value = '<a href="">Mobile View</a>';

  $export['mobile_notification'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_tools_android_enable';
  $strongarm->value = 0;

  $export['mobile_tools_android_enable'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_tools_android_theme';
  $strongarm->value = 'dynamo';

  $export['mobile_tools_android_theme'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_tools_blackberry_enable';
  $strongarm->value = 0;

  $export['mobile_tools_blackberry_enable'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_tools_blackberry_theme';
  $strongarm->value = 'dynamo';

  $export['mobile_tools_blackberry_theme'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_tools_cookie_session';
  $strongarm->value = '2592000';

  $export['mobile_tools_cookie_session'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_tools_desktop_url';
  $strongarm->value = 'http://kbib.dev';

  $export['mobile_tools_desktop_url'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_tools_ipad_enable';
  $strongarm->value = 0;

  $export['mobile_tools_ipad_enable'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_tools_ipad_theme';
  $strongarm->value = 'dynamo';

  $export['mobile_tools_ipad_theme'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_tools_iphone_enable';
  $strongarm->value = 0;

  $export['mobile_tools_iphone_enable'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_tools_iphone_theme';
  $strongarm->value = 'dynamo';

  $export['mobile_tools_iphone_theme'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_tools_ipod_enable';
  $strongarm->value = 0;

  $export['mobile_tools_ipod_enable'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_tools_ipod_theme';
  $strongarm->value = 'dynamo';

  $export['mobile_tools_ipod_theme'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_tools_mobile_url';
  $strongarm->value = 'http://m.kbib.dev';

  $export['mobile_tools_mobile_url'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_tools_opera_mini_enable';
  $strongarm->value = 0;

  $export['mobile_tools_opera_mini_enable'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_tools_opera_mini_theme';
  $strongarm->value = 'dynamo';

  $export['mobile_tools_opera_mini_theme'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_tools_redirect';
  $strongarm->value = 0;

  $export['mobile_tools_redirect'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_tools_redirect_exceptions';
  $strongarm->value = '';

  $export['mobile_tools_redirect_exceptions'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_tools_redirect_exceptions_type';
  $strongarm->value = 'not-redirect';

  $export['mobile_tools_redirect_exceptions_type'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mobile_tools_theme_name';
  $strongarm->value = 'mkolding';

  $export['mobile_tools_theme_name'] = $strongarm;
  return $export;
}
