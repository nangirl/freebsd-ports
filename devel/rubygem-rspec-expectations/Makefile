PORTNAME=	rspec-expectations
PORTVERSION=	3.12.2
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Rspec-expectations adds should and should_not to every object
WWW=		https://github.com/rspec/rspec-expectations

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

RUN_DEPENDS=	rubygem-diff-lcs>=1.2.0<2.0:textproc/rubygem-diff-lcs \
		rubygem-rspec-support>=${PORTVERSION:R}.0<3.13:devel/rubygem-rspec-support

USES=		gem

NO_ARCH=	yes

.include <bsd.port.mk>
