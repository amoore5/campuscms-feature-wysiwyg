; Drupal version
core = 7.x
api = 2

; Contrib modules
projects[entity] = 1.0-beta11
projects[wysiwyg][version] = 2.1
projects[wysiwyg][patch][http://drupal.org/files/issues/wysiwyg-7.x-2.x-entity-exportables-624018-208_drush_make.patch] = http://drupal.org/files/issues/wysiwyg-7.x-2.x-entity-exportables-624018-208_drush_make.patch
; Ckeditor
libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.1/ckeditor_3.6.1.tar.gz"
libraries[ckeditor][directory_name] = "ckeditor"