PORTNAME=	pytz-deprecation-shim
PORTVERSION=	0.1.0.post0
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	pytz_deprecation_shim-${PORTVERSION}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Shims to make deprecation of pytz easier
WWW=		https://github.com/pganssle/pytz-deprecation-shim

LICENSE=	APACHE20

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}tzdata>=0:devel/py-tzdata@${PY_FLAVOR}

USES=		python:3.7+
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

.include <bsd.port.pre.mk>

.if ${PYTHON_REL} < 30900
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}backports.zoneinfo>=0:devel/py-backports.zoneinfo@${PY_FLAVOR}
.endif

post-patch:
	@${CP} ${FILESDIR}/setup.py ${WRKSRC}/

.include <bsd.port.post.mk>
