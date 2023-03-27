/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "build.asn1/iso/ISO19091.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_NodeSetXY_H_
#define	_NodeSetXY_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NodeXY;

/* NodeSetXY */
typedef struct NodeSetXY {
	A_SEQUENCE_OF(struct NodeXY) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NodeSetXY_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NodeSetXY;
extern asn_SET_OF_specifics_t asn_SPC_NodeSetXY_specs_1;
extern asn_TYPE_member_t asn_MBR_NodeSetXY_1[1];
extern asn_per_constraints_t asn_PER_type_NodeSetXY_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
/* #include "NodeXY.h" */

#endif	/* _NodeSetXY_H_ */
#include "asn_internal.h"
