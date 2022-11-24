#include <iostream>
#include <iomanip>

int main()
{
    // `std::flush` sends the output buffer to the final destination (terminal)
    std::cout << "This is a message.\n"
              << std::endl
              << std::flush;
    // Right after this line, the message above is sent to the terminal

    std::cout << "-------------------------------" << std::endl;

    // setting width
    std::cout << "Unformated table\n"
              << std::endl;
    std::cout << "LeBron James"
              << " 6" << std::endl;
    std::cout << "Dwayne Wade"
              << " 3" << std::endl;
    std::cout << "Udonis Haslem"
              << " 40" << std::endl;
    std::cout << "Chris Bosh"
              << " 1" << std::endl;
    std::cout << "Ray Allen"
              << " 34" << std::endl;

    std::cout << "\nFormatted table\n"
              << std::endl;

    int col_width = 15;
    int col_width_2 = 4;
    // left justify columns
    std::cout << std::left;
    std::cout << std::setw(col_width) << "LeBron James" << std::setw(col_width_2) << " 6" << std::endl;
    std::cout << std::setw(col_width) << "Dwayne Wade" << std::setw(col_width_2) << " 3" << std::endl;
    std::cout << std::setw(col_width) << "Udonis Haslem" << std::setw(col_width_2) << " 40" << std::endl;
    std::cout << std::setw(col_width) << "Chris Bosh" << std::setw(col_width_2) << " 1" << std::endl;
    std::cout << std::setw(col_width) << "Ray Allen" << std::setw(col_width_2) << " 34" << std::endl;

    return 0;
}