# Created by: Thomas Hurst <tom@hur.st>
# $FreeBSD: head/sysutils/lnav/Makefile 383063 2015-04-02 20:18:50Z pawel $

PORTNAME=	lnav
PORTVERSION=	0.7.2
CATEGORIES=	sysutils

MAINTAINER=	tom@hur.st
COMMENT=	Terminal based log file navigator

LICENSE=	BSD2CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/lib/libpcre.a:${PORTSDIR}/devel/pcre

USE_GITHUB=	yes
GH_ACCOUNT=	tstack
GH_TAGNAME=	v${PORTVERSION}

GNU_CONFIGURE=	yes
USES=		execinfo ncurses readline python
USE_SQLITE=	3

PLIST_FILES=	bin/lnav man/man1/lnav.1.gz

.include <bsd.port.mk>
