PORTNAME=	J
PORTVERSION=	${JVERSION:S/^j//:S/-release//}
DISTVERSIONPREFIX=	j
DISTVERSIONSUFFIX=	-release
PORTREVISION=	1
PORTEPOCH=	1
CATEGORIES=	lang math

MAINTAINER=	sevenjp@gmail.com
COMMENT=	J programming language
WWW=		https://www.jsoftware.com/

LICENSE=	GPLv3
LICENSE_FILE=	${WRKDIR}/jsource-${JVERSION}/license.txt

BROKEN=		does not build
DEPRECATED=	Broken since 2021
EXPIRATION_DATE=	2023-03-21

ONLY_FOR_ARCHS=	amd64
ONLY_FOR_ARCHS_REASON=	not built or tested on other architectures; i386 needs hostdefs and netdefs files to be generated

BUILD_DEPENDS=	bash:shells/bash
LIB_DEPENDS=	libpcre2-8.so:devel/pcre2 \
		libsqlite3.so:databases/sqlite3

USES+=		libedit gmake shebangfix uidfix

SHEBANG_GLOB=	*.sh

SUB_FILES=	jconsole profile.ijs

USE_GITHUB=	yes
GH_ACCOUNT=	jsoftware
GH_PROJECT=	jsource

# J is released with ports-unfriendly versioning
JVERSION=	j807-release

BIN_FILES=	jconsole
LIB_FILES=	libj.so libtsdll.so

# J wants to install jconsole, also provided by openjdk
CONFLICTS_INSTALL=	openjdk[0-9]*

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/lib/j/bin
	${MKDIR} ${STAGEDIR}${PREFIX}/share/j/system
	${MKDIR} ${STAGEDIR}${PREFIX}/share/j/addons
	${INSTALL_PROGRAM} ${BIN_FILES:C!^!${WRKDIR}/jbld/j64/bin/!} ${STAGEDIR}${PREFIX}/lib/j/bin/
	${INSTALL_LIB} ${LIB_FILES:C!^!${WRKDIR}/jbld/j64/bin/!} ${STAGEDIR}${PREFIX}/lib/j/bin # Required by the J runtime
	${INSTALL_DATA} ${WRKDIR}/profile.ijs ${STAGEDIR}${PREFIX}/share/j/
	${INSTALL_SCRIPT} ${WRKDIR}/jconsole ${STAGEDIR}${PREFIX}/bin/
	(cd ${WRKDIR}/jbld/j64/system && ${COPYTREE_SHARE} \* ${STAGEDIR}${PREFIX}/share/j/system)
	(cd ${WRKDIR}/jbld/j64/addons && ${COPYTREE_SHARE} \* ${STAGEDIR}${PREFIX}/share/j/addons)

.include <bsd.port.mk>
