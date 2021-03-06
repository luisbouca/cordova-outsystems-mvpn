//
//  CtxLoggerConstants.h
//  Citrix Logger Framework
//
//  Copyright (c) 2019 Citrix Systems, Inc. All rights reserved.
//

// Current logger version
#define CTXLOG_CURRENT_LOGGER_VERSION       @"2.3.9"

// Modes can be OR'd together
#define CTXLOG_MODE_FILE		0x0001
#define CTXLOG_MODE_CONSOLE		0x0002
#define CTXLOG_MODE_REMOTE		0x0004

// Modes names
#define CTXLOG_MODENAME_FILE		"file"
#define CTXLOG_MODENAME_CONSOLE		"console"
#define CTXLOG_MODENAME_REMOTE		"remote"

// Activity message classes
#define CTXLOG_MSG_CRITICAL			1
#define CTXLOG_MSG_ERROR			2
#define CTXLOG_MSG_WARNING			3
#define CTXLOG_MSG_INFO				4
#define CTXLOG_MSG_DETAIL			5

// Diagnostic message classes
#define CTXLOG_LVL_NOTHING      0
#define CTXLOG_LVL_CRITICAL		CTXLOG_MSG_CRITICAL
#define CTXLOG_LVL_ERROR		CTXLOG_MSG_ERROR
#define CTXLOG_LVL_WARNING		CTXLOG_MSG_WARNING
#define CTXLOG_LVL_INFO			CTXLOG_MSG_INFO
#define CTXLOG_LVL_DETAIL		CTXLOG_MSG_DETAIL
#define CTXLOG_LVL_DEBUG1		6
#define CTXLOG_LVL_DEBUG2		(CTXLOG_LVL_DEBUG1 + 1)
#define CTXLOG_LVL_DEBUG3		(CTXLOG_LVL_DEBUG1 + 2)
#define CTXLOG_LVL_DEBUG4		(CTXLOG_LVL_DEBUG1 + 3)
#define CTXLOG_LVL_DEBUG5		(CTXLOG_LVL_DEBUG1 + 4)
#define CTXLOG_LVL_DEBUG6		(CTXLOG_LVL_DEBUG1 + 5)
#define CTXLOG_LVL_DEBUG7		(CTXLOG_LVL_DEBUG1 + 6)
#define CTXLOG_LVL_DEBUG8		(CTXLOG_LVL_DEBUG1 + 7)
#define CTXLOG_LVL_DEBUG9		(CTXLOG_LVL_DEBUG1 + 8)
#define CTXLOG_LVL_DEBUG10		(CTXLOG_LVL_DEBUG1 + 9)

// Default values Max levels of logs to show in a debug or release build
#define CTXLOG_DEFAULT_MAX_LVL_DEBUG_BUILD      CTXLOG_LVL_DEBUG3
#define CTXLOG_DEFAULT_MAX_LVL_RELEASE_BUILD    CTXLOG_LVL_INFO
#define CTXLOG_DEFAULT_MODE_DEBUG_BUILD         CTXLOG_MODE_FILE | CTXLOG_MODE_CONSOLE
#define CTXLOG_DEFAULT_MODE_RELEASE_BUILD       CTXLOG_MODE_FILE | CTXLOG_MODE_CONSOLE

// Tag names for important message classes
#define CTXLOG_MSG_TAG_CRITICAL     @"CRITICAL"
#define CTXLOG_MSG_TAG_ERROR        @"ERROR"
#define CTXLOG_MSG_TAG_WARN         @"WARNING"
#define CTXLOG_MSG_TAG_INFO         @"INFO"
#define CTXLOG_MSG_TAG_DETAIL       @"DETAIL"
#define CTXLOG_MSG_TAG_DEBUG1       @"DEBUG1"
#define CTXLOG_MSG_TAG_DEBUG2       @"DEBUG2"
#define CTXLOG_MSG_TAG_DEBUG3       @"DEBUG3"
#define CTXLOG_MSG_TAG_DEBUG4       @"DEBUG4"
#define CTXLOG_MSG_TAG_DEBUG5       @"DEBUG5"
#define CTXLOG_MSG_TAG_DEBUG6       @"DEBUG6"
#define CTXLOG_MSG_TAG_DEBUG7       @"DEBUG7"
#define CTXLOG_MSG_TAG_DEBUG8       @"DEBUG8"
#define CTXLOG_MSG_TAG_DEBUG9       @"DEBUG9"
#define CTXLOG_MSG_TAG_DEBUG10      @"DEBUG10"

// Log message categories
#define CTXLOG_LOG_TYPE_ACTIVITY            1
#define CTXLOG_LOG_TYPE_DIAGNOSTIC          2
#define CTXLOG_LOG_TYPE_SECURE              3
#define CTXLOG_LOG_TYPE_PERFORMANCE         4

// Logger types
#define CTXLOG_LOGGER_TYPE_NONE             0
#define CTXLOG_LOGGER_TYPE_DIAGNOSTIC       1
#define CTXLOG_LOGGER_TYPE_PERFORMANCE      2

// Timestamp formats
#define CTXLOG_FILENAME_TIMESTAMP_FORMAT    @"yyyy-MM-dd-HH-mm-ssZ" //2013-07-24-18-32+0530
// Timestamp in ISO 8601 format
#define CTXLOG_LOG_TIMESTAMP_FORMAT         @"yyyy-MM-dd'T'HH:mm:ss.SSSZ" //2013-11-04T11:55:33.369+0530

// Default values
#define CTXLOG_ROOT_LOGS_FOLDER_NAME           @"CitrixLogs"
#define CTXLOG_COMPRESSED_ZIP_NAME             @"CitrixLogs.zip"
#define CTXLOG_ROOT_LOGS_FOLDER_PATH_C         "/Documents/CitrixLogs"
#define CTXLOG_COMPRESSED_ZIP_PATH_C           "/Documents/CitrixLogs.zip"
#define CTXLOG_FILE_PREFIX                     "CtxLog_"

#define CTXLOG_DEFAULT_LOGGER_NAME             @"DefaultLogger"
#define CTXLOG_DEFAULT_APP_NAME                @"DefaultApp"
#define CTXLOG_DEFAULT_MAX_LOG_FILE_SIZE       2 // in MB
#define CTXLOG_DEFAULT_MAX_LOG_FILE_COUNT      5
#define CTXLOG_ALLOWED_MAX_LOG_FILE_SIZE       5 // in MB
#define CTXLOG_ALLOWED_MAX_LOG_FILE_COUNT      8

#define CTXLOG_DIAGNSOTIC_LOGGER               @"Diagnostics"
#define CTXLOG_PERFORMANCE_LOGGER              @"Performance"

// Constants used with performance logging related macros and methods
#define CTXLOG_PERF_ARGS_PREFIX                @"ctxPerfArgs:"
#define CTXLOG_PERF_ARGS_SEPERATOR             @":"

#define CTXLOG_PERF_EVENT_TYPE_START           0
#define CTXLOG_PERF_EVENT_TYPE_STOP            1
#define CTXLOG_PERF_EVENT_TYPE_TIMESTAMP       2

#define CTXLOG_PERF_EVENT_NAME_START           @"Start"
#define CTXLOG_PERF_EVENT_NAME_STOP            @"Stop"
#define CTXLOG_PERF_EVENT_NAME_TIMESTAMP       @"Timestamp"

// Constants used for archiving and unarchiving Logs folder
#define CTXLOG_COMPRESSED_FOLDER_PATH         @"ctxCompressedLogFolderPath"
#define CTXLOG_COMPRESSED_FOLDER_MIMETYPE     @"ctxCompressedLogFolderMimeType"
#define CTXLOG_COMPRESSED_FOLDER_NAME         @"ctxCompressedLogFolderName"

// Constants used for archiving generic APIs
#define CTXLOG_ZIP_FILE_PATH         @"ctxZipFilePath"
#define CTXLOG_ZIP_FILE_MIMETYPE     @"ctxZipFileType"
#define CTXLOG_ZIP_FILE_NAME         @"ctxZipFileName"

// Constants used for unarchiving generic APIs
#define CTXLOG_UNZIP_FOLDER_PATH         @"ctxUnzipFolderPath"
#define CTXLOG_UNZIP_FOLDER_NAME         @"ctxUnzipFolderName"

// Constants for indicating the CtxLogger errors
#define CTXLOG_ERROR_DOMAIN                   @"CtxLoggerErrorDomain"

// Constants for getting the AppInfo
#define CTXLOG_CURRENT_APP_LOG_DIRECTORY      @"ctxCurrentLogsDirectory"

// Constants related to getting the App Info parameters
#define CTXLOG_APP_NAME                       @"appName"
#define CTXLOG_APP_VERSION                    @"appVersion"
#define CTXLOG_APP_BUILD                      @"appBuild"
#define CTXLOG_APP_HARDWARE_MODEL             @"hardwareModel"
#define CTXLOG_APP_OS_VERSION                 @"osVersion"
#define CTXLOG_APP_DEVICE_NAME                @"deviceName"
#define CTXLOG_APP_DEVICE_MODEL               @"deviceModel"
#define CTXLOG_APP_JAILBREAK_STATUS           @"deviceJailBroken"
#define CTXLOG_LOGGER_VERSION_KEY             @"LoggerVersionKey"

#define LOGGER_SDK_VERSION_LABEL            @"CitrixLogger SDK version"

// Constants related to default App Info Values
#define CTXLOG_APP_NAME_UNKNOWN               @"Unknown-appName"
#define CTXLOG_APP_VERSION_UNKNOWN            @"Unknown-version"
#define CTXLOG_APP_BUILD_UNKNOWN              @"Unknown-build"
#define CTXLOG_APP_HARDWARE_MODEL_UNKNOWN     @"Unknown-hardware-model"
#define CTXLOG_APP_OS_VERSION_UNKNOWN         @"Unknown-os-version"
#define CTXLOG_APP_DEVICE_NAME_UNKNOWN        @"Unknown-device-name"
#define CTXLOG_APP_DEVICE_MODEL_UNKNOWN       @"Unknown-device-name"


typedef enum
{
    CtxLoggerErrorUnknown = 100,
    CtxLoggerErrorInvalidDataType,
    CtxLoggerErrorFileNameNotFound,
    CtxLoggerErrorInputDataNotFound
} CtxLoggerError;

