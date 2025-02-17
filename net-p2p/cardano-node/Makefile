PORTNAME=	cardano-node
PORTVERSION=	1.35.5
PORTREVISION=	3
MASTER_SITES=	https://input-output-hk.github.io/cardano-haskell-packages/package/:chap
CATEGORIES=	net-p2p

MAINTAINER=	arrowd@FreeBSD.org
COMMENT=	Core component of the Cardano decentralized blockchain
WWW=		https://cardano.org/

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	ghc-8.10.7:lang/ghc810
RUN_DEPENDS=	${LOCALBASE}/share/rc-subr-jail:ports-mgmt/rc-subr-jail

USES=		autoreconf:build cabal gmake libtool pkgconfig

USE_GITHUB=	yes
GH_ACCOUNT=	input-output-hk

GH_TUPLE=	denisshevchenko:threepenny-gui:4ec92ded05ccf59ba4a874be4b404ac1b6d666b6:threepenny_gui/dist-newstyle/src/threepenn_-bd6c9d7cf9bd56f0 \
		input-output-hk:moo:8c487714fbfdea66188fcb85053e7e292e0cc348:moo/dist-newstyle/src/moo-2c80e078576ffc55 \
		vshabanov:ekg-json:00ebe7211c981686e65730b7144fbf5350462608:ekg_json/dist-newstyle/src/ekg-json-e51d7dff12d02a95

GH_TUPLE+=	input-output-hk:libsodium:${LIBSODIUM_HASH}:sodium \
		bitcoin-core:secp256k1:${SECP256K1_HASH}:secp

CARDANO_NODE_HASH=	8762a10efe3f9f97939e3cb05edaf04250456702
LIBSODIUM_HASH=		66f017f16633f2060db25e17c170c2afa0f2a8a1
# Obtained from https://github.com/input-output-hk/cardano-node/blob/master/.github/workflows/github-page.yml#L21
SECP256K1_HASH=		ac83be33d0956faf6b7f61a60ab524ef7d6a473a

USE_RC_SUBR=		cardano_node
MAKE_ENV=		PKG_CONFIG_PATH=${LIBS_PREFIX}${PREFIX}/libdata/pkgconfig/
LIBS_PREFIX=		${WRKDIR}/libs_install
BINARY_ALIAS=		git=true

USERS=		cardano
GROUPS=		cardano

USE_CABAL=	Glob-0.10.2_3 \
		HUnit-1.6.2.0 \
		Histogram-0.1.0.2 \
		HsOpenSSL-0.11.7.4 \
		ListLike-4.7.8 \
		MonadRandom-0.6_2 \
		OneTuple-0.3.1_3 \
		Only-0.1_1 \
		QuickCheck-2.14.2 \
		SHA-1.6.4.4 \
		SafeSemaphore-0.10.1_1 \
		StateVar-1.2.2 \
		Stream-0.4.7.2 \
		Unique-0.4.7.9_1 \
		Win32-network-0.1.0.0:chap \
		adjunctions-4.4.2 \
		aeson-2.1.1.0 \
		aeson-pretty-0.8.9_2 \
		algebraic-graphs-0.6.1 \
		ansi-terminal-0.11.4 \
		ansi-wl-pprint-0.6.9_3 \
		ap-normalize-0.1.0.1 \
		appar-0.1.8 \
		asn1-encoding-0.9.6_2 \
		asn1-parse-0.9.5 \
		asn1-types-0.3.4 \
		assoc-1.0.2_3 \
		async-2.2.4_2 \
		async-extras-0.1.3.2 \
		async-timer-0.1.4.1 \
		atomic-primops-0.8.4 \
		attoparsec-0.14.4_2 \
		attoparsec-iso8601-1.1.0.0 \
		auto-update-0.1.6 \
		barbies-2.0.4.0 \
		base-compat-0.12.2 \
		base-compat-batteries-0.12.2 \
		base-deriving-via-0.1.0.0:chap \
		base-orphans-0.8.7 \
		base16-bytestring-1.0.2.0 \
		base58-bytestring-0.1.0 \
		base64-bytestring-1.2.1.0 \
		base64-bytestring-type-1.0.1_15 \
		basement-0.0.15 \
		bech32-1.1.2 \
		bifunctors-5.5.14 \
		bimap-0.4.0_1 \
		bin-0.1_2 \
		binary-orphans-1.0.3 \
		blaze-builder-0.4.2.2_1 \
		blaze-html-0.9.1.2_2 \
		blaze-markup-0.8.2.8_3 \
		boring-0.2_2 \
		bsb-http-chunked-0.0.0.4_3 \
		byron-spec-chain-0.1.0.0:chap \
		byron-spec-ledger-0.1.0.0:chap \
		byteorder-1.0.4 \
		bytestring-builder-0.10.8.2.0 \
		cabal-doctest-1.0.9_2 \
		call-stack-0.4.0 \
		canonical-json-0.6.0.1 \
		cardano-binary-1.5.0:chap \
		cardano-binary-test-1.3.0:chap \
		cardano-crypto-1.1.1:chap \
		cardano-crypto-class-2.0.0.0.1:chap \
		cardano-crypto-praos-2.0.0.0.1:chap \
		cardano-crypto-test-1.3.0:chap \
		cardano-crypto-tests-2.0.0.0.1:chap \
		cardano-crypto-wrapper-1.3.0:chap \
		cardano-data-0.1.0.1:chap \
		cardano-ledger-alonzo-0.1.0.0:chap \
		cardano-ledger-babbage-0.1.0.0:chap \
		cardano-ledger-byron-0.1.0.0:chap \
		cardano-ledger-byron-test-1.3.0:chap \
		cardano-ledger-core-0.1.0.0:chap \
		cardano-ledger-pretty-0.1.0.0:chap \
		cardano-ledger-shelley-0.1.0.0:chap \
		cardano-ledger-shelley-ma-0.1.0.0:chap \
		cardano-ledger-shelley-test-0.1.0.0:chap \
		cardano-prelude-0.1.0.0:chap \
		cardano-prelude-test-0.1.0.1:chap \
		cardano-protocol-tpraos-0.1.0.0:chap \
		cardano-slotting-0.1.0.0:chap \
		case-insensitive-1.2.1.0 \
		cassava-0.5.3.0 \
		cborg-0.2.8.0_1 \
		cereal-0.5.8.3 \
		charset-0.3.9 \
		clock-0.8.3 \
		cmdargs-0.10.21 \
		code-page-0.2.1 \
		colour-2.3.6 \
		comonad-5.0.8_1 \
		composition-prelude-3.0.0.2 \
		concurrent-output-1.10.17 \
		conduit-1.3.4.3_1 \
		connection-0.3.1_1 \
		constraints-0.13.4 \
		constraints-extras-0.4.0.0 \
		contra-tracer-0.1.0.0:chap \
		contravariant-1.5.5 \
		cookie-0.4.6 \
		criterion-1.6.0.0 \
		criterion-measurement-0.2.0.0 \
		cryptonite-0.27_1 \
		data-accessor-0.2.3.1 \
		data-accessor-transformers-0.2.1.8 \
		data-default-0.7.1.1 \
		data-default-class-0.1.2.0 \
		data-default-instances-containers-0.0.1 \
		data-default-instances-dlist-0.0.1 \
		data-default-instances-old-locale-0.0.1 \
		data-fix-0.3.2_3 \
		dec-0.0.5 \
		dense-linear-algebra-0.1.0.0 \
		dependent-map-0.4.0.0_1 \
		dependent-sum-0.7.1.1 \
		dependent-sum-template-0.1.1.1 \
		deque-0.4.4 \
		deriving-aeson-0.2.9 \
		deriving-compat-0.6.2 \
		dictionary-sharing-0.1.0.0_3 \
		digest-0.0.1.5 \
		distributive-0.6.2.1_1 \
		dlist-1.0 \
		dns-3.0.4_1 \
		dom-lt-0.2.3 \
		easy-file-0.2.2 \
		either-5.0.2 \
		ekg-0.4.0.15_8 \
		ekg-core-0.1.1.7_2 \
		ekg-forward-0.1.0:chap \
		entropy-0.4.1.10 \
		erf-2.0.0.0 \
		extra-1.7.12 \
		fast-logger-3.1.1 \
		fgl-5.8.1.0 \
		file-embed-0.0.15.0 \
		filelock-0.1.1.5 \
		fin-0.1.1_2 \
		fingertree-0.1.5.0 \
		flat-0.4.4.0.0.0.0.2:chap \
		fmlist-0.9.4 \
		foldl-1.4.14 \
		formatting-6.3.7_2 \
		foundation-0.0.29 \
		free-5.1.10 \
		generic-data-1.0.0.0 \
		generic-deriving-1.14.2 \
		generic-monoid-0.1.0.1_2 \
		generic-random-1.5.0.1 \
		generically-0.1 \
		gnuplot-0.5.7 \
		goblins-0.2.0.0:chap \
		graphviz-2999.20.1.0_2 \
		gray-code-0.3.1 \
		groups-0.5.3 \
		half-0.3.1 \
		happy-1.20.0_1 \
		hashable-1.3.5.0_1 \
		haskell-lexer-1.1.1 \
		hedgehog-1.2 \
		hedgehog-extras-0.2.0.0:chap \
		hedgehog-quickcheck-0.1.1_4 \
		hostname-1.0 \
		hourglass-0.2.12 \
		hsc2hs-0.68.8_1 \
		hspec-2.10.9 \
		hspec-core-2.10.9 \
		hspec-discover-2.10.9 \
		hspec-expectations-0.8.2 \
		http-api-data-0.5_1 \
		http-client-0.7.13.1_1 \
		http-client-tls-0.3.6.1 \
		http-date-0.0.11 \
		http-media-0.8.0.0_7 \
		http-types-0.12.3 \
		http2-3.0.3 \
		hw-aeson-0.1.8.0_2 \
		indexed-traversable-0.1.2_2 \
		indexed-traversable-instances-0.1.1.1 \
		int-cast-0.2.0.0.0.0.0.0.1:chap \
		integer-logarithms-1.0.3.1_4 \
		invariant-0.6_1 \
		io-classes-0.2.0.0:chap \
		io-sim-0.2.0.0:chap \
		io-streams-1.5.2.2 \
		io-streams-haproxy-1.0.1.0_6 \
		iohk-monitoring-0.1.11.0:chap \
		iproute-1.7.12 \
		ixset-typed-0.5.1.0 \
		js-chart-2.9.4.1 \
		kan-extensions-5.2.5 \
		katip-0.8.7.2 \
		lazy-search-0.1.3.0 \
		lazysmallcheck-0.6 \
		lens-5.2 \
		libyaml-0.1.2_1 \
		lifted-async-0.10.2.3 \
		lifted-base-0.2.3.12 \
		list-t-1.0.5.6 \
		lobemo-backend-aggregation-0.1.0.0:chap \
		lobemo-backend-ekg-0.1.0.1:chap \
		lobemo-backend-monitoring-0.1.0.0:chap \
		lobemo-backend-trace-forwarder-0.1.0.0:chap \
		logict-0.8.0.0 \
		math-functions-0.3.4.2 \
		measures-0.1.0.0:chap \
		megaparsec-9.2.1_1 \
		memory-0.18.0 \
		mersenne-random-pure64-0.2.2.0_1 \
		microlens-0.4.13.1 \
		microlens-mtl-0.2.0.3 \
		microlens-th-0.4.3.11 \
		microstache-1.0.2.3 \
		mime-types-0.1.1.0 \
		mmorph-1.2.0_3 \
		monad-control-1.0.3.1 \
		mono-traversable-1.0.15.3 \
		monoidal-containers-0.6.3.0 \
		monoidal-synchronisation-0.1.0.1:chap \
		mtl-compat-0.2.2 \
		mwc-random-0.15.0.2_1 \
		network-3.1.2.7 \
		network-byte-order-0.1.6_1 \
		network-mux-0.1.0.1:chap \
		network-uri-2.6.4.2 \
		newtype-0.2.2.0_3 \
		non-integral-0.1.0.0:chap \
		nothunks-0.1.3 \
		old-locale-1.0.0.7_2 \
		old-time-1.1.0.3_2 \
		openssl-streams-1.2.3.0_1 \
		optparse-applicative-0.17.0.0 \
		optparse-applicative-fork-0.16.1.0:chap \
		optparse-generic-1.4.9 \
		orphans-deriving-via-0.1.0.0:chap \
		ouroboros-consensus-0.1.0.1:chap \
		ouroboros-consensus-byron-0.1.0.1:chap \
		ouroboros-consensus-cardano-0.1.0.1:chap \
		ouroboros-consensus-cardano-tools-0.1.0.1:chap \
		ouroboros-consensus-protocol-0.1.0.1:chap \
		ouroboros-consensus-shelley-0.1.0.1:chap \
		ouroboros-network-0.1.0.1:chap \
		ouroboros-network-framework-0.1.0.1:chap \
		ouroboros-network-testing-0.1.0.1:chap \
		parallel-3.2.2.0_5 \
		parser-combinators-1.3.0 \
		parsers-0.12.11 \
		partial-order-0.2.0.0 \
		pem-0.2.4 \
		pipes-4.3.16_6 \
		plutus-core-1.0.0.1:chap \
		plutus-ledger-api-1.0.0.1:chap \
		plutus-tx-1.0.0.0:chap \
		polyparse-1.13_6 \
		pretty-show-1.10 \
		pretty-simple-4.1.2.0 \
		prettyprinter-1.7.1 \
		prettyprinter-ansi-terminal-1.1.3 \
		prettyprinter-configurable-0.1.0.0:chap \
		primitive-0.7.4.0_1 \
		process-extras-0.7.4 \
		profunctors-5.6.2_2 \
		prometheus-2.2.3 \
		protolude-0.3.0 \
		psqueues-0.2.7.3 \
		quickcheck-instances-0.3.28 \
		quickcheck-io-0.2.0 \
		quiet-0.2 \
		ral-0.1_2 \
		random-1.2.1.1 \
		random-shuffle-0.0.4 \
		readable-0.3.1_1 \
		recursion-schemes-5.2.2.3 \
		recv-0.0.0 \
		reducers-3.12.4_2 \
		reflection-2.1.6_1 \
		regex-base-0.94.0.2_1 \
		regex-posix-0.96.0.1_1 \
		resourcet-1.2.6 \
		safe-0.3.19 \
		safe-exceptions-0.1.7.3 \
		safecopy-0.10.4.2_5 \
		scientific-0.3.7.0_3 \
		selective-0.5 \
		semialign-1.2.0.1_3 \
		semigroupoids-5.3.7 \
		semigroups-0.20 \
		serialise-0.2.6.0_1 \
		servant-0.19.1 \
		servant-server-0.19.2_1 \
		set-algebra-0.1.0.0:chap \
		setenv-0.1.1.3_1 \
		show-combinators-0.2.0.0_2 \
		simple-sendfile-0.2.30 \
		singleton-bool-0.1.5_3 \
		size-based-0.1.3.1 \
		small-steps-0.1.0.0:chap \
		small-steps-test-0.1.0.0:chap \
		snap-blaze-0.2.1.5 \
		snap-core-1.0.5.0_3 \
		snap-server-1.1.2.0_2 \
		socks-0.6.1 \
		some-1.0.2 \
		sop-core-0.5.0.2_1 \
		split-0.2.3.5 \
		splitmix-0.1.0.4_2 \
		statistics-0.16.1.2 \
		statistics-linreg-0.3 \
		streaming-0.2.3.1 \
		streaming-binary-0.2.2.0 \
		streaming-bytestring-0.2.4 \
		streaming-commons-0.2.2.5 \
		strict-0.4.0.1_4 \
		strict-containers-0.1.0.0:chap \
		strict-list-0.1.7 \
		strict-stm-0.1.0.0:chap \
		string-conv-0.2.0 \
		string-conversions-0.4.0.1_1 \
		string-qq-0.0.4 \
		syb-0.7.2.2 \
		system-filepath-0.4.14_1 \
		tagged-0.8.6.1_3 \
		tasty-1.4.3 \
		tasty-expected-failure-0.12.3 \
		tasty-golden-2.3.5 \
		tasty-hedgehog-1.4.0.0 \
		tasty-hunit-0.10.0.3 \
		tasty-quickcheck-0.10.2 \
		tdigest-0.2.1.1_3 \
		temporary-1.3 \
		terminal-size-0.3.3 \
		testing-type-modifiers-0.1.0.1 \
		text-short-0.1.5_1 \
		tf-random-0.5 \
		th-abstraction-0.4.5.0 \
		th-compat-0.1.4 \
		th-expand-syns-0.4.10.0 \
		th-extras-0.0.0.6 \
		th-lift-0.8.2_2 \
		th-lift-instances-0.1.20 \
		th-orphans-0.13.14 \
		th-reify-many-0.1.10 \
		th-utilities-0.2.5.0 \
		these-1.1.1.1_6 \
		time-compat-1.9.6.1_4 \
		time-manager-0.0.0_1 \
		time-units-1.0.0 \
		tls-1.6.0 \
		tracer-transformers-0.1.0.1:chap \
		transformers-base-0.4.6 \
		transformers-compat-0.6.6 \
		transformers-except-0.1.3 \
		tree-diff-0.2.2 \
		type-equality-1_4 \
		typed-process-0.2.10.1 \
		typed-protocols-0.1.0.0:chap \
		typed-protocols-cborg-0.1.0.0:chap \
		typed-protocols-examples-0.1.0.1:chap \
		typerep-map-0.6.0.0 \
		unagi-chan-0.4.1.4 \
		unbounded-delays-0.1.1.1 \
		unix-bytestring-0.3.7.8 \
		unix-compat-0.6_1 \
		unix-time-0.4.8 \
		unliftio-0.2.23.0 \
		unliftio-core-0.2.0.1_2 \
		unordered-containers-0.2.19.1_1 \
		utf8-string-1.0.2 \
		utility-ht-0.0.16 \
		uuid-types-1.0.5_3 \
		validation-selective-0.1.0.2 \
		vault-0.3.1.5_2 \
		vector-0.12.3.1_2 \
		vector-algorithms-0.8.0.4_2 \
		vector-binary-instances-0.2.5.2_3 \
		vector-map-0.1.0.0:chap \
		vector-th-unbox-0.2.2_3 \
		void-0.7.3 \
		wai-3.2.3 \
		wai-app-static-3.1.7.4 \
		wai-extra-3.1.13.0_1 \
		wai-logger-2.4.0 \
		warp-3.3.23_1 \
		websockets-0.12.7.3_2 \
		websockets-snap-0.10.3.1_1 \
		witherable-0.4.2_3 \
		wl-pprint-annotated-0.1.0.1_1 \
		wl-pprint-text-1.2.0.2 \
		word-array-0.1.0.0:chap \
		word8-0.1.3 \
		x509-1.7.7 \
		x509-store-1.6.9 \
		x509-system-1.6.7 \
		x509-validation-1.6.12 \
		yaml-0.11.8.0_2 \
		zlib-0.6.3.0 \
		zlib-bindings-0.1.1.5_2

CABAL_PROJECT=		append
CABAL_EXECUTABLES=	cardano-node cardano-cli cardano-submit-api cardano-tracer
CABAL_REPOSITORIES=	chap

NOT_FOR_ARCHS=		i386

post-patch:
	${REINPLACE_CMD} -e 's/$$(gitRevFromGit)/"${CARDANO_NODE_HASH}"/' \
			 -e '/Cardano.Git.RevFromGit/d' \
			 ${WRKSRC}/cardano-git-rev/src/Cardano/Git/Rev.hs

	${ECHO_CMD} "package *" >> ${WRKSRC}/cabal.project.local
	${ECHO_CMD} "  extra-include-dirs: ${LIBS_PREFIX}${PREFIX}/include" >> ${WRKSRC}/cabal.project.local
	${ECHO_CMD} "  extra-lib-dirs: ${LIBS_PREFIX}${PREFIX}/lib" >> ${WRKSRC}/cabal.project.local

pre-build:
	cd ${WRKSRC_sodium} && ./autogen.sh
	cd ${WRKSRC_sodium} && ./configure --prefix=${PREFIX} --with-pthreads --disable-shared
	cd ${WRKSRC_sodium} && ${GMAKE} -j${MAKE_JOBS_NUMBER} && ${GMAKE} DESTDIR=${LIBS_PREFIX} ${INSTALL_TARGET}
	${MKDIR} ${LIBS_PREFIX}${PREFIX}/libdata/pkgconfig
	${MV} ${LIBS_PREFIX}${PREFIX}/lib/pkgconfig/libsodium.pc ${LIBS_PREFIX}${PREFIX}/libdata/pkgconfig/libsodium.pc

	cd ${WRKSRC_secp} && ./autogen.sh
	cd ${WRKSRC_secp} && ./configure --prefix=${PREFIX} --enable-module-schnorrsig --enable-experimental --with-pic --disable-shared
	cd ${WRKSRC_secp} && ${GMAKE} -j${MAKE_JOBS_NUMBER} && ${GMAKE} DESTDIR=${LIBS_PREFIX} ${INSTALL_TARGET}
	${MV} ${LIBS_PREFIX}${PREFIX}/lib/pkgconfig/libsecp256k1.pc ${LIBS_PREFIX}${PREFIX}/libdata/pkgconfig/libsecp256k1.pc

.include <bsd.port.mk>
