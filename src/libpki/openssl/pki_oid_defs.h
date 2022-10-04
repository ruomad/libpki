/* OpenCA libpki package
* (c) 2000-2006 by Massimiliano Pala and OpenCA Group
* All Rights Reserved
*
* ===================================================================
* Released under OpenCA LICENSE
*/

#ifndef _LIBPKI_OID_DEFS_H
#define _LIBPKI_OID_DEFS_H

// GENERAL
# define LEVEL_OF_ASSURANCE_OID   		    "1.3.6.1.4.1.18227.50.1"
# define LEVEL_OF_ASSURANCE_NAME            "levelOfAssurance"
# define LEVEL_OF_ASSURANCE_DESC            "Level Of Assurance"

# define CERTIFICATE_USAGE_OID   		    "1.3.6.1.4.1.18227.50.2"
# define CERTIFICATE_USAGE_NAME             "certificateUsage"
# define CERTIFICATE_USAGE_DESC             "Certificate Usage"

# define CERTIFICATE_TEMPLATE_OID   		"1.3.6.1.4.1.18227.50.3"
# define CERTIFICATE_TEMPLATE_NAME          "certificateTemplate"
# define CERTIFICATE_TEMPLATE_DESC          "Certificate Template"

// PEN
# define OPENCA_OID							"1.3.6.1.4.1.18227"
# define OPENCA_NAME                        "OpenCA"
# define OPENCA_DESC                        "OpenCA Labs Private Enterprise Number"

// GENERIC
# define OPENCA_ALG_OID				            OPENCA_OID ".2"
# define OPENCA_ALG_PKEY_OID		            OPENCA_ALG_OID ".1"
# define OPENCA_ALG_SIGS_OID		            OPENCA_ALG_OID ".2"
# define OPENCA_ALG_KEMS_OID		            OPENCA_ALT_OID ".3"
# define OPENCA_ALG_HASH_OID		            OPENCA_ALT_OID ".4"
# define OPENCA_ALG_HMAC_OID		            OPENCA_ALT_OID ".5"
# define OPENCA_ALG_SYM_OID 		            OPENCA_ALT_OID ".6"

// COMPOSITE KEY
# define OPENCA_ALG_PKEY_COMP_OID	            OPENCA_ALG_PKEY_OID ".1"
# define OPENCA_ALG_PKEY_COMP_NAME	            "COMPOSITE"
# define OPENCA_ALG_PKEY_COMP_DESC	            "Composite Key"

// ALT KEY
# define OPENCA_ALG_PKEY_ALT_OID    	        OPENCA_ALG_PKEY_OID ".2"
# define OPENCA_ALG_PKEY_ALT_NAME               "ALTERNATIVE"
# define OPENCA_ALG_PKEY_ALT_DESC               "Multiple Alternative Key"

// ====================
// Composite Signatures
// ====================

# define OPENCA_ALG_SIGS_COMP_OID		        OPENCA_ALG_SIGS_OID ".1"
# define OPENCA_ALG_SIGS_COMP_NAME		        "CompositeWithNoHash"
# define OPENCA_ALG_SIGS_COMP_DESC		        "Composite Key Signature"

# define OPENCA_ALG_SIGS_COMP_SHA1_OID	        OPENCA_ALG_SIGS_COMP_OID ".1"
# define OPENCA_ALG_SIGS_COMP_SHA1_NAME		    "CompositeWithSha1"
# define OPENCA_ALG_SIGS_COMP_SHA1_DESC		    "Composite Key Signature With SHA1"

# define OPENCA_ALG_SIGS_COMP_SHA256_OID	    OPENCA_ALG_SIGS_COMP_OID ".2"
# define OPENCA_ALG_SIGS_COMP_SHA256_NAME		"CompositeWithSha256"
# define OPENCA_ALG_SIGS_COMP_SHA256_DESC		"Composite Key Signature With SHA256"

# define OPENCA_ALG_SIGS_COMP_SHA384_OID	    OPENCA_ALG_SIGS_COMP_OID ".3"
# define OPENCA_ALG_SIGS_COMP_SHA384_NAME		"CompositeWithSha384"
# define OPENCA_ALG_SIGS_COMP_SHA384_DESC		"Composite Key Signature With SHA384"

# define OPENCA_ALG_SIGS_COMP_SHA512_OID	    OPENCA_ALG_SIGS_COMP_OID ".4"
# define OPENCA_ALG_SIGS_COMP_SHA512_NAME		"CompositeWithSha512"
# define OPENCA_ALG_SIGS_COMP_SHA512_DESC		"Composite Key Signature With SHA512"

# define OPENCA_ALG_SIGS_COMP_SHA3_256_OID	    OPENCA_ALG_SIGS_COMP_OID ".5"
# define OPENCA_ALG_SIGS_COMP_SHA3_256_NAME		"CompositeWithSha3At256"
# define OPENCA_ALG_SIGS_COMP_SHA3_256_DESC		"Composite Key Signature With SHA3_256"

# define OPENCA_ALG_SIGS_COMP_SHA3_384_OID	    OPENCA_ALG_SIGS_COMP_OID ".6"
# define OPENCA_ALG_SIGS_COMP_SHA3_384_NAME		"CompositeWithSha3At384"
# define OPENCA_ALG_SIGS_COMP_SHA3_384_DESC		"Composite Key Signature With SHA3_384"

# define OPENCA_ALG_SIGS_COMP_SHA3_512_OID	    OPENCA_ALG_SIGS_COMP_OID ".7"
# define OPENCA_ALG_SIGS_COMP_SHA3_512_NAME		"CompositeWithSha3At512"
# define OPENCA_ALG_SIGS_COMP_SHA3_512_DESC		"Composite Key Signature With SHA3_512"

# define OPENCA_ALG_SIGS_COMP_SHAKE128_OID	    OPENCA_ALG_SIGS_COMP_OID ".8"
# define OPENCA_ALG_SIGS_COMP_SHAKE128_NAME		"CompositeWithShake128"
# define OPENCA_ALG_SIGS_COMP_SHAKE128_DESC		"Composite Key Signature With SHAKE128"

# define OPENCA_ALG_SIGS_COMP_SHAKE256_OID	    OPENCA_ALG_SIGS_COMP_OID ".9"
# define OPENCA_ALG_SIGS_COMP_SHAKE256_NAME		"CompositeWithShake128"
# define OPENCA_ALG_SIGS_COMP_SHAKE256_DESC		"Composite Key Signature With SHAKE128"

// ======================
// Alternative Signatures
// ======================

# define OPENCA_ALG_SIGS_ALT_OID		            OPENCA_ALG_SIGS_OID ".2"
# define OPENCA_ALG_SIGS_ALT_NAME		            "AltSigWithNoHash"
# define OPENCA_ALG_SIGS_ALT_DESC		            "Alternative Key Signature"

# define OPENCA_ALG_SIGS_ALT_SHA1_OID		        OPENCA_ALG_SIGS_ALT_OID ".1"
# define OPENCA_ALG_SIGS_ALT_SHA1_NAME		        "AltSigWithSha1"
# define OPENCA_ALG_SIGS_ALT_SHA1_DESC		        "Alternative Key Signature With SHA1"

# define OPENCA_ALG_SIGS_ALT_SHA256_OID		        OPENCA_ALG_SIGS_ALT_OID ".2"
# define OPENCA_ALG_SIGS_ALT_SHA256_NAME		    "AltSigWithSha256"
# define OPENCA_ALG_SIGS_ALT_SHA256_DESC		    "Alternative Key Signature With SHA256"

# define OPENCA_ALG_SIGS_ALT_SHA384_OID		        OPENCA_ALG_SIGS_ALT_OID ".3"
# define OPENCA_ALG_SIGS_ALT_SHA384_NAME		    "AltSigWithSha384"
# define OPENCA_ALG_SIGS_ALT_SHA384_DESC		    "Alternative Key Signature With SHA384"

# define OPENCA_ALG_SIGS_ALT_SHA512_OID		        OPENCA_ALG_SIGS_ALT_OID ".4"
# define OPENCA_ALG_SIGS_ALT_SHA512_NAME		    "AltSigWithSha512"
# define OPENCA_ALG_SIGS_ALT_SHA512_DESC		    "Alternative Key Signature With SHA512"

# define OPENCA_ALG_SIGS_ALT_SHA3_256_OID		    OPENCA_ALG_SIGS_ALT_OID ".5"
# define OPENCA_ALG_SIGS_ALT_SHA3_256_NAME		    "AltSigWithSha3At256"
# define OPENCA_ALG_SIGS_ALT_SHA3_256_DESC		    "Alternative Key Signature With SHA3_256"

# define OPENCA_ALG_SIGS_ALT_SHA3_384_OID		    OPENCA_ALG_SIGS_ALT_OID ".6"
# define OPENCA_ALG_SIGS_ALT_SHA3_384_NAME		    "AltSigWithSha3At384"
# define OPENCA_ALG_SIGS_ALT_SHA3_384_DESC		    "Alternative Key Signature With SHA3_384"

# define OPENCA_ALG_SIGS_ALT_SHA3_512_OID		    OPENCA_ALG_SIGS_ALT_OID ".7"
# define OPENCA_ALG_SIGS_ALT_SHA3_512_NAME		    "AltSigWithSha3At512"
# define OPENCA_ALG_SIGS_ALT_SHA3_512_DESC		    "Alternative Key Signature With SHA3_512"

# define OPENCA_ALG_SIGS_ALT_SHAKE128_OID		    OPENCA_ALG_SIGS_ALT_OID ".8"
# define OPENCA_ALG_SIGS_ALT_SHAKE128_NAME		    "AltSigWithShake128"
# define OPENCA_ALG_SIGS_ALT_SHAKE128_DESC		    "Alternative Key Signature With SHAKE128"

# define OPENCA_ALG_SIGS_ALT_SHAKE256_OID		    OPENCA_ALG_SIGS_ALT_OID ".9"
# define OPENCA_ALG_SIGS_ALT_SHAKE256_NAME		    "AltSigWithShake256"
# define OPENCA_ALG_SIGS_ALT_SHAKE256_DESC		    "Alternative Key Signature With SHAKE256"

// =======================
// Post-Quantum Signatures
// =======================

# define OPENCA_ALG_SIGS_PQC_OID  OPENCA_ALG_SIGS_OID ".999"

// Dilithium3 and Dilithium5
// -------------------------
# define OPENCA_ALG_SIGS_PQC_DILITHIUM_OID           OPENCA_ALG_SIGS_PQC_OID ".1"

# define OPENCA_ALG_SIGS_PQC_DILITHIUM3_SHA256_OID   OPENCA_ALG_SIGS_PQC_DILITHIUM_OID ".1"
# define OPENCA_ALG_SIGS_PQC_DILITHIUM3_SHA256_NAME  "Dilithium3WithSha256"
# define OPENCA_ALG_SIGS_PQC_DILITHIUM3_SHA256_DESC  "Dilithium3 Signature With SHA256"

# define OPENCA_ALG_SIGS_PQC_DILITHIUM3_SHA384_OID   OPENCA_ALG_SIGS_PQC_DILITHIUM_OID ".2"
# define OPENCA_ALG_SIGS_PQC_DILITHIUM3_SHA384_NAME  "Dilithium3WithSha384"
# define OPENCA_ALG_SIGS_PQC_DILITHIUM3_SHA384_DESC  "Dilithium3 Signature With SHA384"

# define OPENCA_ALG_SIGS_PQC_DILITHIUM3_SHA512_OID   OPENCA_ALG_SIGS_PQC_DILITHIUM_OID ".3"
# define OPENCA_ALG_SIGS_PQC_DILITHIUM3_SHA512_NAME  "Dilithium3WithSha512"
# define OPENCA_ALG_SIGS_PQC_DILITHIUM3_SHA512_DESC  "Dilithium3 Signature With SHA512"

# define OPENCA_ALG_SIGS_PQC_DILITHIUM3_SHAKE128_OID   OPENCA_ALG_SIGS_PQC_DILITHIUM_OID ".4"
# define OPENCA_ALG_SIGS_PQC_DILITHIUM3_SHAKE128_NAME  "Dilithium3WithShake128"
# define OPENCA_ALG_SIGS_PQC_DILITHIUM3_SHAKE128_DESC  "Dilithium3 Signature With SHAKE128"

# define OPENCA_ALG_SIGS_PQC_DILITHIUM3_SHAKE256_OID   OPENCA_ALG_SIGS_PQC_DILITHIUM_OID ".5"
# define OPENCA_ALG_SIGS_PQC_DILITHIUM3_SHAKE256_NAME  "Dilithium3WithShake256"
# define OPENCA_ALG_SIGS_PQC_DILITHIUM3_SHAKE256_DESC  "Dilithium3 Signature With SHAKE256"

# define OPENCA_ALG_SIGS_PQC_DILITHIUM5_SHA256_OID   OPENCA_ALG_SIGS_PQC_DILITHIUM_OID ".6"
# define OPENCA_ALG_SIGS_PQC_DILITHIUM5_SHA256_NAME  "Dilithium5WithSha256"
# define OPENCA_ALG_SIGS_PQC_DILITHIUM5_SHA256_DESC  "Dilithium5 Signature With SHA256"

# define OPENCA_ALG_SIGS_PQC_DILITHIUM5_SHA384_OID   OPENCA_ALG_SIGS_PQC_DILITHIUM_OID ".7"
# define OPENCA_ALG_SIGS_PQC_DILITHIUM5_SHA384_NAME  "Dilithium5WithSha384"
# define OPENCA_ALG_SIGS_PQC_DILITHIUM5_SHA384_DESC  "Dilithium5 Signature With SHA384"

# define OPENCA_ALG_SIGS_PQC_DILITHIUM5_SHA512_OID   OPENCA_ALG_SIGS_PQC_DILITHIUM_OID ".8"
# define OPENCA_ALG_SIGS_PQC_DILITHIUM5_SHA512_NAME  "Dilithium5WithSha512"
# define OPENCA_ALG_SIGS_PQC_DILITHIUM5_SHA512_DESC  "Dilithium5 Signature With SHA512"

# define OPENCA_ALG_SIGS_PQC_DILITHIUM5_SHAKE128_OID   OPENCA_ALG_SIGS_PQC_DILITHIUM_OID ".9"
# define OPENCA_ALG_SIGS_PQC_DILITHIUM5_SHAKE128_NAME  "Dilithium5WithShake128"
# define OPENCA_ALG_SIGS_PQC_DILITHIUM5_SHAKE128_DESC  "Dilithium5 Signature With SHAKE128"

# define OPENCA_ALG_SIGS_PQC_DILITHIUM5_SHAKE256_OID   OPENCA_ALG_SIGS_PQC_DILITHIUM_OID ".10"
# define OPENCA_ALG_SIGS_PQC_DILITHIUM5_SHAKE256_NAME  "Dilithium5WithShake256"
# define OPENCA_ALG_SIGS_PQC_DILITHIUM5_SHAKE256_DESC  "Dilithium5 Signature With SHAKE256"

// Falcon512 and Falcon1024
// ------------------------

# define OPENCA_ALG_SIGS_PQC_FALCON_OID             OPENCA_ALG_SIGS_PQC_OID ".2"

# define OPENCA_ALG_SIGS_PQC_FALCON512_SHA256_OID   OPENCA_ALG_SIGS_PQC_FALCON_OID ".1"
# define OPENCA_ALG_SIGS_PQC_FALCON512_SHA256_NAME  "Falcon512WithSha256"
# define OPENCA_ALG_SIGS_PQC_FALCON512_SHA256_DESC  "Falcon512 Signature With SHA256"

# define OPENCA_ALG_SIGS_PQC_FALCON512_SHA384_OID   OPENCA_ALG_SIGS_PQC_FALCON_OID ".2"
# define OPENCA_ALG_SIGS_PQC_FALCON512_SHA384_NAME  "Falcon512WithSha384"
# define OPENCA_ALG_SIGS_PQC_FALCON512_SHA384_DESC  "Falcon512 Signature With SHA384"

# define OPENCA_ALG_SIGS_PQC_FALCON512_SHA512_OID   OPENCA_ALG_SIGS_PQC_FALCON_OID ".3"
# define OPENCA_ALG_SIGS_PQC_FALCON512_SHA512_NAME  "Falcon512WithSha512"
# define OPENCA_ALG_SIGS_PQC_FALCON512_SHA512_DESC  "Falcon512 Signature With SHA512"

# define OPENCA_ALG_SIGS_PQC_FALCON512_SHAKE128_OID   OPENCA_ALG_SIGS_PQC_FALCON_OID ".4"
# define OPENCA_ALG_SIGS_PQC_FALCON512_SHAKE128_NAME  "Falcon512WithShake128"
# define OPENCA_ALG_SIGS_PQC_FALCON512_SHAKE128_DESC  "Falcon512 Signature With SHAKE128"

# define OPENCA_ALG_SIGS_PQC_FALCON512_SHAKE256_OID   OPENCA_ALG_SIGS_PQC_FALCON_OID ".4"
# define OPENCA_ALG_SIGS_PQC_FALCON512_SHAKE256_NAME  "Falcon512WithShake256"
# define OPENCA_ALG_SIGS_PQC_FALCON512_SHAKE256_DESC  "Falcon512 Signature With SHAKE256"

# define OPENCA_ALG_SIGS_PQC_FALCON1024_SHA256_OID   OPENCA_ALG_SIGS_PQC_FALCON_OID ".5"
# define OPENCA_ALG_SIGS_PQC_FALCON1024_SHA256_NAME  "Falcon1024WithSha256"
# define OPENCA_ALG_SIGS_PQC_FALCON1024_SHA256_DESC  "Falcon1024 Signature With SHA256"

# define OPENCA_ALG_SIGS_PQC_FALCON1024_SHA384_OID   OPENCA_ALG_SIGS_PQC_FALCON_OID ".6"
# define OPENCA_ALG_SIGS_PQC_FALCON1024_SHA384_NAME  "Falcon1024WithSha384"
# define OPENCA_ALG_SIGS_PQC_FALCON1024_SHA384_DESC  "Falcon1024 Signature With SHA384"

# define OPENCA_ALG_SIGS_PQC_FALCON1024_SHA512_OID   OPENCA_ALG_SIGS_PQC_FALCON_OID ".7"
# define OPENCA_ALG_SIGS_PQC_FALCON1024_SHA512_NAME  "Falcon1024WithSha512"
# define OPENCA_ALG_SIGS_PQC_FALCON1024_SHA512_DESC  "Falcon1024 Signature With SHA512"

# define OPENCA_ALG_SIGS_PQC_FALCON1024_SHAKE128_OID   OPENCA_ALG_SIGS_PQC_FALCON_OID ".8"
# define OPENCA_ALG_SIGS_PQC_FALCON1024_SHAKE128_NAME  "Falcon1024WithShake128"
# define OPENCA_ALG_SIGS_PQC_FALCON1024_SHAKE128_DESC  "Falcon1024 Signature With SHAKE128"

# define OPENCA_ALG_SIGS_PQC_FALCON1024_SHAKE256_OID   OPENCA_ALG_SIGS_PQC_FALCON_OID ".8"
# define OPENCA_ALG_SIGS_PQC_FALCON1024_SHAKE256_NAME  "Falcon1024WithShake256"
# define OPENCA_ALG_SIGS_PQC_FALCON1024_SHAKE256_DESC  "Falcon1024 Signature With SHAKE256"

// =======================
// Initialization Function
// =======================

int PKI_X509_OID_init();


#endif // End of _LIBPKI_POST_QUANTUM_SIGS_H
