PORTNAME=	vte
PORTVERSION=	0.70.2
PORTREVISION=	1
CATEGORIES=	x11-toolkits gnome
MASTER_SITES=	GNOME
PKGNAMESUFFIX=	3
DIST_SUBDIR=	gnome

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Terminal widget with improved accessibility and I18N support
WWW=		https://wiki.gnome.org/Apps/Terminal/VTE

LICENSE=	LGPL21

BUILD_DEPENDS=	bash:shells/bash
LIB_DEPENDS=	libgnutls.so:security/gnutls \
		libfribidi.so:converters/fribidi \
		libpcre2-8.so:devel/pcre2 \
		libicuuc.so:devel/icu

PORTSCOUT=	limitw:1,even

USES=		compiler:c++11-lang gettext gnome localbase meson \
		pkgconfig python:3.6+ tar:xz vala:build
USE_LDCONFIG=	yes
USE_GNOME=	cairo gdkpixbuf2 gtk30 gtk40 introspection:build

MESON_ARGS=	-Da11y=true \
		-Dgir=true \
		-Dfribidi=true \
		-Dgtk3=true \
		-Dgtk4=true \
		-Dicu=true \
		-D_systemd=false \
		-Dvapi=true

# shlib version numbers comes from gtk3/4 meson options not from PYTHON_VER
PLIST_SUB=	VERSION=2.91 VER3=3.91

BINARY_ALIAS=	python3=${PYTHON_CMD}

.include <bsd.port.pre.mk>

.if ${CHOSEN_COMPILER_TYPE} == clang && ${OPSYS} == FreeBSD && ${OSVERSION} < 1300109
CPP=		${LOCALBASE}/bin/clang-cpp${_LLVM_VERSION}
CC=		${LOCALBASE}/bin/clang${_LLVM_VERSION}
CXX=		${LOCALBASE}/bin/clang++${_LLVM_VERSION}
BUILD_DEPENDS+=	llvm${_LLVM_VERSION}>=0:devel/llvm${_LLVM_VERSION}
.if ${LLVM_DEFAULT} == 10
_LLVM_VERSION=	11
.else
_LLVM_VERSION=	${LLVM_DEFAULT}
.endif
.endif

.include <bsd.port.post.mk>
