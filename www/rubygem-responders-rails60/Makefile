PORTNAME=	responders
PORTVERSION=	3.0.1
CATEGORIES=	www rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-rails60

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Simple Ruby DSL for making HTTP requests
WWW=		https://github.com/heartcombo/responders

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-actionpack60>=5.0:www/rubygem-actionpack60 \
		rubygem-railties60>=5.0:www/rubygem-railties60

USES=		gem

NO_ARCH=	yes

.include <bsd.port.mk>
