PORTNAME=	xfce4-timer-plugin
PORTVERSION=	1.7.1
PORTREVISION=	2
CATEGORIES=	x11-clocks xfce
MASTER_SITES=	XFCE/panel-plugins
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Timer plugin for Xfce
WWW=		https://goodies.xfce.org/projects/panel-plugins/xfce4-timer-plugin

LICENSE=	GPLv2

USES=		compiler:c11 gettext-tools gmake gnome libtool pkgconfig \
		tar:bzip2 xfce
USE_GNOME=	cairo gtk30 intltool
USE_XFCE=	panel

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=		NLS
OPTIONS_SUB=		yes

NLS_USES=		gettext-runtime
NLS_CONFIGURE_ENABLE=	nls

.include <bsd.port.mk>
