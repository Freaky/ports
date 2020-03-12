# $FreeBSD$

PORTNAME=	tarssh
PORTVERSION=	0.4.0
DISTVERSIONPREFIX=	v
CATEGORIES=	security

MAINTAINER=	tom@hur.st
COMMENT=	SSH tarpit server

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

USES=	cargo
USE_GITHUB=	yes
GH_ACCOUNT=	freaky

USE_RC_SUBR=	tarssh

CARGO_CRATES=	aho-corasick-0.7.10 \
		ansi_term-0.11.0 \
		arc-swap-0.4.4 \
		atty-0.2.14 \
		bitflags-1.2.1 \
		bytes-0.5.4 \
		cc-1.0.50 \
		cfg-if-0.1.10 \
		clap-2.33.0 \
		env_logger-0.7.1 \
		exitcode-1.1.2 \
		fnv-1.0.6 \
		fuchsia-zircon-0.3.3 \
		fuchsia-zircon-sys-0.3.3 \
		futures-0.3.4 \
		futures-channel-0.3.4 \
		futures-core-0.3.4 \
		futures-executor-0.3.4 \
		futures-io-0.3.4 \
		futures-macro-0.3.4 \
		futures-sink-0.3.4 \
		futures-task-0.3.4 \
		futures-util-0.3.4 \
		heck-0.3.1 \
		hermit-abi-0.1.8 \
		humantime-1.3.0 \
		iovec-0.1.4 \
		kernel32-sys-0.2.2 \
		lazy_static-1.4.0 \
		libc-0.2.67 \
		log-0.4.8 \
		memchr-2.3.3 \
		mio-0.6.21 \
		mio-uds-0.6.7 \
		miow-0.2.1 \
		net2-0.2.33 \
		nix-0.16.1 \
		num_cpus-1.12.0 \
		pin-project-lite-0.1.4 \
		pin-utils-0.1.0-alpha.4 \
		privdrop-0.3.4 \
		proc-macro-error-0.4.11 \
		proc-macro-error-attr-0.4.11 \
		proc-macro-hack-0.5.11 \
		proc-macro-nested-0.1.3 \
		proc-macro2-1.0.9 \
		quick-error-1.2.3 \
		quote-1.0.3 \
		regex-1.3.4 \
		regex-syntax-0.6.16 \
		rusty-sandbox-0.2.0 \
		signal-hook-registry-1.2.0 \
		slab-0.4.2 \
		strsim-0.8.0 \
		structopt-0.3.11 \
		structopt-derive-0.4.4 \
		syn-1.0.16 \
		syn-mid-0.5.0 \
		termcolor-1.1.0 \
		textwrap-0.11.0 \
		thread_local-1.0.1 \
		tokio-0.2.13 \
		unicode-segmentation-1.6.0 \
		unicode-width-0.1.7 \
		unicode-xid-0.2.0 \
		unix_socket-0.5.0 \
		vec_map-0.8.1 \
		version_check-0.9.1 \
		void-1.0.2 \
		winapi-0.2.8 \
		winapi-0.3.8 \
		winapi-build-0.1.1 \
		winapi-i686-pc-windows-gnu-0.4.0 \
		winapi-util-0.1.3 \
		winapi-x86_64-pc-windows-gnu-0.4.0 \
		ws2_32-sys-0.2.1

PLIST_FILES=	sbin/tarssh

do-install:
	@${INSTALL_PROGRAM} ${CARGO_TARGET_DIR}/release/tarssh ${STAGEDIR}${PREFIX}/sbin/tarssh

.include <bsd.port.mk>
