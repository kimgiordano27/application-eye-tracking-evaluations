/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$Serialize
ENTRY_POINT: 07683368
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined4 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__Serialize(ushort *param_1)

{
  uint in_w9;
  uint uVar1;
  uint in_w10;
  int in_w11;
  uint *unaff_x19;
  int unaff_w21;
  
  do {
    param_1 = param_1 + 1;
                    /* try { // try from 07683370 to 0778338f has its CatchHandler @ 076830b8 */
    uVar1 = in_w11 - 0x30;
    if (uVar1 < in_w10) {
      return 0;
    }
    do {
      unaff_w21 = unaff_w21 + -1;
      if (unaff_w21 < 0) {
        *unaff_x19 = uVar1;
        return 1;
      }
      if (in_w9 < uVar1) {
        return 0;
      }
      uVar1 = uVar1 * 10;
    } while (*param_1 == 0);
    in_w11 = uVar1 + *param_1;
    in_w10 = uVar1;
  } while( true );
}


