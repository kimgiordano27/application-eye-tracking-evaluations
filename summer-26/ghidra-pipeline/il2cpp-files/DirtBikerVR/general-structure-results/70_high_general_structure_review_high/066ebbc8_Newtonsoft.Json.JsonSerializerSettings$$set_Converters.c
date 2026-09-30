/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_Converters
ENTRY_POINT: 066ebbc8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_JsonSerializerSettings__set_Converters(void)

{
  ulong uVar1;
  int unaff_w19;
  int unaff_w20;
  long *unaff_x21;
  
  while( true ) {
    if (unaff_w20 == 0x7fffffff) {
      return unaff_w19;
    }
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar1 = FUN_066eba6c(unaff_w20);
    if (((uVar1 & 1) != 0) && (0x288df0c < (unaff_w20 + -1) * 0x7c32b16d + 0x1446f86U)) break;
    unaff_w20 = unaff_w20 + 2;
  }
  return unaff_w20;
}


