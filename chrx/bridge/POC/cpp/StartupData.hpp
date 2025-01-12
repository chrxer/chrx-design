#ifndef STARTUPDATA_HPP
#define STARTUPDATA_HPP

#include <string>

class StartupData {
public:
    explicit StartupData(const std::string& channel) {
        this->channel = channel;
    };

    std::string const& get_str() const;
    
    const std::string& get_channel() const { return channel; }

private:
    std::string channel;
}; 

#endif
