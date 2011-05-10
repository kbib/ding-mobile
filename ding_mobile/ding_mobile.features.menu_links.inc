<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function ding_mobile_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-bottom-menu:<front>
  $menu_links['menu-bottom-menu:<front>'] = array(
    'menu_name' => 'menu-bottom-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Åbningstider',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-mobile-menu:<front>
  $menu_links['menu-mobile-menu:<front>'] = array(
    'menu_name' => 'menu-mobile-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Kontakt os',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'flere',
  );
  // Exported menu link: menu-mobile-menu:arrangementer
  $menu_links['menu-mobile-menu:arrangementer'] = array(
    'menu_name' => 'menu-mobile-menu',
    'link_path' => 'arrangementer',
    'router_path' => 'arrangementer',
    'link_title' => 'Arrangementer',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-mobile-menu:artikler
  $menu_links['menu-mobile-menu:artikler'] = array(
    'menu_name' => 'menu-mobile-menu',
    'link_path' => 'artikler',
    'router_path' => 'artikler',
    'link_title' => 'Nyheder',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-mobile-menu:flere
  $menu_links['menu-mobile-menu:flere'] = array(
    'menu_name' => 'menu-mobile-menu',
    'link_path' => 'flere',
    'router_path' => 'flere',
    'link_title' => 'Flere',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-mobile-menu:user/status
  $menu_links['menu-mobile-menu:user/status'] = array(
    'menu_name' => 'menu-mobile-menu',
    'link_path' => 'user/status',
    'router_path' => 'user/status',
    'link_title' => 'Min Konto',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Arrangementer');
  t('Flere');
  t('Kontakt os');
  t('Min Konto');
  t('Nyheder');
  t('Åbningstider');


  return $menu_links;
}
