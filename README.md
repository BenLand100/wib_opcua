# wib_opcua

This is an OPC UA server for the WIB based on [quasar](https://github.com/quasar-team/quasar)
which uses [open62541](https://open62541.org/) under the hood to handle the OPC
UA protocol. 

Work in progress.

## Overview

This interfaces with the wib_server via the standard ZMQ/protobuf protocol that
wib_server supplies, and implements a control and monitoring interface over
OPC UA. There exists a WIB object with metadata about the WIB and subsystems for
FEMBPower, TimingEndpoint, and Sensors. See [the quasar-generated diagram](Design/diagram.pdf) 
for more information.
