<?php 

/**
 * Implementation of hook_default_page_manager_handlers().
 * 
 * contains the following:
 * 
 * page_front_panel_panel_context_2
 * page_user_library_status_panel_context_2
 * page_search_results_panel_context_2
 * page_ting_collection_view_panel_context_2
 * page_ting_object_view_panel_context_3
 * 
 */
function ding_mobile_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front_panel_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'front_panel';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'mobile',
    'no_blocks' => 0,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'pipeline' => 'standard',
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'php',
          'settings' => array(
            'description' => '',
            'php' => 'if (mobile_tools_is_mobile_site() == \'mobile\') {
    return true;
  }
  return false;',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    ),
  );
  $display = new panels_display;
  $display->api_version = 1;
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->api_version = 1;
    $pane->pid = 'new-1';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'mobile_articles-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link_to_view' => 0,
      'more_link' => 1,
      'path' => 'artikler',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'graybox-btns',
    );
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['middle'][0] = 'new-1';
    $pane = new stdClass;
    $pane->api_version = 1;
    $pane->pid = 'new-2';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'mobile_events-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'path' => 'arrangementer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'graybox-btns',
    );
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-2'] = $pane;
    $display->panels['middle'][1] = 'new-2';
    $pane = new stdClass;
    $pane->api_version = 1;
    $pane->pid = 'new-3';
    $pane->panel = 'middle';
    $pane->type = 'relevant';
    $pane->subtype = 'relevant_campaigns';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'empty',
        1 => 'empty',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '1800',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-3'] = $pane;
    $display->panels['middle'][2] = 'new-3';
    $pane = new stdClass;
    $pane->api_version = 1;
    $pane->pid = 'new-4';
    $pane->panel = 'middle';
    $pane->type = 'carousel';
    $pane->subtype = 'carousel';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $display->content['new-4'] = $pane;
    $display->panels['middle'][3] = 'new-4';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  
  $export['page_front_panel_panel_context_2'] = $handler;
  
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_user_library_status_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'user_library_status';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'mobile',
    'no_blocks' => 0,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'pipeline' => 'standard',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => '',
            'php' => 'if (mobile_tools_is_mobile_site() == \'mobile\') {
    return true;
  }
  return false;',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display;
  $display->api_version = 1;
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->api_version = 1;
    $pane->pid = 'new-1';
    $pane->panel = 'middle';
    $pane->type = 'profile';
    $pane->subtype = 'ding_library_user_loan_list_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_uid_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['middle'][0] = 'new-1';
    $pane = new stdClass;
    $pane->api_version = 1;
    $pane->pid = 'new-2';
    $pane->panel = 'middle';
    $pane->type = 'reservation_list';
    $pane->subtype = 'ding_reservation_list_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_uid_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'reservation',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-2'] = $pane;
    $display->panels['middle'][1] = 'new-2';
    $pane = new stdClass;
    $pane->api_version = 1;
    $pane->pid = 'new-3';
    $pane->panel = 'middle';
    $pane->type = 'booking_list';
    $pane->subtype = 'ding_booking_list_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_uid_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-3'] = $pane;
    $display->panels['middle'][2] = 'new-3';
    $pane = new stdClass;
    $pane->api_version = 1;
    $pane->pid = 'new-4';
    $pane->panel = 'middle';
    $pane->type = 'relevant';
    $pane->subtype = 'relevant_campaigns';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'empty',
        1 => 'empty',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $display->content['new-4'] = $pane;
    $display->panels['middle'][3] = 'new-4';
    $pane = new stdClass;
    $pane->api_version = 1;
    $pane->pid = 'new-5';
    $pane->panel = 'middle';
    $pane->type = 'debt_list';
    $pane->subtype = 'ding_debt_notice';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_uid_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $display->content['new-5'] = $pane;
    $display->panels['middle'][4] = 'new-5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1';
  $handler->conf['display'] = $display;
   
  $export['page_user_library_status_panel_context_2'] = $handler;
  
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_search_results_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'search_results';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'mobile',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => '',
            'php' => 'if (mobile_tools_is_mobile_site() == \'mobile\') {
    return true;
  }
  return false;',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display;
  $display->api_version = 1;
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->api_version = 1;
    $pane->pid = 'new-1';
    $pane->panel = 'middle';
    $pane->type = 'result';
    $pane->subtype = 'result';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_string_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['middle'][0] = 'new-1';
    $pane = new stdClass;
    $pane->api_version = 1;
    $pane->pid = 'new-2';
    $pane->panel = 'middle';
    $pane->type = 'relevant';
    $pane->subtype = 'relevant_campaigns';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'empty',
        1 => 'empty',
        2 => 'argument_string_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-2'] = $pane;
    $display->panels['middle'][1] = 'new-2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;

  $export['page_search_results_panel_context_2'] = $handler;
  
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ting_collection_view_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'ting_collection_view';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'mobile',
    'no_blocks' => 0,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'pipeline' => 'standard',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => '',
            'php' => 'if (mobile_tools_is_mobile_site() == \'mobile\') {
    return true;
  }
  return false;',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display;
  $display->api_version = 1;
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%collection_id:title_full';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->api_version = 1;
    $pane->pid = 'new-1';
    $pane->panel = 'middle';
    $pane->type = 'collection_view';
    $pane->subtype = 'collection_view';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_collection_id_1',
        1 => 'argument_string_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['middle'][0] = 'new-1';
    $pane = new stdClass;
    $pane->api_version = 1;
    $pane->pid = 'new-2';
    $pane->panel = 'middle';
    $pane->type = 'recommendation_list';
    $pane->subtype = 'recommendation_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'empty',
        1 => 'argument_collection_id_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Andre der har lånt',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'graybox-btns reset-list',
    );
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-2'] = $pane;
    $display->panels['middle'][1] = 'new-2';
    $pane = new stdClass;
    $pane->api_version = 1;
    $pane->pid = 'new-3';
    $pane->panel = 'middle';
    $pane->type = 'relevant';
    $pane->subtype = 'relevant_campaigns';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'empty',
        1 => 'empty',
        2 => 'empty',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-3'] = $pane;
    $display->panels['middle'][2] = 'new-3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1';
  $handler->conf['display'] = $display;
    
  $export['page_ting_collection_view_panel_context_2'] = $handler;
  
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ting_object_view_panel_context_3';
  $handler->task = 'page';
  $handler->subtask = 'ting_object_view';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'mobile',
    'no_blocks' => 0,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'pipeline' => 'standard',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => '',
            'php' => 'if (mobile_tools_is_mobile_site() == \'mobile\') {
    return true;
  }
  return false;',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display;
  $display->api_version = 1;
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%object_id:title_full';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->api_version = 1;
    $pane->pid = 'new-1';
    $pane->panel = 'middle';
    $pane->type = 'object_view';
    $pane->subtype = 'object_view';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_object_id_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'clearfix',
    );
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['middle'][0] = 'new-1';
    $pane = new stdClass;
    $pane->api_version = 1;
    $pane->pid = 'new-2';
    $pane->panel = 'middle';
    $pane->type = 'recommendation_list';
    $pane->subtype = 'recommendation_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_object_id_1',
        1 => 'empty',
      ),
      'override_title' => 1,
      'override_title_text' => 'Andre der har lånt',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'graybox-btns reset-list',
    );
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-2'] = $pane;
    $display->panels['middle'][1] = 'new-2';
    $pane = new stdClass;
    $pane->api_version = 1;
    $pane->pid = 'new-3';
    $pane->panel = 'middle';
    $pane->type = 'relevant';
    $pane->subtype = 'relevant_campaigns';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'empty',
        1 => 'empty',
        2 => 'empty',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-3'] = $pane;
    $display->panels['middle'][2] = 'new-3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
    
  $export['page_ting_object_view_panel_context_3'] = $handler;
  
  return $export;
}