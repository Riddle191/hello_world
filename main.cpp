#include "lib.h"

#include <spdlog/spdlog.h>
#include <iostream>

int main()
{
    auto logger = spdlog::stdout_logger_mt("console");
    logger->info("build {}\nHello, World!", version());

    return 0;
}
