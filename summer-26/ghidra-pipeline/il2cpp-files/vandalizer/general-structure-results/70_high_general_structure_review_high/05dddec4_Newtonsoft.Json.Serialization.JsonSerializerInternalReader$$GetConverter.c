/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetConverter
ENTRY_POINT: 05dddec4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetConverter(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 unaff_x21;
  undefined8 *unaff_x25;
  undefined8 *unaff_x27;
  
  *(undefined8 *)(param_1 + 8) = unaff_x21;
  thunk_FUN_0329bf60();
  lVar1 = thunk_FUN_0322f148(*unaff_x27);
  FUN_042a9b3c();
  uVar2 = thunk_FUN_0322f148(*unaff_x25);
  FUN_042adacc();
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x30) = uVar2;
    thunk_FUN_0329bf60((undefined8 *)(lVar1 + 0x30),uVar2);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


