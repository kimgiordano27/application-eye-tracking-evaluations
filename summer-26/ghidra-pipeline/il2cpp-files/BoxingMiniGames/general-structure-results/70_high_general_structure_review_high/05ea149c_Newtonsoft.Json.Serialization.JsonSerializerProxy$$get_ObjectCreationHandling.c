/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_ObjectCreationHandling
ENTRY_POINT: 05ea149c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_ObjectCreationHandling(void)

{
  undefined4 uVar1;
  long lVar2;
  long unaff_x19;
  undefined4 unaff_w20;
  
  *(undefined4 *)(unaff_x19 + 0x10) = unaff_w20;
  lVar2 = FUN_05e81c48(0);
  if (lVar2 != 0) {
    uVar1 = FUN_05e81ca4(lVar2,0);
    *(undefined4 *)(unaff_x19 + 0x20) = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


