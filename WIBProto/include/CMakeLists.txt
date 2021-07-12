protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS wib.proto)
add_library(WIBProto OBJECT ${PROTO_SRCS} ${PROTO_HDRS})
