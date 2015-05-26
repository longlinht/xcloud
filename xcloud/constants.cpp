#include "constants.h"


const QString Constants::APP_NAME = "xcloud";

const QString Constants::HEADER_END_FLAG = "\r\n\r\n";
const QString Constants::HEADER_SEPERATOR = "\r\n";
const QString Constants::CONNET_CMD_PREFIX = "GET /connect HTTP/1.1";
const QString Constants::TRANSPORT_CMD_PREFIX = "POST /transport HTTP/1.1";
const QString Constants::CLOSE_TASK_CMD_PREFIX = "GET /closetask HTTP/1.1";
const QString Constants::HEADER_CONTENT_LENGTH = "Content-Length:";
const QString Constants::HEADER_CONTENT = "Content:";
const QString Constants::CONTENT_ENDPOINT = "endpoint=";
const QString Constants::CONTENT_SENDER = "Sender:r_sid=";
const QString Constants::CONTENT_RECEIVER = "Receiver:c_sid=";
const QString Constants::CONTENT_CALLER = "Callid:";
const QString Constants::CONTENT_TASKID = "Taskid:";
const QString Constants::PROXY_CONNECTION_ESTABLISHED = "HTTP / 1.0 200 Connection established";
const QString Constants::HTTP_TAG = "HTTP";
const QString Constants::POST_TAG = "POST";
const QString Constants::HTTP_200_OK = "HTTP/1.1 200 OK";
const QString Constants::HTTP_500_ERROR = "HTTP/1.1 500";
const QString Constants::HTTP_505_ERROR = "HTTP/1.1 505";
const QString Constants::CONNECT_TAG = "CONNECT";
const QString Constants::LOGIN_C_REQUEST = "GET /login HTTP/1.1\r\nContent:clienttype=d credential=wwwwwwwwwwsdfafaf\r\n:rid0012_01_123\r\nContent-Length:0\r\n\r\n";
const QString Constants::ENCRYT_KEY = "12345678901234567890123456789012";
const QString Constants::LOGIN_S_REQUEST = "GET /login HTTP /1.1\r\n%1\r\nContent:clienttype=r credential=";
const QString Constants::LOGIN_S_CALLID = "CallId:cid%1_%2";
const QString Constants::LOGIN_S_CREDENTIAL = "afsfeqrfqgqarfq234esadf123wasd#cid_%1";
const QString Constants::PAIR_S_REQUEST = "GET /pair HTTP/1.1";
const QString Constants::HTTP_200 = "HTTP/1.1 200";
const QString Constants::CONNECTION_ESTABLISHED = "HTTP/1.0 200 Connection established\r\nProxy-agent: r_proxy 6.6\r\n\r\n";



