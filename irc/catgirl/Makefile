PORTNAME=	catgirl
PORTVERSION=	2.1
PORTREVISION=	3
CATEGORIES=	irc
MASTER_SITES=	https://git.causal.agency/catgirl/snapshot/

MAINTAINER=	june@causal.agency
COMMENT=	TLS-only terminal IRC client
WWW=		https://git.causal.agency/catgirl/

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		compiler:c++11-lang ncurses pkgconfig ssl

HAS_CONFIGURE=	yes
CONFIGURE_ARGS=	--prefix=${PREFIX} --mandir=${MANPREFIX}/man

PLIST_FILES=	bin/catgirl \
		man/man1/catgirl.1.gz

.include <bsd.port.pre.mk>

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/catgirl

.if ${SSL_DEFAULT} == base || ${SSL_DEFAULT} == openssl
LIB_DEPENDS+=	libtls.so:security/libretls
.endif

.include <bsd.port.post.mk>
