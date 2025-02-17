PORTNAME=	pacman
PORTVERSION=	5.1.3
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	https://sources.archlinux.org/other/${PORTNAME}/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Package manager from ArchLinux
WWW=		https://www.archlinux.org/pacman/

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	asciidoc:textproc/asciidoc \
		bash:shells/bash
RUN_DEPENDS=	bash:shells/bash
LIB_DEPENDS=	libarchive.so.13:archivers/libarchive

USES=		cpe gmake libtool localbase:ldflags pathfix perl5 pkgconfig shebangfix ssl
CPE_VENDOR=	${PORTNAME}_project
SHEBANG_FILES=	${WRKSRC}/scripts/makepkg-template.pl.in \
		${WRKSRC}/scripts/libmakepkg/lint_config.sh.in
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-root-dir="${PACMAN_ROOT}" \
		--localstatedir=/var
CONFIGURE_ENV=	LIBSSL_CFLAGS="-I${OPENSSLINC}" \
		LIBSSL_LIBS="-L${OPENSSLLIB} -lcrypto"
USE_LDCONFIG=	yes
BINARY_WRAPPERS=	gm4

SUB_FILES=	pkg-message pkg-deinstall
SUB_LIST=	PACMAN_ROOT="${PACMAN_ROOT}" PREFIX="${PREFIX}"
PLIST_SUB=	PACMAN_ROOT="${PACMAN_ROOT:C/^${PREFIX}//}"

PACMAN_ROOT?=	${PREFIX}/pacman

PORTEXAMPLES=	*

OPTIONS_DEFINE=	CURL GPGME EXAMPLES NLS
OPTIONS_DEFAULT=CURL GPGME
OPTIONS_SUB=	yes

CURL_DESC=	Use libcurl fetcher instead of external curl/wget
CURL_CONFIGURE_WITH=	libcurl=${LOCALBASE}
CURL_LIB_DEPENDS=	libcurl.so:ftp/curl
GPGME_DESC=	Use GPGME for PGP signature verification
GPGME_CONFIGURE_WITH=	gpgme
GPGME_LIB_DEPENDS=	libgpgme.so:security/gpgme
NLS_USES=		gettext
NLS_CONFIGURE_ENABLE=	nls

.include <bsd.port.options.mk>

post-patch:
	@${REINPLACE_CMD} -e 's|m4|gm4|' ${WRKSRC}/scripts/Makefile.in
	@${REINPLACE_CMD} -e '2 s/.*/exit 0/' ${WRKSRC}/build-aux/missing
	@${REINPLACE_CMD} -e '/INSTALL_DATA.*sysconfdir/ d' ${WRKSRC}/etc/Makefile.in
.for tool in curl wget rsync lftpget
	@${REINPLACE_CMD} -e 's|/usr/bin/${tool}|${LOCALBASE}/bin/${tool}|' \
		${WRKSRC}/etc/pacman.conf.in ${WRKSRC}/etc/makepkg.conf.in
.endfor
.if ${ARCH} == "i386"
	@${REINPLACE_CMD} -e '/^Architecture/ s|auto|i686|' ${WRKSRC}/etc/pacman.conf.in
.endif
.if ${ARCH} == "amd64"
	@${REINPLACE_CMD} -e '/^Architecture/ s|auto|x86_64|' ${WRKSRC}/etc/pacman.conf.in
.endif

post-install:
.for f in makepkg.conf pacman.conf
	${INSTALL_DATA} ${WRKSRC}/etc/${f} ${STAGEDIR}${PREFIX}/etc/${f}.sample
.endfor
	@${MKDIR} ${STAGEDIR}${PACMAN_ROOT}
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libalpm.so

post-install-EXAMPLES-on:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/PKGBUILD-example.txt ${STAGEDIR}${EXAMPLESDIR}/

.include <bsd.port.mk>
