PORTNAME=	mongodb
PORTVERSION=	1.15.1
CATEGORIES=	databases pear

MAINTAINER=	pi@FreeBSD.org
COMMENT=	PECL classes for MongoDB
WWW=		https://docs.mongodb.org/ecosystem/drivers/php/

LICENSE=	APACHE20

USES=		gmake php:pecl ssl
USE_PHP=	spl:build
CFLAGS+=	-I${LOCALBASE}/include

.include <bsd.port.mk>
