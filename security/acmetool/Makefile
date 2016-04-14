# Created by: Thomas Hurst <tom@hur.st>
# $FreeBSD$

PORTNAME=	acmetool
PORTVERSION=0.0.50
DISTVERSIONPREFIX=	v
CATEGORIES=	security

MAINTAINER=	tom@hur.st
COMMENT=	Tool for acquiring certificates from ACME servers

BUILD_DEPENDS=	go>=1.5.0:${PORTSDIR}/lang/go

ONLY_FOR_ARCHS=	i386 amd64

USE_GITHUB=	yes
GH_ACCOUNT=	hlandau:DEFAULT
GH_PROJECT=	acme
GH_TAGNAME=	b07267a
GH_TUPLE=	alecthomas:kingpin:v2.1.11:kingpin \
		alecthomas:template:a0175ee:template \
		alecthomas:units:2efee85:units \
		cheggaaa:pb:v1.0.2:pb \
		coreos:go-systemd:v5:systemd \
		go-yaml:yaml:a83829b:yaml \
		golang:crypto:1777f3b:crypto \
		golang:net:fb93926:net \
		hlandau:configurable:v1.0.1:configurable \
		hlandau:degoutils:a7296d8:degoutils \
		hlandau:easyconfig:v1.0.14:easyconfig \
		hlandau:service:v2.0.15:service \
		hlandau:svcutils:v1.0.7:svcutils \
		hlandau:xlog:197ef79:xlog \
		hlandauf:gspt:25f3bd3:gspt \
		jmhodges:clock:v1.0:clock \
		mattn:go-isatty:v0.0.1:isatty \
		mitchellh:go-wordwrap:ad45545:wordwrap \
		ogier:pflag:45c278a:pflag \
		peterhellberg:link:v1.0.0:link \
		satori:go.uuid:v1.0.0:uuid \
		shiena:ansicolor:a422bbe:ansicolor \
		square:go-jose:v1.0.1:go_jose \
		tylerb:graceful:v1.2.5:graceful

STRIP=		# stripping can break go binaries

post-patch:
	@${MKDIR} ${WRKSRC}/src/github.com/alecthomas
	@${MKDIR} ${WRKSRC}/src/github.com/coreos
	@${MKDIR} ${WRKSRC}/src/github.com/hlandauf
	@${MKDIR} ${WRKSRC}/src/github.com/jmhodges
	@${MKDIR} ${WRKSRC}/src/github.com/mattn
	@${MKDIR} ${WRKSRC}/src/github.com/mitchellh
	@${MKDIR} ${WRKSRC}/src/github.com/ogier
	@${MKDIR} ${WRKSRC}/src/github.com/peterhellberg
	@${MKDIR} ${WRKSRC}/src/github.com/satori
	@${MKDIR} ${WRKSRC}/src/github.com/shiena
	@${MKDIR} ${WRKSRC}/src/golang.org/x
	@${MKDIR} ${WRKSRC}/src/gopkg.in/alecthomas
	@${MKDIR} ${WRKSRC}/src/gopkg.in/cheggaaa
	@${MKDIR} ${WRKSRC}/src/gopkg.in/hlandau
	@${MKDIR} ${WRKSRC}/src/gopkg.in/square
	@${MKDIR} ${WRKSRC}/src/gopkg.in/tylerb
	@${MKDIR} ${WRKSRC}/src/github.com/${GH_ACCOUNT}/${GH_PROJECT}
	@cd ${WRKSRC} && \
		mv Makefile README.md _doc acmeapi cmd fdb hooks \
		interaction redirector responder solver storage storageops \
		${WRKSRC}/src/github.com/${GH_ACCOUNT}/${GH_PROJECT}
	@${MV} ${WRKSRC_degoutils} ${WRKSRC}/src/github.com/hlandau/degoutils
	@${MV} ${WRKSRC_xlog} ${WRKSRC}/src/github.com/hlandau/xlog
	@${MV} ${WRKSRC_go_jose} ${WRKSRC}/src/gopkg.in/square/go-jose.v1
	@${MV} ${WRKSRC_kingpin} ${WRKSRC}/src/gopkg.in/alecthomas/kingpin.v2
	@${MV} ${WRKSRC_easyconfig} ${WRKSRC}/src/gopkg.in/hlandau/easyconfig.v1
	@${MV} ${WRKSRC_service} ${WRKSRC}/src/gopkg.in/hlandau/service.v2
	@${MV} ${WRKSRC_yaml} ${WRKSRC}/src/gopkg.in/yaml.v2
	@${MV} ${WRKSRC_isatty} ${WRKSRC}/src/github.com/mattn/go-isatty
	@${MV} ${WRKSRC_link} ${WRKSRC}/src/github.com/peterhellberg/link
	@${MV} ${WRKSRC_ansicolor} ${WRKSRC}/src/github.com/shiena/ansicolor
	@${MV} ${WRKSRC_crypto} ${WRKSRC}/src/golang.org/x/crypto
	@${MV} ${WRKSRC_net} ${WRKSRC}/src/golang.org/x/net
	@${MV} ${WRKSRC_template} ${WRKSRC}/src/github.com/alecthomas/template
	@${MV} ${WRKSRC_units} ${WRKSRC}/src/github.com/alecthomas/units
	@${MV} ${WRKSRC_systemd} ${WRKSRC}/src/github.com/coreos/go-systemd
	@${MV} ${WRKSRC_clock} ${WRKSRC}/src/github.com/jmhodges/clock
	@${MV} ${WRKSRC_gspt} ${WRKSRC}/src/github.com/hlandauf/gspt
	@${MV} ${WRKSRC_wordwrap} ${WRKSRC}/src/github.com/mitchellh/go-wordwrap
	@${MV} ${WRKSRC_pflag} ${WRKSRC}/src/github.com/ogier/pflag
	@${MV} ${WRKSRC_uuid} ${WRKSRC}/src/github.com/satori/go.uuid
	@${MV} ${WRKSRC_pb} ${WRKSRC}/src/gopkg.in/cheggaaa/pb.v1
	@${MV} ${WRKSRC_configurable} ${WRKSRC}/src/gopkg.in/hlandau/configurable.v1
	@${MV} ${WRKSRC_svcutils} ${WRKSRC}/src/gopkg.in/hlandau/svcutils.v1
	@${MV} ${WRKSRC_graceful} ${WRKSRC}/src/gopkg.in/tylerb/graceful.v1

do-build:
	@cd ${WRKSRC}/src/github.com/hlandau/acme && ${SETENV} GOPATH=${WRKSRC} go install ./...

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bin/acmetool ${STAGEDIR}${PREFIX}/bin/acmetool	

regression-test:
	@cd ${WRKSRC}/src/github.com/hlandau/acme && ${SETENV} GOPATH=${WRKSRC} go test ./...

.include <bsd.port.mk>
