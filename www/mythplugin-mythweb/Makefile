PORTNAME=	mythweb
DISTVERSIONPREFIX=	v
DISTVERSION=	32.0-40
DISTVERSIONSUFFIX=	-gb05906a6

CATEGORIES=	www
PKGNAMEPREFIX=	mythplugin-

MAINTAINER=	ahicks@p-o.co.uk
COMMENT=	Frontend for scheduling and managing recordings on your MythTV Box
WWW=		https://www.mythtv.org/wiki/MythWeb

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		php shebangfix perl5
USE_PERL5=	run
USE_PHP=	json pcre posix mysqli session spl sockets
USE_GITHUB=	yes
GH_ACCOUNT=	MythTV
SHEBANG_FILES=	mythweb.pl modules/_shared/lang/build_translation.pl \
		modules/coverart/handler.pl modules/stream/*.pl

NO_BUILD=	yes
NO_ARCH=	yes
PLIST_SUB=	WWWOWN="${WWWOWN}" WWWGRP="${WWWGRP}"
SUB_FILES=	pkg-message
REINPLACE_ARGS=	-i ""

OPTIONS_DEFINE=	APACHE LIGHTTPD NGINX
OPTIONS_DEFAULT=	APACHE

APACHE_USES=		apache
LIGHTTPD_RUN_DEPENDS=	lighttpd:www/lighttpd
NGINX_DESC=		Nginx server support
NGINX_RUN_DEPENDS=	nginx:www/nginx

post-patch:
	@${REINPLACE_CMD} -e 's|/var/www/html|${WWWDIR}|' \
		${WRKSRC}/mythweb.conf.apache
	@${REINPLACE_CMD} -e 's|/usr/bin/php-cgi|${LOCALBASE}/bin/php-cgi|' \
		${WRKSRC}/mythweb.conf.lighttpd

do-install:
	(cd ${WRKSRC} && ${COPYTREE_SHARE} "*" ${STAGEDIR}${WWWDIR} \
		"! -name *.orig -and ! -name LICENSE")

.include <bsd.port.mk>
