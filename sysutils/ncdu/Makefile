PORTNAME=	ncdu
PORTVERSION=	1.18
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	https://dev.yorhel.nl/download/

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Ncurses du(1)
WWW=		https://dev.yorhel.nl/ncdu

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		ncurses

GNU_CONFIGURE=	yes

PLIST_FILES=	bin/ncdu \
		man/man1/ncdu.1.gz

# ncdu 1.* (LTS) is written in C.
# ncdu 2.* (stable) is written in Zig which only works with specific version.
PORTSCOUT=	limit:^1\.

.include <bsd.port.mk>
