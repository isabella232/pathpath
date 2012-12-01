#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

bool writeFile( const std::string filename, const std::string& content ) {

    std::ofstream ofs( filename.c_str(), std::ios::out | std::ios::binary );

    if( ofs.is_open() ) {
        ofs << content;
        return true;

    } else {
        return false;
    }
}

std::string readFile( const std::string& filename ) {

    std::ifstream ifs( filename.c_str(), std::ios::in );
    std::string data;

    if( ifs.is_open() ) {

        char c = NULL;

        while( !ifs.eof() ) {
            c = ifs.get();

            if( ifs.good() ) {
                data.push_back( c );
            }
        }
    }

    return data;
}
