PORTNAME=	grep
PORTVERSION=	3.9
CATEGORIES=	textproc
MASTER_SITES=	GNU
PKGNAMEPREFIX=	gnu

MAINTAINER=	danfe@FreeBSD.org
COMMENT=	GNU version of popular pattern matching utility
WWW=		https://www.gnu.org/software/grep/

LICENSE=	GPLv3+

CONFLICTS=	bsd-grep

USES=		charsetfix cpe tar:xz
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--program-prefix=g
TEST_TARGET=	check

INFO=		grep
CPE_VENDOR=	gnu

OPTIONS_DEFINE=		COMPAT ICONV LIBSIGSEGV NLS PCRE
OPTIONS_DEFAULT=	COMPAT ICONV PCRE
COMPAT_DESC=		Create g-prefixless compatibility symlinks
LIBSIGSEGV_DESC=	Use alternative page fault handler (GNU libsigsegv)
OPTIONS_SUB=		yes

ICONV_CONFIGURE_USES=	iconv
ICONV_CONFIGURE_WITH=	libiconv-prefix=${LOCALBASE}

LIBSIGSEGV_LIB_DEPENDS=	libsigsegv.so:devel/libsigsegv
LIBSIGSEGV_CONFIGURE_WITH=	libsigsegv-prefix=${LOCALBASE}

NLS_USES=		gettext
NLS_CONFIGURE_ENABLE=	nls
NLS_CONFIGURE_WITH=	libintl-prefix=${LOCALBASE}

PCRE_LIB_DEPENDS=	libpcre2-8.so:devel/pcre2
PCRE_USES=		pkgconfig
PCRE_CONFIGURE_ENABLE=	perl-regexp

post-patch:
	@${REINPLACE_CMD} 's:@grep@:${PREFIX}/bin/&:' ${WRKSRC}/src/egrep.sh
	@${REINPLACE_CMD} 's|mkinstalldirs = .*|mkinstalldirs = ${MKDIR}|g' \
		${WRKSRC}/po/Makefile.in.in
# Remove useless(?) macro to avoid run-time dependency on `textproc/groff'
	@${REINPLACE_CMD} '/Map mono-width fonts to standard fonts/,+6d' \
		${WRKSRC}/doc/grep.in.1

post-patch-NLS-off:
	@${REINPLACE_CMD} '/install-exec-local:/s/install-exec-localcharset//' \
		${WRKSRC}/lib/Makefile.in

post-install-COMPAT-on:
.for p in grep egrep fgrep
	${LN} -sf g${p} ${STAGEDIR}${PREFIX}/bin/${p}
.endfor

.include <bsd.port.mk>
