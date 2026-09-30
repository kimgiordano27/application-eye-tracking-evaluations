/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_MissingMemberHandling
ENTRY_POINT: 05ea143c
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


long Newtonsoft_Json_Serialization_JsonSerializerProxy__set_MissingMemberHandling(void)

{
  long lVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  FUN_03642964();
  *(undefined1 *)(unaff_x20 + 0x207) = 1;
  lVar1 = thunk_FUN_0367fe20(*unaff_x21);
  FUN_05ea1484(lVar1,0xfffffffe);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x28) = unaff_x19;
    thunk_FUN_036b7ad0();
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


