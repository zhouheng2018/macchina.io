//
// TransmitRequestDeserializer.h
//
// Package: Generated
// Module:  TypeDeserializer
//
// This file has been generated.
// Warning: All changes to this will be lost when the file is re-generated.
//
// Copyright (c) 2015, Applied Informatics Software Engineering GmbH.
// All rights reserved.
// 
// SPDX-License-Identifier: Apache-2.0
//


#ifndef TypeDeserializer_IoT_XBee_TransmitRequest_INCLUDED
#define TypeDeserializer_IoT_XBee_TransmitRequest_INCLUDED


#include "IoT/XBee/XBeeNode.h"
#include "Poco/RemotingNG/TypeDeserializer.h"


namespace Poco {
namespace RemotingNG {


template <>
class TypeDeserializer<IoT::XBee::TransmitRequest>
{
public:
	static bool deserialize(const std::string& name, bool isMandatory, Deserializer& deser, IoT::XBee::TransmitRequest& value)
	{
		bool ret = deser.deserializeStructBegin(name, isMandatory);
		if (ret)
		{
			deserializeImpl(deser, value);
			deser.deserializeStructEnd(name);
		}
		return ret;
	}

	static void deserializeImpl(Deserializer& deser, IoT::XBee::TransmitRequest& value)
	{
		remoting__staticInitBegin(REMOTING__NAMES);
		static const std::string REMOTING__NAMES[] = {"deviceOrNetworkAddress","frameID","options","payload"};
		remoting__staticInitEnd(REMOTING__NAMES);
		TypeDeserializer<std::string >::deserialize(REMOTING__NAMES[0], true, deser, value.deviceOrNetworkAddress);
		TypeDeserializer<Poco::UInt8 >::deserialize(REMOTING__NAMES[1], true, deser, value.frameID);
		TypeDeserializer<Poco::UInt8 >::deserialize(REMOTING__NAMES[2], true, deser, value.options);
		TypeDeserializer<std::vector < Poco::UInt8 > >::deserialize(REMOTING__NAMES[3], true, deser, value.payload);
	}

};


} // namespace RemotingNG
} // namespace Poco


#endif // TypeDeserializer_IoT_XBee_TransmitRequest_INCLUDED

