# $FreeBSD$

PORTNAME=	pkg-cruft
PORTVERSION=	0.1
CATEGORIES=	ports-mgmt

MAINTAINER=	tom@hur.st
COMMENT=	Help keep FreeBSD tidy

LICENSE=	MIT

USE_GITHUB=	yes
GH_ACCOUNT=	Freaky
GH_TAGNAME=	5ab92b3ff4a2452e325708c1ac2be24790058092

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
