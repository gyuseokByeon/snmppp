// SNMPpp: https://sourceforge.net/p/snmppp/
// SNMPpp project uses the MIT license. See LICENSE for details.
// Copyright (C) 2013 Stephane Charette <stephanecharette@gmail.com>

#pragma once

// If you get an error about Version.hpp not existing, note this file is
// generated by cmake.  Please see the "doc/getting_started.txt" file for
// instructions on setting up a build directory which will also create this
// file with the proper content.
//
// If you are a developer who has installed a package such as snmppp-dev.deb
// or snmppp-dev.rpm and it is missing Version.hpp, please contact whoever
// created the broken package, or visit the SNMPpp project web page.
#include <SNMPpp/Version.hpp>

// include all of the SNMPpp #include files in the correct order so cyclic dependencies are avoided
#include <SNMPpp/net-snmppp.hpp>
#include <SNMPpp/Session.hpp>
#include <SNMPpp/OID.hpp>
#include <SNMPpp/Varlist.hpp>
#include <SNMPpp/PDU.hpp>
#include <SNMPpp/Get.hpp>
#include <SNMPpp/Trap.hpp>


namespace SNMPpp
{
	// return the SNMPpp version number
	std::string version( void );
};
