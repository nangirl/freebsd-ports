PORTNAME=	octave-forge-sqlite
DISTVERSIONPREFIX=	v
DISTVERSION=	0.0.2
PORTREVISION=	1
CATEGORIES=	math

MAINTAINER=	stephen@FreeBSD.org
COMMENT=	Octave-forge package ${OCTAVE_PKGNAME}
WWW=		https://packages.octave.org/

LICENSE=	GPLv3
LICENSE_FILE=	${WRKDIR}/${OCTAVE_SRC}/COPYING

USES=		autoreconf octave pkgconfig sqlite
USE_GITHUB=	yes
GH_ACCOUNT=	gnu-octave
GH_PROJECT=	octave-sqlite

GNU_CONFIGURE=	yes

OCTAVE_SRC=		${GH_PROJECT}-${DISTVERSION}

.include <bsd.port.mk>
