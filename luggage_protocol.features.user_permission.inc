<?php
/**
 * @file
 * luggage_protocol.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function luggage_protocol_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create protocols content'.
  $permissions['create protocols content'] = array(
    'name' => 'create protocols content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any protocols content'.
  $permissions['delete any protocols content'] = array(
    'name' => 'delete any protocols content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own protocols content'.
  $permissions['delete own protocols content'] = array(
    'name' => 'delete own protocols content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any protocols content'.
  $permissions['edit any protocols content'] = array(
    'name' => 'edit any protocols content',
    'roles' => array(
      'content editor' => 'content editor',
      'content publisher' => 'content publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own protocols content'.
  $permissions['edit own protocols content'] = array(
    'name' => 'edit own protocols content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
