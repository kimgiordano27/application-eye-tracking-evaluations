/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.CreatorPropertyContext$$.ctor
ENTRY_POINT: 076831d8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreatorPropertyContext___ctor
          (ushort *param_1)

{
  ulong uVar1;
  uint in_w8;
  uint in_w9;
  int in_w10;
  uint *unaff_x19;
  uint uVar2;
  int unaff_w22;
  
  while( true ) {
    uVar2 = in_w10 * 2;
    if (in_w9 != 0) {
                    /* try { // try from 076831e0 to 077831eb has its CatchHandler @ 076832cc */
      param_1 = param_1 + 1;
      uVar2 = (uVar2 + in_w9) - 0x30;
                    /* try { // try from 076831ec to 077832e3 has its CatchHandler @ 076830b8 */
    }
    unaff_w22 = unaff_w22 + -1;
    if (unaff_w22 < 0) break;
    if (in_w8 < uVar2) {
      return 0;
    }
    in_w10 = uVar2 * 5;
    in_w9 = (uint)*param_1;
  }
  uVar1 = FUN_0768865c();
  if ((uVar1 & 1) == 0) {
    if ((int)uVar2 < 0) {
      return 0;
    }
  }
  else {
    uVar2 = -uVar2;
    if (0 < (int)uVar2) {
      return 0;
    }
  }
  *unaff_x19 = uVar2;
  return 1;
}


