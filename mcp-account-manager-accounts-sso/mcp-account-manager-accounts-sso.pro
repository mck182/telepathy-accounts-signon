TEMPLATE = lib
TARGET = mcp-account-manager-accounts-sso

CONFIG  += link_pkgconfig use_c_linker plugin no_plugin_name_prefix
CONFIG -= qt
PKGCONFIG += mission-control-plugins libaccounts-glib libsignon-glib

SOURCES = mcp-account-manager-accounts-sso.c \
        mission-control-plugin.c

HEADERS = mcp-account-manager-accounts-sso.h

target.path = $$system(pkg-config --variable=plugindir mission-control-plugins)
INSTALLS += target
