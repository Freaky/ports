# Created by: Thomas Hurst <tom@hur.st>
# $FreeBSD: $

PORTNAME=	attic
PORTVERSION=	0.15
CATEGORIES=	archivers python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	Attic-${PORTVERSION}

MAINTAINER=	tom@hur.st
COMMENT=	Deduplicating backup program

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}msgpack>=0.1.10:${PORTSDIR}/devel/py-msgpack
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}msgpack>=0.1.10:${PORTSDIR}/devel/py-msgpack

USES=		python:3.2+
USE_PYTHON=	distutils autoplist
USE_OPENSSL=	yes

.include <bsd.port.pre.mk>

.if ${OSVERSION} < 1000000 && !defined(WITH_OPENSSL_PORT)
IGNORE=		requires OpenSSL >= 1.0.0
.endif

.include <bsd.port.post.mk>
