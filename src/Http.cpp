#include "lift/Http.hpp"

namespace lift::http {

using namespace std::string_literals;

const std::string METHOD_UNKNOWN = "UNKNOWN"s;
const std::string METHOD_GET = "GET"s;
const std::string METHOD_HEAD = "HEAD"s;
const std::string METHOD_POST = "POST"s;
const std::string METHOD_PUT = "PUT"s;
const std::string METHOD_DELETE = "DELETE"s;
const std::string METHOD_CONNECT = "CONNECT"s;
const std::string METHOD_OPTIONS = "OPTIONS"s;
const std::string METHOD_PATCH = "PATCH"s;

auto to_string(
    Method method) -> const std::string&
{
    switch (method) {
    case Method::GET:
        return METHOD_GET;
    case Method::HEAD:
        return METHOD_HEAD;
    case Method::POST:
        return METHOD_POST;
    case Method::PUT:
        return METHOD_PUT;
    case Method::DELETE:
        return METHOD_DELETE;
    case Method::CONNECT:
        return METHOD_CONNECT;
    case Method::OPTIONS:
        return METHOD_OPTIONS;
    case Method::PATCH:
        return METHOD_PATCH;
    default:
        return METHOD_UNKNOWN;
    }
}

const std::string VERSION_UNKNOWN = "HTTP/unknown"s;
const std::string VERSION_USE_BEST = "HTTP/Best"s;
const std::string VERSION_V1_0 = "HTTP/1.0"s;
const std::string VERSION_V1_1 = "HTTP/1.1"s;
const std::string VERSION_V2_0 = "HTTP/2.0"s;
const std::string VERSION_V2_0_TLS = "HTTP/2.0-TLS"s;
const std::string VERSION_V2_0_ONLY = "HTTP/2.0-only"s;

auto to_string(
    Version version) -> const std::string&
{
    switch (version) {
    case Version::USE_BEST:
        return VERSION_USE_BEST;
    case Version::V1_0:
        return VERSION_V1_0;
    case Version::V1_1:
        return VERSION_V1_1;
    case Version::V2_0:
        return VERSION_V2_0;
    case Version::V2_0_TLS:
        return VERSION_V2_0_TLS;
    case Version::V2_0_ONLY:
        return VERSION_V2_0_ONLY;
    default:
        return VERSION_UNKNOWN;
    }
}

const std::string STATUS_CODE_HTTP_UNKNOWN = "UNKNOWN"s;
const std::string STATUS_CODE_HTTP_100_CONTINUE = "100 Continue"s;
const std::string STATUS_CODE_HTTP_101_SWITCHING_PROTOCOLS = "101 Switching Protocols"s;
const std::string STATUS_CODE_HTTP_102_PROCESSING = "102 Processing"s;
const std::string STATUS_CODE_HTTP_103_EARLY_HINTS = "103 Early Hints"s;

const std::string STATUS_CODE_HTTP_200_OK = "200 OK"s;
const std::string STATUS_CODE_HTTP_201_CREATED = "201 Created"s;
const std::string STATUS_CODE_HTTP_202_ACCEPTED = "202 Accepted"s;
const std::string STATUS_CODE_HTTP_203_NON_AUTHORITATIVE_INFORMATION = "203 Non-Authoritative Information"s;
const std::string STATUS_CODE_HTTP_204_NO_CONTENT = "204 No Content"s;
const std::string STATUS_CODE_HTTP_205_RESET_CONTENT = "205 Reset Content"s;
const std::string STATUS_CODE_HTTP_206_PARTIAL_CONTENT = "206 Partial Content"s;
const std::string STATUS_CODE_HTTP_207_MULTI_STATUS = "207 Multi-Status"s;
const std::string STATUS_CODE_HTTP_208_ALREADY_REPORTED = "208 Already Reported"s;
const std::string STATUS_CODE_HTTP_226_IM_USED = "226 IM Used"s;

const std::string STATUS_CODE_HTTP_300_MULTIPLE_CHOICES = "300 Multiple Choices"s;
const std::string STATUS_CODE_HTTP_301_MOVED_PERMANENTLY = "301 Moved Permanently"s;
const std::string STATUS_CODE_HTTP_302_FOUND = "302 Found"s;
const std::string STATUS_CODE_HTTP_303_SEE_OTHER = "303 See Other"s;
const std::string STATUS_CODE_HTTP_304_NOT_MODIFIED = "304 Not Modified"s;
const std::string STATUS_CODE_HTTP_305_USE_PROXY = "305 Use Proxy"s;
const std::string STATUS_CODE_HTTP_306_SWITCH_PROXY = "306 Switch Proxy"s;
const std::string STATUS_CODE_HTTP_307_TEMPORARY_REDIRECT = "307 Temporary Redirect"s;
const std::string STATUS_CODE_HTTP_308_PERMANENT_REDIRECT = "308 Permanent Redirect"s;

const std::string STATUS_CODE_HTTP_400_BAD_REQUEST = "400 Bad Request"s;
const std::string STATUS_CODE_HTTP_401_UNAUTHORIZED = "401 Unauthorized"s;
const std::string STATUS_CODE_HTTP_402_PAYMENT_REQUIRED = "402 Payment Required"s;
const std::string STATUS_CODE_HTTP_403_FORBIDDEN = "403 Forbidden"s;
const std::string STATUS_CODE_HTTP_404_NOT_FOUND = "404 Not Found"s;
const std::string STATUS_CODE_HTTP_405_METHOD_NOT_ALLOWED = "405 Method Not Allowed"s;
const std::string STATUS_CODE_HTTP_406_NOT_ACCEPTABLE = "406 Not Acceptable"s;
const std::string STATUS_CODE_HTTP_407_PROXY_AUTHENTICATION_REQUIRED = "407 Proxy Authentication Required"s;
const std::string STATUS_CODE_HTTP_408_REQUEST_TIMEOUT = "408 Request Timeout"s;
const std::string STATUS_CODE_HTTP_409_CONFLICT = "409 Conflict"s;
const std::string STATUS_CODE_HTTP_410_GONE = "410 Gone"s;
const std::string STATUS_CODE_HTTP_411_LENGTH_REQUIRED = "411 Length Required"s;
const std::string STATUS_CODE_HTTP_412_PRECONDITION_FAILED = "412 Precondition Failed"s;
const std::string STATUS_CODE_HTTP_413_PAYLOAD_TOO_LARGE = "413 Payload Too Large"s;
const std::string STATUS_CODE_HTTP_414_URI_TOO_LONG = "414 URI Too Long"s;
const std::string STATUS_CODE_HTTP_415_UNSUPPORTED_MEDIA_TYPE = "415 Unsupported Media Type"s;
const std::string STATUS_CODE_HTTP_416_RANGE_NOT_SATISFIABLE = "416 Range Not Satisfiable"s;
const std::string STATUS_CODE_HTTP_417_EXPECTATION_FAILED = "417 Expectation Failed"s;
const std::string STATUS_CODE_HTTP_418_IM_A_TEAPOT = "418 I'm a teapot"s;
const std::string STATUS_CODE_HTTP_421_MISDIRECTED_REQUEST = "421 Misdirected Request"s;
const std::string STATUS_CODE_HTTP_422_UNPROCESSABLE_ENTITY = "422 Unprocessable Entity"s;
const std::string STATUS_CODE_HTTP_423_LOCKED = "423 Locked"s;
const std::string STATUS_CODE_HTTP_424_FAILED_DEPENDENCY = "424 Failed Dependency"s;
const std::string STATUS_CODE_HTTP_425_TOO_EARLY = "425 Too Early"s;
const std::string STATUS_CODE_HTTP_426_UPGRADE_REQUIRED = "426 Upgrade Required"s;
const std::string STATUS_CODE_HTTP_428_PRECONDITION_REQUIRED = "428 Precondition Required"s;
const std::string STATUS_CODE_HTTP_429_TOO_MANY_REQUESTS = "429 Too Many Requests"s;
const std::string STATUS_CODE_HTTP_431_REQUEST_HEADER_FIELDS_TOO_LARGE = "431 Request Header Fields Too Large"s;
const std::string STATUS_CODE_HTTP_451_UNAVAILABLE_FOR_LEGAL_REASONS = "451 Unavailable For Legal Reasons"s;

const std::string STATUS_CODE_HTTP_500_INTERNAL_SERVER_ERROR = "500 Internal Server Error"s;
const std::string STATUS_CODE_HTTP_501_NOT_IMPLEMENTED = "501 Not Implemented"s;
const std::string STATUS_CODE_HTTP_502_BAD_GATEWAY = "502 Bad Gateway"s;
const std::string STATUS_CODE_HTTP_503_SERVICE_UNAVAILABLE = "503 Service Unavailable"s;
const std::string STATUS_CODE_HTTP_504_GATEWAY_TIMEOUT = "504 Gateway Timeout"s;
const std::string STATUS_CODE_HTTP_505_HTTP_VERSION_NOT_SUPPORTED = "505 HTTP Version Not Supported"s;
const std::string STATUS_CODE_HTTP_506_VARIANT_ALSO_NEGOTIATES = "506 Variant Also Negotiates"s;
const std::string STATUS_CODE_HTTP_507_INSUFFICIENT_STORAGE = "507 Insufficient Storage"s;
const std::string STATUS_CODE_HTTP_508_LOOP_DETECTED = "508 Loop Detected"s;
const std::string STATUS_CODE_HTTP_510_NOT_EXTENDED = "510 Not Extended"s;
const std::string STATUS_CODE_HTTP_511_NETWORK_AUTHENTICATION_REQUIRED = "511 Network Authentication Required"s;

auto to_string(
    StatusCode code) -> const std::string&
{
    switch (code) {
    case StatusCode::HTTP_UNKNOWN:
        return STATUS_CODE_HTTP_UNKNOWN;
    case StatusCode::HTTP_100_CONTINUE:
        return STATUS_CODE_HTTP_100_CONTINUE;
    case StatusCode::HTTP_101_SWITCHING_PROTOCOLS:
        return STATUS_CODE_HTTP_101_SWITCHING_PROTOCOLS;
    case StatusCode::HTTP_102_PROCESSING:
        return STATUS_CODE_HTTP_102_PROCESSING;
    case StatusCode::HTTP_103_EARLY_HINTS:
        return STATUS_CODE_HTTP_103_EARLY_HINTS;
    case StatusCode::HTTP_200_OK:
        return STATUS_CODE_HTTP_200_OK;
    case StatusCode::HTTP_201_CREATED:
        return STATUS_CODE_HTTP_201_CREATED;
    case StatusCode::HTTP_202_ACCEPTED:
        return STATUS_CODE_HTTP_202_ACCEPTED;
    case StatusCode::HTTP_203_NON_AUTHORITATIVE_INFORMATION:
        return STATUS_CODE_HTTP_203_NON_AUTHORITATIVE_INFORMATION;
    case StatusCode::HTTP_204_NO_CONTENT:
        return STATUS_CODE_HTTP_204_NO_CONTENT;
    case StatusCode::HTTP_205_RESET_CONTENT:
        return STATUS_CODE_HTTP_205_RESET_CONTENT;
    case StatusCode::HTTP_206_PARTIAL_CONTENT:
        return STATUS_CODE_HTTP_206_PARTIAL_CONTENT;
    case StatusCode::HTTP_207_MULTI_STATUS:
        return STATUS_CODE_HTTP_207_MULTI_STATUS;
    case StatusCode::HTTP_208_ALREADY_REPORTED:
        return STATUS_CODE_HTTP_208_ALREADY_REPORTED;
    case StatusCode::HTTP_226_IM_USED:
        return STATUS_CODE_HTTP_226_IM_USED;
    case StatusCode::HTTP_300_MULTIPLE_CHOICES:
        return STATUS_CODE_HTTP_300_MULTIPLE_CHOICES;
    case StatusCode::HTTP_301_MOVED_PERMANENTLY:
        return STATUS_CODE_HTTP_301_MOVED_PERMANENTLY;
    case StatusCode::HTTP_302_FOUND:
        return STATUS_CODE_HTTP_302_FOUND;
    case StatusCode::HTTP_303_SEE_OTHER:
        return STATUS_CODE_HTTP_303_SEE_OTHER;
    case StatusCode::HTTP_304_NOT_MODIFIED:
        return STATUS_CODE_HTTP_304_NOT_MODIFIED;
    case StatusCode::HTTP_305_USE_PROXY:
        return STATUS_CODE_HTTP_305_USE_PROXY;
    case StatusCode::HTTP_306_SWITCH_PROXY:
        return STATUS_CODE_HTTP_306_SWITCH_PROXY;
    case StatusCode::HTTP_307_TEMPORARY_REDIRECT:
        return STATUS_CODE_HTTP_307_TEMPORARY_REDIRECT;
    case StatusCode::HTTP_308_PERMANENT_REDIRECT:
        return STATUS_CODE_HTTP_308_PERMANENT_REDIRECT;
    case StatusCode::HTTP_400_BAD_REQUEST:
        return STATUS_CODE_HTTP_400_BAD_REQUEST;
    case StatusCode::HTTP_401_UNAUTHORIZED:
        return STATUS_CODE_HTTP_401_UNAUTHORIZED;
    case StatusCode::HTTP_402_PAYMENT_REQUIRED:
        return STATUS_CODE_HTTP_402_PAYMENT_REQUIRED;
    case StatusCode::HTTP_403_FORBIDDEN:
        return STATUS_CODE_HTTP_403_FORBIDDEN;
    case StatusCode::HTTP_404_NOT_FOUND:
        return STATUS_CODE_HTTP_404_NOT_FOUND;
    case StatusCode::HTTP_405_METHOD_NOT_ALLOWED:
        return STATUS_CODE_HTTP_405_METHOD_NOT_ALLOWED;
    case StatusCode::HTTP_406_NOT_ACCEPTABLE:
        return STATUS_CODE_HTTP_406_NOT_ACCEPTABLE;
    case StatusCode::HTTP_407_PROXY_AUTHENTICATION_REQUIRED:
        return STATUS_CODE_HTTP_407_PROXY_AUTHENTICATION_REQUIRED;
    case StatusCode::HTTP_408_REQUEST_TIMEOUT:
        return STATUS_CODE_HTTP_408_REQUEST_TIMEOUT;
    case StatusCode::HTTP_409_CONFLICT:
        return STATUS_CODE_HTTP_409_CONFLICT;
    case StatusCode::HTTP_410_GONE:
        return STATUS_CODE_HTTP_410_GONE;
    case StatusCode::HTTP_411_LENGTH_REQUIRED:
        return STATUS_CODE_HTTP_411_LENGTH_REQUIRED;
    case StatusCode::HTTP_412_PRECONDITION_FAILED:
        return STATUS_CODE_HTTP_412_PRECONDITION_FAILED;
    case StatusCode::HTTP_413_PAYLOAD_TOO_LARGE:
        return STATUS_CODE_HTTP_413_PAYLOAD_TOO_LARGE;
    case StatusCode::HTTP_414_URI_TOO_LONG:
        return STATUS_CODE_HTTP_414_URI_TOO_LONG;
    case StatusCode::HTTP_415_UNSUPPORTED_MEDIA_TYPE:
        return STATUS_CODE_HTTP_415_UNSUPPORTED_MEDIA_TYPE;
    case StatusCode::HTTP_416_RANGE_NOT_SATISFIABLE:
        return STATUS_CODE_HTTP_416_RANGE_NOT_SATISFIABLE;
    case StatusCode::HTTP_417_EXPECTATION_FAILED:
        return STATUS_CODE_HTTP_417_EXPECTATION_FAILED;
    case StatusCode::HTTP_418_IM_A_TEAPOT:
        return STATUS_CODE_HTTP_418_IM_A_TEAPOT;
    case StatusCode::HTTP_421_MISDIRECTED_REQUEST:
        return STATUS_CODE_HTTP_421_MISDIRECTED_REQUEST;
    case StatusCode::HTTP_422_UNPROCESSABLE_ENTITY:
        return STATUS_CODE_HTTP_422_UNPROCESSABLE_ENTITY;
    case StatusCode::HTTP_423_LOCKED:
        return STATUS_CODE_HTTP_423_LOCKED;
    case StatusCode::HTTP_424_FAILED_DEPENDENCY:
        return STATUS_CODE_HTTP_424_FAILED_DEPENDENCY;
    case StatusCode::HTTP_425_TOO_EARLY:
        return STATUS_CODE_HTTP_425_TOO_EARLY;
    case StatusCode::HTTP_426_UPGRADE_REQUIRED:
        return STATUS_CODE_HTTP_426_UPGRADE_REQUIRED;
    case StatusCode::HTTP_428_PRECONDITION_REQUIRED:
        return STATUS_CODE_HTTP_428_PRECONDITION_REQUIRED;
    case StatusCode::HTTP_429_TOO_MANY_REQUESTS:
        return STATUS_CODE_HTTP_429_TOO_MANY_REQUESTS;
    case StatusCode::HTTP_431_REQUEST_HEADER_FIELDS_TOO_LARGE:
        return STATUS_CODE_HTTP_431_REQUEST_HEADER_FIELDS_TOO_LARGE;
    case StatusCode::HTTP_451_UNAVAILABLE_FOR_LEGAL_REASONS:
        return STATUS_CODE_HTTP_451_UNAVAILABLE_FOR_LEGAL_REASONS;
    case StatusCode::HTTP_500_INTERNAL_SERVER_ERROR:
        return STATUS_CODE_HTTP_500_INTERNAL_SERVER_ERROR;
    case StatusCode::HTTP_501_NOT_IMPLEMENTED:
        return STATUS_CODE_HTTP_501_NOT_IMPLEMENTED;
    case StatusCode::HTTP_502_BAD_GATEWAY:
        return STATUS_CODE_HTTP_502_BAD_GATEWAY;
    case StatusCode::HTTP_503_SERVICE_UNAVAILABLE:
        return STATUS_CODE_HTTP_503_SERVICE_UNAVAILABLE;
    case StatusCode::HTTP_504_GATEWAY_TIMEOUT:
        return STATUS_CODE_HTTP_504_GATEWAY_TIMEOUT;
    case StatusCode::HTTP_505_HTTP_VERSION_NOT_SUPPORTED:
        return STATUS_CODE_HTTP_505_HTTP_VERSION_NOT_SUPPORTED;
    case StatusCode::HTTP_506_VARIANT_ALSO_NEGOTIATES:
        return STATUS_CODE_HTTP_506_VARIANT_ALSO_NEGOTIATES;
    case StatusCode::HTTP_507_INSUFFICIENT_STORAGE:
        return STATUS_CODE_HTTP_507_INSUFFICIENT_STORAGE;
    case StatusCode::HTTP_508_LOOP_DETECTED:
        return STATUS_CODE_HTTP_508_LOOP_DETECTED;
    case StatusCode::HTTP_510_NOT_EXTENDED:
        return STATUS_CODE_HTTP_510_NOT_EXTENDED;
    case StatusCode::HTTP_511_NETWORK_AUTHENTICATION_REQUIRED:
        return STATUS_CODE_HTTP_511_NETWORK_AUTHENTICATION_REQUIRED;
    default:
        return STATUS_CODE_HTTP_UNKNOWN;
    }
}

auto to_enum(
    int32_t code) -> StatusCode
{
    switch (code) {
    case 100:
        return StatusCode::HTTP_100_CONTINUE;
    case 101:
        return StatusCode::HTTP_101_SWITCHING_PROTOCOLS;
    case 102:
        return StatusCode::HTTP_102_PROCESSING;
    case 103:
        return StatusCode::HTTP_103_EARLY_HINTS;

    case 200:
        return StatusCode::HTTP_200_OK;
    case 201:
        return StatusCode::HTTP_201_CREATED;
    case 202:
        return StatusCode::HTTP_202_ACCEPTED;
    case 203:
        return StatusCode::HTTP_203_NON_AUTHORITATIVE_INFORMATION;
    case 204:
        return StatusCode::HTTP_204_NO_CONTENT;
    case 205:
        return StatusCode::HTTP_205_RESET_CONTENT;
    case 206:
        return StatusCode::HTTP_206_PARTIAL_CONTENT;
    case 207:
        return StatusCode::HTTP_207_MULTI_STATUS;
    case 208:
        return StatusCode::HTTP_208_ALREADY_REPORTED;
    case 226:
        return StatusCode::HTTP_226_IM_USED;

    case 300:
        return StatusCode::HTTP_300_MULTIPLE_CHOICES;
    case 301:
        return StatusCode::HTTP_301_MOVED_PERMANENTLY;
    case 302:
        return StatusCode::HTTP_302_FOUND;
    case 303:
        return StatusCode::HTTP_303_SEE_OTHER;
    case 304:
        return StatusCode::HTTP_304_NOT_MODIFIED;
    case 305:
        return StatusCode::HTTP_305_USE_PROXY;
    case 306:
        return StatusCode::HTTP_306_SWITCH_PROXY;
    case 307:
        return StatusCode::HTTP_307_TEMPORARY_REDIRECT;
    case 308:
        return StatusCode::HTTP_308_PERMANENT_REDIRECT;

    case 400:
        return StatusCode::HTTP_400_BAD_REQUEST;
    case 401:
        return StatusCode::HTTP_401_UNAUTHORIZED;
    case 402:
        return StatusCode::HTTP_402_PAYMENT_REQUIRED;
    case 403:
        return StatusCode::HTTP_403_FORBIDDEN;
    case 404:
        return StatusCode::HTTP_404_NOT_FOUND;
    case 405:
        return StatusCode::HTTP_405_METHOD_NOT_ALLOWED;
    case 406:
        return StatusCode::HTTP_406_NOT_ACCEPTABLE;
    case 407:
        return StatusCode::HTTP_407_PROXY_AUTHENTICATION_REQUIRED;
    case 408:
        return StatusCode::HTTP_408_REQUEST_TIMEOUT;
    case 409:
        return StatusCode::HTTP_409_CONFLICT;
    case 410:
        return StatusCode::HTTP_410_GONE;
    case 411:
        return StatusCode::HTTP_411_LENGTH_REQUIRED;
    case 412:
        return StatusCode::HTTP_412_PRECONDITION_FAILED;
    case 413:
        return StatusCode::HTTP_413_PAYLOAD_TOO_LARGE;
    case 414:
        return StatusCode::HTTP_414_URI_TOO_LONG;
    case 415:
        return StatusCode::HTTP_415_UNSUPPORTED_MEDIA_TYPE;
    case 416:
        return StatusCode::HTTP_416_RANGE_NOT_SATISFIABLE;
    case 417:
        return StatusCode::HTTP_417_EXPECTATION_FAILED;
    case 418:
        return StatusCode::HTTP_418_IM_A_TEAPOT;
    case 421:
        return StatusCode::HTTP_421_MISDIRECTED_REQUEST;
    case 422:
        return StatusCode::HTTP_422_UNPROCESSABLE_ENTITY;
    case 423:
        return StatusCode::HTTP_423_LOCKED;
    case 424:
        return StatusCode::HTTP_424_FAILED_DEPENDENCY;
    case 425:
        return StatusCode::HTTP_425_TOO_EARLY;
    case 426:
        return StatusCode::HTTP_426_UPGRADE_REQUIRED;
    case 428:
        return StatusCode::HTTP_428_PRECONDITION_REQUIRED;
    case 429:
        return StatusCode::HTTP_429_TOO_MANY_REQUESTS;
    case 431:
        return StatusCode::HTTP_431_REQUEST_HEADER_FIELDS_TOO_LARGE;
    case 451:
        return StatusCode::HTTP_451_UNAVAILABLE_FOR_LEGAL_REASONS;

    case 500:
        return StatusCode::HTTP_500_INTERNAL_SERVER_ERROR;
    case 501:
        return StatusCode::HTTP_501_NOT_IMPLEMENTED;
    case 502:
        return StatusCode::HTTP_502_BAD_GATEWAY;
    case 503:
        return StatusCode::HTTP_503_SERVICE_UNAVAILABLE;
    case 504:
        return StatusCode::HTTP_504_GATEWAY_TIMEOUT;
    case 505:
        return StatusCode::HTTP_505_HTTP_VERSION_NOT_SUPPORTED;
    case 506:
        return StatusCode::HTTP_506_VARIANT_ALSO_NEGOTIATES;
    case 507:
        return StatusCode::HTTP_507_INSUFFICIENT_STORAGE;
    case 508:
        return StatusCode::HTTP_508_LOOP_DETECTED;
    case 510:
        return StatusCode::HTTP_510_NOT_EXTENDED;
    case 511:
        return StatusCode::HTTP_511_NETWORK_AUTHENTICATION_REQUIRED;

    case 0:
    default:
        return StatusCode::HTTP_UNKNOWN;
    }
}

const std::string CONTENT_TYPE_UNKNOWN = "UNKNOWN"s;

const std::string CONTENT_TYPE_NO_CONTENT = ""s;

const std::string CONTENT_TYPE_TEXT_CSS = "text/css"s;
const std::string CONTENT_TYPE_TEXT_CSV = "text/csv"s;
const std::string CONTENT_TYPE_TEXT_HTML = "text/html"s;
const std::string CONTENT_TYPE_TEXT_PLAIN = "text/plain"s;
const std::string CONTENT_TYPE_TEXT_XML = "text/xml"s;

const std::string CONTENT_TYPE_IMAGE_GIF = "image/gif"s;
const std::string CONTENT_TYPE_IMAGE_JPEG = "image/jpeg"s;
const std::string CONTENT_TYPE_IMAGE_PNG = "image/png"s;
const std::string CONTENT_TYPE_IMAGE_TIFF = "image/tiff"s;
const std::string CONTENT_TYPE_IMAGE_X_ICON = "image/x-icon"s;
const std::string CONTENT_TYPE_IMAGE_SVG_XML = "image/svg+xml"s;

const std::string CONTENT_TYPE_VIDEO_MPEG = "video/mpeg"s;
const std::string CONTENT_TYPE_VIDEO_MP4 = "video/mp4"s;
const std::string CONTENT_TYPE_VIDEO_X_FLV = "video/x-flv"s;
const std::string CONTENT_TYPE_VIDEO_WEBM = "video/webm"s;

const std::string CONTENT_TYPE_MULTIPART_MIXED = "multipart/mixed"s;
const std::string CONTENT_TYPE_MULTIPART_ALTERNATIVE = "multipart/alternative"s;
const std::string CONTENT_TYPE_MULTIPART_RELATED = "multipart/related"s;
const std::string CONTENT_TYPE_MULTIPART_FORM_DATA = "multipart/form-data"s;

const std::string CONTENT_TYPE_AUDIO_MPEG = "audio/mpeg"s;
const std::string CONTENT_TYPE_AUDIO_X_MS_WMA = "audio/x-ms-wma"s;
const std::string CONTENT_TYPE_AUDIO_X_WAV = "audio/x-wav"s;

const std::string CONTENT_TYPE_APPLICATION_JAVASCRIPT = "application/javascript"s;
const std::string CONTENT_TYPE_APPLICATION_OCTET_STREAM = "application/octet-stream"s;
const std::string CONTENT_TYPE_APPLICATION_OGG = "application/ogg"s;
const std::string CONTENT_TYPE_APPLICATION_PDF = "application/pdf"s;
const std::string CONTENT_TYPE_APPLICATION_XHTML_XML = "application/xhtml+xml"s;
const std::string CONTENT_TYPE_APPLICATION_X_SHOCKWAVE_FLASH = "application/x-shockwave-flash"s;
const std::string CONTENT_TYPE_APPLICATION_JSON = "application/json"s;
const std::string CONTENT_TYPE_APPLICATION_LD_JSON = "application/ld+json"s;
const std::string CONTENT_TYPE_APPLICATION_XML = "application/xml"s;
const std::string CONTENT_TYPE_APPLICATION_ZIP = "application/zip"s;
const std::string CONTENT_TYPE_APPLICATION_X_WWW_FORM_URLENCODED = "application/x-www-form-urlencoded"s;

auto to_string(
    ContentType content_type) -> const std::string&
{
    switch (content_type) {
    case ContentType::NO_CONTENT:
        return CONTENT_TYPE_NO_CONTENT;

    case ContentType::TEXT_CSS:
        return CONTENT_TYPE_TEXT_CSS;
    case ContentType::TEXT_CSV:
        return CONTENT_TYPE_TEXT_CSV;
    case ContentType::TEXT_HTML:
        return CONTENT_TYPE_TEXT_HTML;
    case ContentType::TEXT_PLAIN:
        return CONTENT_TYPE_TEXT_PLAIN;
    case ContentType::TEXT_XML:
        return CONTENT_TYPE_TEXT_XML;

    case ContentType::IMAGE_GIF:
        return CONTENT_TYPE_IMAGE_GIF;
    case ContentType::IMAGE_JPEG:
        return CONTENT_TYPE_IMAGE_JPEG;
    case ContentType::IMAGE_PNG:
        return CONTENT_TYPE_IMAGE_PNG;
    case ContentType::IMAGE_TIFF:
        return CONTENT_TYPE_IMAGE_TIFF;
    case ContentType::IMAGE_X_ICON:
        return CONTENT_TYPE_IMAGE_X_ICON;
    case ContentType::IMAGE_SVG_XML:
        return CONTENT_TYPE_IMAGE_SVG_XML;

    case ContentType::VIDEO_MPEG:
        return CONTENT_TYPE_VIDEO_MPEG;
    case ContentType::VIDEO_MP4:
        return CONTENT_TYPE_VIDEO_MP4;
    case ContentType::VIDEO_X_FLV:
        return CONTENT_TYPE_VIDEO_X_FLV;
    case ContentType::VIDEO_WEBM:
        return CONTENT_TYPE_VIDEO_WEBM;

    case ContentType::MULTIPART_MIXED:
        return CONTENT_TYPE_MULTIPART_MIXED;
    case ContentType::MULTIPART_ALTERNATIVE:
        return CONTENT_TYPE_MULTIPART_ALTERNATIVE;
    case ContentType::MULTIPART_RELATED:
        return CONTENT_TYPE_MULTIPART_RELATED;
    case ContentType::MULTIPART_FORM_DATA:
        return CONTENT_TYPE_MULTIPART_FORM_DATA;

    case ContentType::AUDIO_MPEG:
        return CONTENT_TYPE_AUDIO_MPEG;
    case ContentType::AUDIO_X_MS_WMA:
        return CONTENT_TYPE_AUDIO_X_MS_WMA;
    case ContentType::AUDIO_X_WAV:
        return CONTENT_TYPE_AUDIO_X_WAV;

    case ContentType::APPLICATION_JAVASCRIPT:
        return CONTENT_TYPE_APPLICATION_JAVASCRIPT;
    case ContentType::APPLICATION_OCTET_STREAM:
        return CONTENT_TYPE_APPLICATION_OCTET_STREAM;
    case ContentType::APPLICATION_OGG:
        return CONTENT_TYPE_APPLICATION_OGG;
    case ContentType::APPLICATION_PDF:
        return CONTENT_TYPE_APPLICATION_PDF;
    case ContentType::APPLICATION_XHTML_XML:
        return CONTENT_TYPE_APPLICATION_XHTML_XML;
    case ContentType::APPLICATION_X_SHOCKWAVE_FLASH:
        return CONTENT_TYPE_APPLICATION_X_SHOCKWAVE_FLASH;
    case ContentType::APPLICATION_JSON:
        return CONTENT_TYPE_APPLICATION_JSON;
    case ContentType::APPLICATION_LD_JSON:
        return CONTENT_TYPE_APPLICATION_LD_JSON;
    case ContentType::APPLICATION_XML:
        return CONTENT_TYPE_APPLICATION_XML;
    case ContentType::APPLICATION_ZIP:
        return CONTENT_TYPE_APPLICATION_ZIP;
    case ContentType::APPLICATION_X_WWW_FORM_URLENCODED:
        return CONTENT_TYPE_APPLICATION_X_WWW_FORM_URLENCODED;

    default:
        return CONTENT_TYPE_UNKNOWN;
    }
}

const std::string CONNECTION_TYPE_UNKNOWN = "UNKNOWN"s;
const std::string CONNECTION_TYPE_CLOSE = "close"s;
const std::string CONNECTION_TYPE_KEEP_ALIVE = "keep-alive"s;
const std::string CONNECTION_TYPE_UPGRADE = "upgrade"s;

auto to_string(
    ConnectionType connection_type) -> const std::string&
{
    switch (connection_type) {
    case ConnectionType::CLOSE:
        return CONNECTION_TYPE_CLOSE;
    case ConnectionType::KEEP_ALIVE:
        return CONNECTION_TYPE_KEEP_ALIVE;
    case ConnectionType::UPGRADE:
        return CONNECTION_TYPE_UPGRADE;

    default:
        return CONNECTION_TYPE_UNKNOWN;
    }
}

} // namespace lift::http
