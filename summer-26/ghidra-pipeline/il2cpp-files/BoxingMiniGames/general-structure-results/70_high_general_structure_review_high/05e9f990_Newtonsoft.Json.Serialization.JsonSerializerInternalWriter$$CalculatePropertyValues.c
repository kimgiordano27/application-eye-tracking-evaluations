/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$CalculatePropertyValues
ENTRY_POINT: 05e9f990
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


long Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__CalculatePropertyValues
               (undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_07a18108;
  if ((DAT_07edf1f9 & 1) == 0) {
    FUN_03642964(PTR_DAT_07a18108);
    DAT_07edf1f9 = 1;
  }
  lVar2 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
  FUN_05e9f9f8(lVar2,0xfffffffe);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x28) = param_1;
    thunk_FUN_036b7ad0((undefined8 *)(lVar2 + 0x28),param_1);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


