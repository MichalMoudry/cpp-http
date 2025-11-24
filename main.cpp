#include "client.h"
#include <memory>

int main(int argc, char* argv[]) {
    auto client {std::make_unique<http::Client>(http::Client {})};
    auto response = client->send("");

    return 0;
}