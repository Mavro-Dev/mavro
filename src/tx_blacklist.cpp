// Copyright (c) 2015 Mr.Anonymous

#include <map>
#include <sstream>
#include <vector>

#include <string.h>

#include "json/json_spirit_reader_template.h"
#include "json/json_spirit_writer_template.h"
#include "json/json_spirit_utils.h"


#include "tx_blacklist.h"
#include "base58.h"
#include "util.h"
#include "main.h"

std::set<CBitcoinAddress> setBlackInAddresses;
std::set<CBitcoinAddress> setBlackOutAddresses;

using namespace std;
using namespace boost;

void InitBlackList(){
    for(const char **p = blacklisted_addrs; *p; p++)
	setBlackInAddresses.insert(CBitcoinAddress(*p));

    setBlackOutAddresses = setBlackInAddresses;
    setBlackInAddresses.insert(CBitcoinAddress(mavrojail));
}

json_spirit::Value listblackaddrs(const json_spirit::Array& params, bool fHelp)
{
    if (fHelp || params.size() != 0)
        throw runtime_error(
            "listblackaddrs\n"
            "List blacklisted addresses");

    json_spirit::Array reply;

    for(const char **p = blacklisted_addrs; *p; p++)
	reply.push_back(string(*p));

    return reply;
}

json_spirit::Value getmavrojail(const json_spirit::Array& params, bool fHelp)
{
    if (fHelp || params.size() != 0)
        throw runtime_error(
            "getmavrojail\n"
            "Print address to jail mvr");

    return mavrojail;
}

