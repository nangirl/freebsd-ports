PORTNAME=	flightgear-terragear
PORTVERSION=	20171007
PORTREVISION=	17
CATEGORIES=	games

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Tools for building scenery for the FlightGear project
WWW=		https://github.com/FlightGear/terragear

LICENSE=	GPLv2

BROKEN=		does not build: use of undeclared identifier 'sgClearWriteError'
DEPRECATED=	Broken since 2021
EXPIRATION_DATE=	2023-03-21

BUILD_DEPENDS=	cgal>0:math/cgal
LIB_DEPENDS=	libgdal.so:graphics/gdal \
		libmpfr.so:math/mpfr \
		libgmp.so:math/gmp \
		libboost_thread.so:devel/boost-libs \
		libboost_system.so:devel/boost-libs \
		libboost_chrono.so:devel/boost-libs \
		libboost_date_time.so:devel/boost-libs \
		libboost_atomic.so:devel/boost-libs \
		libtiff.so:graphics/tiff \
		libSimGearCore.so:devel/simgear

USES=	cmake compiler:c++11-lang

USE_GITHUB=	yes
GH_ACCOUNT=	flightgear
GH_PROJECT=	terragear
GH_TAGNAME=	5b5e5fc

.include <bsd.port.mk>
