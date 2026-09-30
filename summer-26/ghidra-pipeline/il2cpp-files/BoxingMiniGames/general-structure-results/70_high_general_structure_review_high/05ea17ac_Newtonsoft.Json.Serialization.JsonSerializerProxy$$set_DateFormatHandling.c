/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_DateFormatHandling
ENTRY_POINT: 05ea17ac
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


long Newtonsoft_Json_Serialization_JsonSerializerProxy__set_DateFormatHandling(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  lVar1 = thunk_FUN_0367fe20(**(undefined8 **)(param_1 + 0x268));
  FUN_05ea1484(lVar1,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(unaff_x19 + 0x28);
    thunk_FUN_036b7ad0();
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


