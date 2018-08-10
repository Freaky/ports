# $FreeBSD$

PORTNAME=	pkg-cruft
PORTVERSION=	0.1
CATEGORIES=	ports-mgmt

MAINTAINER=	tom@hur.st
COMMENT=	Help keep FreeBSD tidy

LICENSE=	MIT

USE_GITHUB=	yes
GH_ACCOUNT=	Freaky
GH_TAGNAME=	409568b818b8a6e15c1e6abae5496831229bb1cd

NO_ARCH=	yes
USE_RUBY=	yes
RUBY_NO_BUILD_DEPENDS=	yes

PLIST_FILES=	bin/pkg-cruft \
		man/man8/pkg-cruft.8.gz

do-build:
	# Nothing

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/pkg-cruft ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/pkg-cruft.8 ${STAGEDIR}${MAN8PREFIX}/man/man8

.include <bsd.port.mk>
