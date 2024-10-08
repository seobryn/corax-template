#include "crow.h"

int main()
{
    crow::SimpleApp app;

    app.loglevel(crow::LogLevel::Warning);

    CROW_ROUTE(app, "/")
    ([]() {
        crow::json::wvalue res({{"message", "Hello, World!"}});

        return res;
    });

    app.port(8081).multithreaded().run();
}