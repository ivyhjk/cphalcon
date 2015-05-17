
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/fcall.h"
#include "kernel/memory.h"


/**
 * Phalcon\Forms\Element\TextArea
 *
 * Component TEXTAREA for forms
 */
ZEPHIR_INIT_CLASS(Phalcon_Forms_Element_TextArea) {

	ZEPHIR_REGISTER_CLASS_EX(Phalcon\\Forms\\Element, TextArea, phalcon, forms_element_textarea, phalcon_forms_element_ce, phalcon_forms_element_textarea_method_entry, 0);

	zend_class_implements(phalcon_forms_element_textarea_ce TSRMLS_CC, 1, phalcon_forms_elementinterface_ce);
	return SUCCESS;

}

/**
 * Renders the element widget
 *
 * @param array attributes
 * @return string
 */
PHP_METHOD(Phalcon_Forms_Element_TextArea, render) {

	int ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_0 = NULL;
	zval *attributes = NULL, *_1 = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &attributes);

	if (!attributes) {
		attributes = ZEPHIR_GLOBAL(global_null);
	}


	ZEPHIR_CALL_METHOD(&_1, this_ptr, "prepareattributes", NULL, 0, attributes);
	zephir_check_call_status();
	ZEPHIR_RETURN_CALL_CE_STATIC(phalcon_tag_ce, "textarea", &_0, 183, _1);
	zephir_check_call_status();
	RETURN_MM();

}

