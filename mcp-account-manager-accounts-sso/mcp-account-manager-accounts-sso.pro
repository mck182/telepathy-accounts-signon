TEMPLATE = lib
TARGET = mcp-account-manager-accounts-sso
isEmpty(PKG_CONFIG):PKG_CONFIG=pkg-config

CONFIG  += link_pkgconfig use_c_linker plugin no_plugin_name_prefix
CONFIG -= qt
PKGCONFIG += mission-control-plugins libaccounts-glib libsignon-glib

SOURCES = mcp-account-manager-accounts-sso.c \
        mission-control-plugin.c

HEADERS = mcp-account-manager-accounts-sso.h

target.path = $$system($$PKG_CONFIG --variable=plugindir mission-control-plugins)
INSTALLS += target
