/*
 * Copyright © 2012 Collabora Ltd.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include <mission-control-plugins/mission-control-plugins.h>

#ifndef __MCP_ACCOUNT_MANAGER_ACCOUNTS_SSO_H__
#define __MCP_ACCOUNT_MANAGER_ACCOUNTS_SSO_H__

G_BEGIN_DECLS

#define MCP_TYPE_ACCOUNT_MANAGER_ACCOUNTS_SSO \
  (mcp_account_manager_accounts_sso_get_type ())

#define MCP_ACCOUNT_MANAGER_ACCOUNTS_SSO(o) \
  (G_TYPE_CHECK_INSTANCE_CAST ((o), MCP_TYPE_ACCOUNT_MANAGER_ACCOUNTS_SSO,   \
      McpAccountManagerAccountsSso))

#define MCP_ACCOUNT_MANAGER_ACCOUNTS_SSO_CLASS(k)     \
    (G_TYPE_CHECK_CLASS_CAST((k), MCP_TYPE_ACCOUNT_MANAGER_ACCOUNTS_SSO, \
        McpAccountManagerUoaClass))

#define MCP_IS_ACCOUNT_MANAGER_ACCOUNTS_SSO(o) \
  (G_TYPE_CHECK_INSTANCE_TYPE ((o), MCP_TYPE_ACCOUNT_MANAGER_ACCOUNTS_SSO))

#define MCP_IS_ACCOUNT_MANAGER_ACCOUNTS_SSO_CLASS(k)  \
  (G_TYPE_CHECK_CLASS_TYPE ((k), MCP_TYPE_ACCOUNT_MANAGER_ACCOUNTS_SSO))

#define MCP_ACCOUNT_MANAGER_ACCOUNTS_SSO_GET_CLASS(o) \
    (G_TYPE_INSTANCE_GET_CLASS ((o), MCP_TYPE_ACCOUNT_MANAGER_ACCOUNTS_SSO, \
        McpAccountManagerUoaClass))

typedef struct _McpAccountManagerAccountsSsoPrivate McpAccountManagerAccountsSsoPrivate;

typedef struct {
  GObject parent;

  McpAccountManagerAccountsSsoPrivate *priv;
} _McpAccountManagerAccountsSso;

typedef struct {
  GObjectClass parent_class;
} _McpAccountManagerAccountsSsoClass;

typedef _McpAccountManagerAccountsSso McpAccountManagerAccountsSso;
typedef _McpAccountManagerAccountsSsoClass McpAccountManagerAccountsSsoClass;

GType mcp_account_manager_accounts_sso_get_type (void) G_GNUC_CONST;

McpAccountManagerAccountsSso *mcp_account_manager_accounts_sso_new (void);

G_END_DECLS

#endif
