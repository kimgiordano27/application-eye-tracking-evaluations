/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$.ctor
ENTRY_POINT: 01bc2510
PROGRAM: vrfs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c___ctor(void)

{
  long lVar1;
  long unaff_x19;
  
  while (*(long *)(unaff_x19 + 0x50) != 0) {
    lVar1 = FUN_018752a4(*(long *)(unaff_x19 + 0x50),0);
    if (lVar1 == 0) {
      return;
    }
    if (*(long *)(lVar1 + 0x18) == 0) break;
    if (1 < *(byte *)(*(long *)(lVar1 + 0x18) + 0x3d) - 0x31) {
      FUN_01bc2578();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


