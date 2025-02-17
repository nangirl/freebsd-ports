PORTNAME=	urweb
PORTVERSION=	20150520
PORTREVISION=	3
CATEGORIES=	lang www
MASTER_SITES=	http://www.impredicative.com/ur/

MAINTAINER=	beyert@cs.ucr.edu
COMMENT=	Ultimate host for embedded domain-specific languages
WWW=		http://www.impredicative.com/ur/

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

BROKEN=		fails to build
BROKEN_FreeBSD_12=	invalid target: self
BROKEN_FreeBSD_13=	invalid target: self
DEPRECATED=	Broken since 2020
EXPIRATION_DATE=	2023-03-20

BUILD_DEPENDS=	mlton:lang/mlton

CONFIGURE_ENV=	CCARGS="-I${LOCALBASE}/include"

GNU_CONFIGURE=	yes
USES=		gmake libtool tar:tgz ssl
USE_LDCONFIG=	yes
ONLY_FOR_ARCHS=	i386 amd64
CFLAGS+=	-pthread

OPTIONS_DEFINE=	ELISP PGSQL SQLITE MYSQL
OPTIONS_DEFAULT=	ELISP PGSQL
OPTIONS_EXCLUDE=	NLS DOCS
ELISP_DESC=	Install contributed Emacs Lisp

.include <bsd.port.options.mk>

CONFIGURE_ARGS+=	--with-openssl=${OPENSSLBASE}

.if ${PORT_OPTIONS:MELISP}
PLIST_SUB+=	ELISP=""
CONFIGURE_ARGS+=	with_emacs=yes
.else
PLIST_SUB+=	ELISP="@comment "
CONFIGURE_ARGS+=	with_emacs=no
.endif

.if ${PORT_OPTIONS:MPGSQL}
USES+=		pgsql
WANT_PGSQL=	server
.else
CONFIGURE_ENV+=	PGHEADER="no"
.endif

.if ${PORT_OPTIONS:MSQLITE}
USES+=		sqlite
.else
CONFIGURE_ENV+=	SQHEADER="no"
.endif

.if ${PORT_OPTIONS:MMYSQL}
USES+=		mysql
.else
CONFIGURE_ENV+=	MSHEADER="no"
.endif

post-patch:
	${REINPLACE_CMD} -e "s|postgresql/libpq-fe.h|libpq-fe.h|g" \
	${WRKSRC}/configure

.include <bsd.port.mk>
