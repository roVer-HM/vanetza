/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EtsiTs102941MessagesCa"
 * 	found in "asn1/TS102941v131-MessagesCa.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -R`
 */

#ifndef	_AuthorizationValidationRequestMessage_H_
#define	_AuthorizationValidationRequestMessage_H_


#include "asn_application.h"

/* Including external dependencies */
#include "EtsiTs103097Data-SignedAndEncrypted-Unicast.h"

#ifdef __cplusplus
extern "C" {
#endif

/* AuthorizationValidationRequestMessage */
typedef EtsiTs103097Data_SignedAndEncrypted_Unicast_64P0_t	 AuthorizationValidationRequestMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AuthorizationValidationRequestMessage;
asn_struct_free_f AuthorizationValidationRequestMessage_free;
asn_struct_print_f AuthorizationValidationRequestMessage_print;
asn_constr_check_f AuthorizationValidationRequestMessage_constraint;
ber_type_decoder_f AuthorizationValidationRequestMessage_decode_ber;
der_type_encoder_f AuthorizationValidationRequestMessage_encode_der;
xer_type_decoder_f AuthorizationValidationRequestMessage_decode_xer;
xer_type_encoder_f AuthorizationValidationRequestMessage_encode_xer;
oer_type_decoder_f AuthorizationValidationRequestMessage_decode_oer;
oer_type_encoder_f AuthorizationValidationRequestMessage_encode_oer;
per_type_decoder_f AuthorizationValidationRequestMessage_decode_uper;
per_type_encoder_f AuthorizationValidationRequestMessage_encode_uper;
per_type_decoder_f AuthorizationValidationRequestMessage_decode_aper;
per_type_encoder_f AuthorizationValidationRequestMessage_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _AuthorizationValidationRequestMessage_H_ */
#include "asn_internal.h"
