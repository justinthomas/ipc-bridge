PKG_CXXFLAGS += $(foreach path, $(shell rospack cflags-only-I ipc_nav_msgs), -I$(path))