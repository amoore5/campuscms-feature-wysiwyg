<?php
/**
 * @file
 * campuscms_feature_wysiwyg.features.inc
 */


/**
 * Implementation of hook_default_wysiwyg_profile().
 */
function campuscms_feature_wysiwyg_default_wysiwyg_profile() {
  $items = array();
  $items['full_html'] = entity_import('wysiwyg_profile', '{
    "format" : "full_html",
    "editor" : "ckeditor",
    "settings" : {
      "default" : 1,
      "user_choose" : 0,
      "show_toggle" : 1,
      "theme" : "advanced",
      "language" : "en",
      "buttons" : {
        "default" : {
          "Bold" : 1,
          "Italic" : 1,
          "JustifyLeft" : 1,
          "JustifyCenter" : 1,
          "JustifyRight" : 1,
          "BulletedList" : 1,
          "NumberedList" : 1,
          "Outdent" : 1,
          "Indent" : 1,
          "Undo" : 1,
          "Redo" : 1,
          "Link" : 1,
          "Unlink" : 1,
          "Anchor" : 1,
          "Superscript" : 1,
          "Blockquote" : 1,
          "Source" : 1,
          "HorizontalRule" : 1,
          "Cut" : 1,
          "Copy" : 1,
          "Paste" : 1,
          "PasteText" : 1,
          "PasteFromWord" : 1,
          "ShowBlocks" : 1,
          "RemoveFormat" : 1,
          "SpecialChar" : 1,
          "Format" : 1,
          "Table" : 1,
          "SelectAll" : 1,
          "Find" : 1,
          "Replace" : 1,
          "CreateDiv" : 1,
          "SpellChecker" : 1,
          "Scayt" : 1
        },
        "drupal" : { "break" : 1 }
      },
      "toolbar_loc" : "top",
      "toolbar_align" : "left",
      "path_loc" : "none",
      "resizing" : 1,
      "verify_html" : 1,
      "preformatted" : 0,
      "convert_fonts_to_spans" : 1,
      "remove_linebreaks" : 1,
      "apply_source_formatting" : 1,
      "paste_auto_cleanup_on_paste" : 1,
      "block_formats" : "p,h2,h3,h4,div",
      "css_setting" : "theme",
      "css_path" : "",
      "css_classes" : ""
    }
  }');
  $items['filtered_html'] = entity_import('wysiwyg_profile', '{
    "format" : "filtered_html",
    "editor" : "ckeditor",
    "settings" : {
      "default" : 1,
      "user_choose" : 0,
      "show_toggle" : 1,
      "theme" : "advanced",
      "language" : "en",
      "buttons" : {
        "default" : {
          "Bold" : 1,
          "Italic" : 1,
          "JustifyLeft" : 1,
          "JustifyCenter" : 1,
          "JustifyRight" : 1,
          "BulletedList" : 1,
          "NumberedList" : 1,
          "Outdent" : 1,
          "Indent" : 1,
          "Undo" : 1,
          "Redo" : 1,
          "Link" : 1,
          "Unlink" : 1,
          "Anchor" : 1,
          "Superscript" : 1,
          "Blockquote" : 1,
          "Source" : 1,
          "HorizontalRule" : 1,
          "Cut" : 1,
          "Copy" : 1,
          "Paste" : 1,
          "PasteText" : 1,
          "PasteFromWord" : 1,
          "ShowBlocks" : 1,
          "RemoveFormat" : 1,
          "SpecialChar" : 1,
          "Format" : 1,
          "Table" : 1,
          "SelectAll" : 1,
          "Find" : 1,
          "Replace" : 1,
          "CreateDiv" : 1,
          "SpellChecker" : 1,
          "Scayt" : 1
        },
        "drupal" : { "break" : 1 }
      },
      "toolbar_loc" : "top",
      "toolbar_align" : "left",
      "path_loc" : "none",
      "resizing" : 1,
      "verify_html" : 1,
      "preformatted" : 0,
      "convert_fonts_to_spans" : 1,
      "remove_linebreaks" : 1,
      "apply_source_formatting" : 1,
      "paste_auto_cleanup_on_paste" : 1,
      "block_formats" : "p,h2,h3,h4,div",
      "css_setting" : "theme",
      "css_path" : "",
      "css_classes" : ""
    }
  }');
  return $items;
}


