/* crypto/ec/ec_err.c */
/* ====================================================================
 * Copyright (c) 1999-2002 The OpenSSL Project.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer. 
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. All advertising materials mentioning features or use of this
 *    software must display the following acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit. (http://www.OpenSSL.org/)"
 *
 * 4. The names "OpenSSL Toolkit" and "OpenSSL Project" must not be used to
 *    endorse or promote products derived from this software without
 *    prior written permission. For written permission, please contact
 *    openssl-core@OpenSSL.org.
 *
 * 5. Products derived from this software may not be called "OpenSSL"
 *    nor may "OpenSSL" appear in their names without prior written
 *    permission of the OpenSSL Project.
 *
 * 6. Redistributions of any form whatsoever must retain the following
 *    acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit (http://www.OpenSSL.org/)"
 *
 * THIS SOFTWARE IS PROVIDED BY THE OpenSSL PROJECT ``AS IS'' AND ANY
 * EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE OpenSSL PROJECT OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 * ====================================================================
 *
 * This product includes cryptographic software written by Eric Young
 * (eay@cryptsoft.com).  This product includes software written by Tim
 * Hudson (tjh@cryptsoft.com).
 *
 */

/* NOTE: this file was auto generated by the mkerr.pl script: any changes
 * made to it will be overwritten when the script next updates this file,
 * only reason strings will be preserved.
 */

#include <stdio.h>
#include <openssl/err.h>
#include <openssl/ec.h>

/* BEGIN ERROR CODES */
#ifndef OPENSSL_NO_ERR
static ERR_STRING_DATA EC_str_functs[]=
	{
{ERR_PACK(0,EC_F_COMPUTE_WNAF,0),	"COMPUTE_WNAF"},
{ERR_PACK(0,EC_F_D2I_ECDSAPARAMETERS,0),	"d2i_ECDSAParameters"},
{ERR_PACK(0,EC_F_D2I_ECPARAMETERS,0),	"d2i_ECParameters"},
{ERR_PACK(0,EC_F_D2I_ECPKPARAMETERS,0),	"d2i_ECPKParameters"},
{ERR_PACK(0,EC_F_ECPKPARAMETERS_PRINT,0),	"ECPKParameters_print"},
{ERR_PACK(0,EC_F_ECPKPARAMETERS_PRINT_FP,0),	"ECPKParameters_print_fp"},
{ERR_PACK(0,EC_F_EC_ASN1_GROUP2CURVE,0),	"EC_ASN1_GROUP2CURVE"},
{ERR_PACK(0,EC_F_EC_ASN1_GROUP2FIELDID,0),	"EC_ASN1_GROUP2FIELDID"},
{ERR_PACK(0,EC_F_EC_ASN1_GROUP2PARAMETERS,0),	"EC_ASN1_GROUP2PARAMETERS"},
{ERR_PACK(0,EC_F_EC_ASN1_GROUP2PKPARAMETERS,0),	"EC_ASN1_group2pkparameters"},
{ERR_PACK(0,EC_F_EC_ASN1_PARAMETERS2GROUP,0),	"EC_ASN1_PARAMETERS2GROUP"},
{ERR_PACK(0,EC_F_EC_ASN1_PKPARAMETERS2GROUP,0),	"EC_ASN1_pkparameters2group"},
{ERR_PACK(0,EC_F_EC_GF2M_SIMPLE_GROUP_CHECK_DISCRIMINANT,0),	"ec_GF2m_simple_group_check_discriminant"},
{ERR_PACK(0,EC_F_EC_GF2M_SIMPLE_OCT2POINT,0),	"ec_GF2m_simple_oct2point"},
{ERR_PACK(0,EC_F_EC_GF2M_SIMPLE_POINT2OCT,0),	"ec_GF2m_simple_point2oct"},
{ERR_PACK(0,EC_F_EC_GF2M_SIMPLE_POINT_GET_AFFINE_COORDINATES_GF2M,0),	"ec_GF2m_simple_point_get_affine_coordinates_GF2m"},
{ERR_PACK(0,EC_F_EC_GF2M_SIMPLE_POINT_SET_AFFINE_COORDINATES_GF2M,0),	"ec_GF2m_simple_point_set_affine_coordinates_GF2m"},
{ERR_PACK(0,EC_F_EC_GF2M_SIMPLE_SET_COMPRESSED_COORDINATES_GF2M,0),	"ec_GF2m_simple_set_compressed_coordinates_GF2m"},
{ERR_PACK(0,EC_F_EC_GFP_MONT_FIELD_DECODE,0),	"ec_GFp_mont_field_decode"},
{ERR_PACK(0,EC_F_EC_GFP_MONT_FIELD_ENCODE,0),	"ec_GFp_mont_field_encode"},
{ERR_PACK(0,EC_F_EC_GFP_MONT_FIELD_MUL,0),	"ec_GFp_mont_field_mul"},
{ERR_PACK(0,EC_F_EC_GFP_MONT_FIELD_SQR,0),	"ec_GFp_mont_field_sqr"},
{ERR_PACK(0,EC_F_EC_GFP_SIMPLE_GROUP_CHECK_DISCRIMINANT,0),	"ec_GFp_simple_group_check_discriminant"},
{ERR_PACK(0,EC_F_EC_GFP_SIMPLE_GROUP_SET_CURVE_GFP,0),	"ec_GFp_simple_group_set_curve_GFp"},
{ERR_PACK(0,EC_F_EC_GFP_SIMPLE_GROUP_SET_GENERATOR,0),	"EC_GFP_SIMPLE_GROUP_SET_GENERATOR"},
{ERR_PACK(0,EC_F_EC_GFP_SIMPLE_MAKE_AFFINE,0),	"ec_GFp_simple_make_affine"},
{ERR_PACK(0,EC_F_EC_GFP_SIMPLE_OCT2POINT,0),	"ec_GFp_simple_oct2point"},
{ERR_PACK(0,EC_F_EC_GFP_SIMPLE_POINT2OCT,0),	"ec_GFp_simple_point2oct"},
{ERR_PACK(0,EC_F_EC_GFP_SIMPLE_POINTS_MAKE_AFFINE,0),	"ec_GFp_simple_points_make_affine"},
{ERR_PACK(0,EC_F_EC_GFP_SIMPLE_POINT_GET_AFFINE_COORDINATES_GFP,0),	"ec_GFp_simple_point_get_affine_coordinates_GFp"},
{ERR_PACK(0,EC_F_EC_GFP_SIMPLE_POINT_SET_AFFINE_COORDINATES_GFP,0),	"ec_GFp_simple_point_set_affine_coordinates_GFp"},
{ERR_PACK(0,EC_F_EC_GFP_SIMPLE_SET_COMPRESSED_COORDINATES_GFP,0),	"ec_GFp_simple_set_compressed_coordinates_GFp"},
{ERR_PACK(0,EC_F_EC_GROUP_CHECK,0),	"EC_GROUP_check"},
{ERR_PACK(0,EC_F_EC_GROUP_CHECK_DISCRIMINANT,0),	"EC_GROUP_check_discriminant"},
{ERR_PACK(0,EC_F_EC_GROUP_COPY,0),	"EC_GROUP_copy"},
{ERR_PACK(0,EC_F_EC_GROUP_GET0_GENERATOR,0),	"EC_GROUP_get0_generator"},
{ERR_PACK(0,EC_F_EC_GROUP_GET_COFACTOR,0),	"EC_GROUP_get_cofactor"},
{ERR_PACK(0,EC_F_EC_GROUP_GET_CURVE_GF2M,0),	"EC_GROUP_get_curve_GF2m"},
{ERR_PACK(0,EC_F_EC_GROUP_GET_CURVE_GFP,0),	"EC_GROUP_get_curve_GFp"},
{ERR_PACK(0,EC_F_EC_GROUP_GET_DEGREE,0),	"EC_GROUP_get_degree"},
{ERR_PACK(0,EC_F_EC_GROUP_GET_EXTRA_DATA,0),	"EC_GROUP_get_extra_data"},
{ERR_PACK(0,EC_F_EC_GROUP_GET_ORDER,0),	"EC_GROUP_get_order"},
{ERR_PACK(0,EC_F_EC_GROUP_GROUP2NID,0),	"EC_GROUP_GROUP2NID"},
{ERR_PACK(0,EC_F_EC_GROUP_NEW,0),	"EC_GROUP_new"},
{ERR_PACK(0,EC_F_EC_GROUP_NEW_BY_NAME,0),	"EC_GROUP_new_by_name"},
{ERR_PACK(0,EC_F_EC_GROUP_NEW_BY_NID,0),	"EC_GROUP_new_by_nid"},
{ERR_PACK(0,EC_F_EC_GROUP_NEW_GF2M_FROM_HEX,0),	"EC_GROUP_NEW_GF2M_FROM_HEX"},
{ERR_PACK(0,EC_F_EC_GROUP_NEW_GFP_FROM_HEX,0),	"EC_GROUP_NEW_GFP_FROM_HEX"},
{ERR_PACK(0,EC_F_EC_GROUP_PRECOMPUTE_MULT,0),	"EC_GROUP_precompute_mult"},
{ERR_PACK(0,EC_F_EC_GROUP_SET_CURVE_GF2M,0),	"EC_GROUP_set_curve_GF2m"},
{ERR_PACK(0,EC_F_EC_GROUP_SET_CURVE_GFP,0),	"EC_GROUP_set_curve_GFp"},
{ERR_PACK(0,EC_F_EC_GROUP_SET_EXTRA_DATA,0),	"EC_GROUP_set_extra_data"},
{ERR_PACK(0,EC_F_EC_GROUP_SET_GENERATOR,0),	"EC_GROUP_set_generator"},
{ERR_PACK(0,EC_F_EC_POINTS_MAKE_AFFINE,0),	"EC_POINTs_make_affine"},
{ERR_PACK(0,EC_F_EC_POINTS_MUL,0),	"EC_POINTs_mul"},
{ERR_PACK(0,EC_F_EC_POINT_ADD,0),	"EC_POINT_add"},
{ERR_PACK(0,EC_F_EC_POINT_CMP,0),	"EC_POINT_cmp"},
{ERR_PACK(0,EC_F_EC_POINT_COPY,0),	"EC_POINT_copy"},
{ERR_PACK(0,EC_F_EC_POINT_DBL,0),	"EC_POINT_dbl"},
{ERR_PACK(0,EC_F_EC_POINT_GET_AFFINE_COORDINATES_GF2M,0),	"EC_POINT_get_affine_coordinates_GF2m"},
{ERR_PACK(0,EC_F_EC_POINT_GET_AFFINE_COORDINATES_GFP,0),	"EC_POINT_get_affine_coordinates_GFp"},
{ERR_PACK(0,EC_F_EC_POINT_GET_JPROJECTIVE_COORDINATES_GF2M,0),	"EC_POINT_get_Jprojective_coordinates_GF2m"},
{ERR_PACK(0,EC_F_EC_POINT_GET_JPROJECTIVE_COORDINATES_GFP,0),	"EC_POINT_get_Jprojective_coordinates_GFp"},
{ERR_PACK(0,EC_F_EC_POINT_IS_AT_INFINITY,0),	"EC_POINT_is_at_infinity"},
{ERR_PACK(0,EC_F_EC_POINT_IS_ON_CURVE,0),	"EC_POINT_is_on_curve"},
{ERR_PACK(0,EC_F_EC_POINT_MAKE_AFFINE,0),	"EC_POINT_make_affine"},
{ERR_PACK(0,EC_F_EC_POINT_MUL,0),	"EC_POINT_mul"},
{ERR_PACK(0,EC_F_EC_POINT_NEW,0),	"EC_POINT_new"},
{ERR_PACK(0,EC_F_EC_POINT_OCT2POINT,0),	"EC_POINT_oct2point"},
{ERR_PACK(0,EC_F_EC_POINT_POINT2OCT,0),	"EC_POINT_point2oct"},
{ERR_PACK(0,EC_F_EC_POINT_SET_AFFINE_COORDINATES_GF2M,0),	"EC_POINT_set_affine_coordinates_GF2m"},
{ERR_PACK(0,EC_F_EC_POINT_SET_AFFINE_COORDINATES_GFP,0),	"EC_POINT_set_affine_coordinates_GFp"},
{ERR_PACK(0,EC_F_EC_POINT_SET_COMPRESSED_COORDINATES_GF2M,0),	"EC_POINT_set_compressed_coordinates_GF2m"},
{ERR_PACK(0,EC_F_EC_POINT_SET_COMPRESSED_COORDINATES_GFP,0),	"EC_POINT_set_compressed_coordinates_GFp"},
{ERR_PACK(0,EC_F_EC_POINT_SET_JPROJECTIVE_COORDINATES_GF2M,0),	"EC_POINT_set_Jprojective_coordinates_GF2m"},
{ERR_PACK(0,EC_F_EC_POINT_SET_JPROJECTIVE_COORDINATES_GFP,0),	"EC_POINT_set_Jprojective_coordinates_GFp"},
{ERR_PACK(0,EC_F_EC_POINT_SET_TO_INFINITY,0),	"EC_POINT_set_to_infinity"},
{ERR_PACK(0,EC_F_EC_WNAF_MUL,0),	"ec_wNAF_mul"},
{ERR_PACK(0,EC_F_EC_WNAF_PRECOMPUTE_MULT,0),	"ec_wNAF_precompute_mult"},
{ERR_PACK(0,EC_F_GFP_MONT_GROUP_SET_CURVE_GFP,0),	"GFP_MONT_GROUP_SET_CURVE_GFP"},
{ERR_PACK(0,EC_F_I2D_ECDSAPARAMETERS,0),	"i2d_ECDSAParameters"},
{ERR_PACK(0,EC_F_I2D_ECPARAMETERS,0),	"i2d_ECParameters"},
{ERR_PACK(0,EC_F_I2D_ECPKPARAMETERS,0),	"i2d_ECPKParameters"},
{0,NULL}
	};

static ERR_STRING_DATA EC_str_reasons[]=
	{
{EC_R_ASN1_ERROR                         ,"asn1 error"},
{EC_R_ASN1_UNKNOWN_FIELD                 ,"asn1 unknown field"},
{EC_R_BUFFER_TOO_SMALL                   ,"buffer too small"},
{EC_R_D2I_ECPARAMETERS_FAILURE           ,"d2i ecparameters failure"},
{EC_R_D2I_ECPKPARAMETERS_FAILURE         ,"d2i ecpkparameters failure"},
{EC_R_D2I_EC_PARAMETERS_FAILURE          ,"d2i ec parameters failure"},
{EC_R_DISCRIMINANT_IS_ZERO               ,"discriminant is zero"},
{EC_R_EC_GROUP_NEW_BY_NAME_FAILURE       ,"ec group new by name failure"},
{EC_R_GROUP2PARAMETERS_FAILURE           ,"group2parameters failure"},
{EC_R_GROUP2PKPARAMETERS_FAILURE         ,"group2pkparameters failure"},
{EC_R_I2D_ECPKPARAMETERS_FAILURE         ,"i2d ecpkparameters failure"},
{EC_R_I2D_EC_PARAMETERS_FAILURE          ,"i2d ec parameters failure"},
{EC_R_INCOMPATIBLE_OBJECTS               ,"incompatible objects"},
{EC_R_INVALID_ARGUMENT                   ,"invalid argument"},
{EC_R_INVALID_COMPRESSED_POINT           ,"invalid compressed point"},
{EC_R_INVALID_COMPRESSION_BIT            ,"invalid compression bit"},
{EC_R_INVALID_ENCODING                   ,"invalid encoding"},
{EC_R_INVALID_FIELD                      ,"invalid field"},
{EC_R_INVALID_FORM                       ,"invalid form"},
{EC_R_INVALID_GROUP_ORDER                ,"invalid group order"},
{EC_R_MISSING_PARAMETERS                 ,"missing parameters"},
{EC_R_NOT_IMPLEMENTED                    ,"not implemented"},
{EC_R_NOT_INITIALIZED                    ,"not initialized"},
{EC_R_NO_SUCH_EXTRA_DATA                 ,"no such extra data"},
{EC_R_PARAMETERS2GROUP_FAILURE           ,"parameters2group failure"},
{EC_R_PKPARAMETERS2GROUP_FAILURE         ,"pkparameters2group failure"},
{EC_R_POINT_AT_INFINITY                  ,"point at infinity"},
{EC_R_POINT_IS_NOT_ON_CURVE              ,"point is not on curve"},
{EC_R_SLOT_FULL                          ,"slot full"},
{EC_R_UNDEFINED_GENERATOR                ,"undefined generator"},
{EC_R_UNDEFINED_ORDER                    ,"undefined order"},
{EC_R_UNKNOWN_GROUP                      ,"unknown group"},
{EC_R_UNKNOWN_NID                        ,"unknown nid"},
{EC_R_UNKNOWN_ORDER                      ,"unknown order"},
{EC_R_UNKNOWN_PARAMETERS_TYPE            ,"unknown parameters type"},
{0,NULL}
	};

#endif

void ERR_load_EC_strings(void)
	{
	static int init=1;

	if (init)
		{
		init=0;
#ifndef OPENSSL_NO_ERR
		ERR_load_strings(ERR_LIB_EC,EC_str_functs);
		ERR_load_strings(ERR_LIB_EC,EC_str_reasons);
#endif

		}
	}
