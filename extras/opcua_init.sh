#!/bin/sh

echo "Starting wib_opcua"
/opt/wibopcua/bin/wib_opcua /opt/wibopcua/config/defaults/config.xml 2>/var/log/wib_opcua.err >/var/log/wib_opcua.log &
