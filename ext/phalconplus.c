
/* This file was generated automatically by Zephir do not modify it! */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <php.h>

#if PHP_VERSION_ID < 50500
#include <locale.h>
#endif

#include "php_ext.h"
#include "phalconplus.h"

#include <ext/standard/info.h>

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/fcall.h"
#include "kernel/memory.h"



zend_class_entry *phalconplus_assert_assertionfailedexception_ce;
zend_class_entry *phalconplus_base_protobuffer_ce;
zend_class_entry *phalconplus_enum_abstractenum_ce;
zend_class_entry *phalconplus_logger_processor_abstractprocessor_ce;
zend_class_entry *phalconplus_rpc_client_abstractclient_ce;
zend_class_entry *phalconplus_rpc_server_abstractserver_ce;
zend_class_entry *phalconplus_assert_assertion_ce;
zend_class_entry *phalconplus_assert_invalidargumentexception_ce;
zend_class_entry *phalconplus_base_abstractmodule_ce;
zend_class_entry *phalconplus_base_abstractrequest_ce;
zend_class_entry *phalconplus_base_backendserver_ce;
zend_class_entry *phalconplus_base_exception_ce;
zend_class_entry *phalconplus_base_model_ce;
zend_class_entry *phalconplus_base_pagable_ce;
zend_class_entry *phalconplus_base_page_ce;
zend_class_entry *phalconplus_base_protoorderby_ce;
zend_class_entry *phalconplus_base_response_ce;
zend_class_entry *phalconplus_base_service_ce;
zend_class_entry *phalconplus_base_simplerequest_ce;
zend_class_entry *phalconplus_bootstrap_ce;
zend_class_entry *phalconplus_db_mysql_ce;
zend_class_entry *phalconplus_enum_assertioncode_ce;
zend_class_entry *phalconplus_enum_exception_ce;
zend_class_entry *phalconplus_enum_orderbydirection_ce;
zend_class_entry *phalconplus_logger_adapter_fileplus_ce;
zend_class_entry *phalconplus_logger_formatter_lineplus_ce;
zend_class_entry *phalconplus_logger_processor_trace_ce;
zend_class_entry *phalconplus_logger_processor_uid_ce;
zend_class_entry *phalconplus_rpc_client_adapter_local_ce;
zend_class_entry *phalconplus_rpc_client_adapter_remote_ce;
zend_class_entry *phalconplus_volt_extension_phpfunction_ce;

ZEND_DECLARE_MODULE_GLOBALS(phalconplus)

static PHP_MINIT_FUNCTION(phalconplus)
{
#if PHP_VERSION_ID < 50500
	char* old_lc_all = setlocale(LC_ALL, NULL);
	if (old_lc_all) {
		size_t len = strlen(old_lc_all);
		char *tmp  = calloc(len+1, 1);
		if (UNEXPECTED(!tmp)) {
			return FAILURE;
		}

		memcpy(tmp, old_lc_all, len);
		old_lc_all = tmp;
	}

	setlocale(LC_ALL, "C");
#endif

	ZEPHIR_INIT(PhalconPlus_Assert_AssertionFailedException);
	ZEPHIR_INIT(PhalconPlus_Base_ProtoBuffer);
	ZEPHIR_INIT(PhalconPlus_Enum_AbstractEnum);
	ZEPHIR_INIT(PhalconPlus_Logger_Processor_AbstractProcessor);
	ZEPHIR_INIT(PhalconPlus_RPC_Client_AbstractClient);
	ZEPHIR_INIT(PhalconPlus_RPC_Server_AbstractServer);
	ZEPHIR_INIT(PhalconPlus_Assert_Assertion);
	ZEPHIR_INIT(PhalconPlus_Assert_InvalidArgumentException);
	ZEPHIR_INIT(PhalconPlus_Base_AbstractModule);
	ZEPHIR_INIT(PhalconPlus_Base_AbstractRequest);
	ZEPHIR_INIT(PhalconPlus_Base_BackendServer);
	ZEPHIR_INIT(PhalconPlus_Base_Exception);
	ZEPHIR_INIT(PhalconPlus_Base_Model);
	ZEPHIR_INIT(PhalconPlus_Base_Pagable);
	ZEPHIR_INIT(PhalconPlus_Base_Page);
	ZEPHIR_INIT(PhalconPlus_Base_ProtoOrderBy);
	ZEPHIR_INIT(PhalconPlus_Base_Response);
	ZEPHIR_INIT(PhalconPlus_Base_Service);
	ZEPHIR_INIT(PhalconPlus_Base_SimpleRequest);
	ZEPHIR_INIT(PhalconPlus_Bootstrap);
	ZEPHIR_INIT(PhalconPlus_Db_Mysql);
	ZEPHIR_INIT(PhalconPlus_Enum_AssertionCode);
	ZEPHIR_INIT(PhalconPlus_Enum_Exception);
	ZEPHIR_INIT(PhalconPlus_Enum_OrderByDirection);
	ZEPHIR_INIT(PhalconPlus_Logger_Adapter_FilePlus);
	ZEPHIR_INIT(PhalconPlus_Logger_Formatter_LinePlus);
	ZEPHIR_INIT(PhalconPlus_Logger_Processor_Trace);
	ZEPHIR_INIT(PhalconPlus_Logger_Processor_Uid);
	ZEPHIR_INIT(PhalconPlus_RPC_Client_Adapter_Local);
	ZEPHIR_INIT(PhalconPlus_RPC_Client_Adapter_Remote);
	ZEPHIR_INIT(PhalconPlus_Volt_Extension_PhpFunction);

#if PHP_VERSION_ID < 50500
	setlocale(LC_ALL, old_lc_all);
	free(old_lc_all);
#endif
	return SUCCESS;
}

#ifndef ZEPHIR_RELEASE
static PHP_MSHUTDOWN_FUNCTION(phalconplus)
{

	zephir_deinitialize_memory(TSRMLS_C);

	return SUCCESS;
}
#endif

/**
 * Initialize globals on each request or each thread started
 */
static void php_zephir_init_globals(zend_phalconplus_globals *zephir_globals TSRMLS_DC)
{
	zephir_globals->initialized = 0;

	/* Memory options */
	zephir_globals->active_memory = NULL;

	/* Virtual Symbol Tables */
	zephir_globals->active_symbol_table = NULL;

	/* Cache Enabled */
	zephir_globals->cache_enabled = 1;

	/* Recursive Lock */
	zephir_globals->recursive_lock = 0;


}

static PHP_RINIT_FUNCTION(phalconplus)
{

	zend_phalconplus_globals *zephir_globals_ptr = ZEPHIR_VGLOBAL;

	php_zephir_init_globals(zephir_globals_ptr TSRMLS_CC);
	//zephir_init_interned_strings(TSRMLS_C);

	zephir_initialize_memory(zephir_globals_ptr TSRMLS_CC);

	return SUCCESS;
}

static PHP_RSHUTDOWN_FUNCTION(phalconplus)
{

	

	zephir_deinitialize_memory(TSRMLS_C);
	return SUCCESS;
}

static PHP_MINFO_FUNCTION(phalconplus)
{
	php_info_print_box_start(0);
	php_printf("%s", PHP_PHALCONPLUS_DESCRIPTION);
	php_info_print_box_end();

	php_info_print_table_start();
	php_info_print_table_header(2, PHP_PHALCONPLUS_NAME, "enabled");
	php_info_print_table_row(2, "Author", PHP_PHALCONPLUS_AUTHOR);
	php_info_print_table_row(2, "Version", PHP_PHALCONPLUS_VERSION);
	php_info_print_table_row(2, "Powered by Zephir", "Version " PHP_PHALCONPLUS_ZEPVERSION);
	php_info_print_table_end();


}

static PHP_GINIT_FUNCTION(phalconplus)
{
	php_zephir_init_globals(phalconplus_globals TSRMLS_CC);
}

static PHP_GSHUTDOWN_FUNCTION(phalconplus)
{

}


zend_function_entry php_phalconplus_functions[] = {
ZEND_FE_END

};

zend_module_entry phalconplus_module_entry = {
	STANDARD_MODULE_HEADER_EX,
	NULL,
	NULL,
	PHP_PHALCONPLUS_EXTNAME,
	php_phalconplus_functions,
	PHP_MINIT(phalconplus),
#ifndef ZEPHIR_RELEASE
	PHP_MSHUTDOWN(phalconplus),
#else
	NULL,
#endif
	PHP_RINIT(phalconplus),
	PHP_RSHUTDOWN(phalconplus),
	PHP_MINFO(phalconplus),
	PHP_PHALCONPLUS_VERSION,
	ZEND_MODULE_GLOBALS(phalconplus),
	PHP_GINIT(phalconplus),
	PHP_GSHUTDOWN(phalconplus),
	NULL,
	STANDARD_MODULE_PROPERTIES_EX
};

#ifdef COMPILE_DL_PHALCONPLUS
ZEND_GET_MODULE(phalconplus)
#endif
