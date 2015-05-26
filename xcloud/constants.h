#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <QString>

class Constants
{
public:

	const static QString APP_NAME;

	const static QString HEADER_END_FLAG;
	const static QString HEADER_SEPERATOR;
	const static QString CONNET_CMD_PREFIX;
	const static QString TRANSPORT_CMD_PREFIX;
	const static QString CLOSE_TASK_CMD_PREFIX;
	const static QString HEADER_CONTENT_LENGTH;
	const static QString HEADER_CONTENT;
	const static QString CONTENT_ENDPOINT;
	const static QString CONTENT_SENDER;
	const static QString CONTENT_RECEIVER;
	const static QString CONTENT_CALLER;
	const static QString CONTENT_TASKID;
	const static QString PROXY_CONNECTION_ESTABLISHED;
	const static QString HTTP_TAG;
	const static QString POST_TAG;
	const static QString HTTP_200_OK;
	const static QString HTTP_500_ERROR;
	const static QString HTTP_505_ERROR;
	const static QString CONNECT_TAG;
	const static QString LOGIN_C_REQUEST;
	const static QString ENCRYT_KEY;
	const static QString LOGIN_S_REQUEST;
	const static QString LOGIN_S_CALLID;
	const static QString LOGIN_S_CREDENTIAL;
	const static QString PAIR_S_REQUEST;
	const static QString HTTP_200;
	const static QString CONNECTION_ESTABLISHED;
};

#endif // !CONSTANTS_H
