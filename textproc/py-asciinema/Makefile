PORTNAME=	asciinema
PORTVERSION=	2.0.2
CATEGORIES=	textproc python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Tool for recording and sharing terminal sessions
WWW=		https://asciinema.org/

LICENSE=	GPLv3+

RUN_DEPENDS=	ca_root_nss>=0:security/ca_root_nss

USES=		python:3.3+
USE_PYTHON=	distutils autoplist

CONFLICTS_INSTALL=	cowrie # bin/asciinema

.include <bsd.port.mk>
