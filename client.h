#ifndef __CLIENT_H_
#define __CLIENT_H_

#include <cstdint>
#include <map>
#include <memory>
#include <string>
#include <string_view>
#include <vector>

namespace http {
    using Header = std::map<std::string, std::vector<std::string>>;

    class Request final {
        private:
        std::string method;
        std::string proto; // "HTTP/1.0"
        int proto_major; // 1
        int proto_minor; // 0
        Header header;
        int64_t content_len;
        std::string host;

        public:
        std::string_view get_method() const {
            return method;
        }

        std::string_view get_proto() const {
            return proto;
        }

        int get_proto_major() const {
            return proto_major;
        }

        int get_proto_minor() const {
            return proto_minor;
        }
    };

    class Response final {

    };

    class Client final {
        public:
        std::unique_ptr<Response> send(std::string_view url) {
            auto req = make_request();
            return nullptr;
        }

        private:
        std::unique_ptr<Request> make_request() {
            return nullptr;
        }
    };
}

#endif