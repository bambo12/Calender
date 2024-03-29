#pragma once
#include "IPVersion.h"
#include <string>
#include <vector>

namespace PNet
{
	class IPEndpoint
	{
	public:
		IPEndpoint(const char* ip, unsigned short port);
		IPVersion GetIPVersion();
		std::string GetHostname();
		std::string GetIPString();
		unsigned short GetPort();
		std::vector<uint8_t> GetIPBytes();
	private:
		IPVersion ipversion = IPVersion::Unknown;
		std::string hostname = "";
		std::string ip_string = "";
		std::vector<uint8_t> ip_bytes;
		unsigned short port = 0;
	};
}
