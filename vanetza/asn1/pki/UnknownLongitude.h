/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2BaseTypes"
 * 	found in "asn1/IEEE1609dot2BaseTypes.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_UnknownLongitude_H_
#define	_UnknownLongitude_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OneEightyDegreeInt.h"

#ifdef __cplusplus
extern "C" {
#endif

/* UnknownLongitude */
typedef OneEightyDegreeInt_t	 UnknownLongitude_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UnknownLongitude;
asn_struct_free_f UnknownLongitude_free;
asn_struct_print_f UnknownLongitude_print;
asn_constr_check_f UnknownLongitude_constraint;
ber_type_decoder_f UnknownLongitude_decode_ber;
der_type_encoder_f UnknownLongitude_encode_der;
xer_type_decoder_f UnknownLongitude_decode_xer;
xer_type_encoder_f UnknownLongitude_encode_xer;
jer_type_encoder_f UnknownLongitude_encode_jer;
oer_type_decoder_f UnknownLongitude_decode_oer;
oer_type_encoder_f UnknownLongitude_encode_oer;
per_type_decoder_f UnknownLongitude_decode_uper;
per_type_encoder_f UnknownLongitude_encode_uper;
per_type_decoder_f UnknownLongitude_decode_aper;
per_type_encoder_f UnknownLongitude_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _UnknownLongitude_H_ */
#include "asn_internal.h"
