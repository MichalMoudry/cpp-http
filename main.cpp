#include "client.h"
#include <memory>

int main(int argc, char* argv[]) {
    /*auto client {std::make_unique<http::Client>(http::Client {})};
    auto response = client->send("");*/
    auto client {std::make_unique<http::client::HttpConnection>(
        http::client::HttpConnection{""}
    )};

    return 0;
}