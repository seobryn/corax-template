#include "crow.h"
#include <chrono>

int main()
{
    crow::SimpleApp app;

    CROW_ROUTE(app, "/").methods("GET"_method)([]() {
        crow::json::wvalue res({{"message", "Hello, World!"}});

        return res;
    });

    app.port(8081).multithreaded().run();
}