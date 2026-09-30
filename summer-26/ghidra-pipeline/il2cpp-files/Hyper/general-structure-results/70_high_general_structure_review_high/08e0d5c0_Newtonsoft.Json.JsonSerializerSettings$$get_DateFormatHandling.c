/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_DateFormatHandling
ENTRY_POINT: 08e0d5c0
PROGRAM: Hyper-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_DateFormatHandling(void)

{
  undefined *puVar1;
  long lVar2;
  
  FUN_06411a74();
  lVar2 = FUN_04a88cb8();
  puVar1 = PTR_DAT_0ac6a7e8;
  if (lVar2 != 0) {
    FUN_05dd59a0(lVar2,*(undefined8 *)PTR_DAT_0ac6a898);
    thunk_FUN_04983f60(*(undefined8 *)puVar1);
    FUN_06411a74();
    lVar2 = FUN_04a88cb8();
    puVar1 = PTR_DAT_0ac6a7c8;
    if (lVar2 != 0) {
      FUN_05dd59a0(lVar2,*(undefined8 *)PTR_DAT_0ac6a8b8);
      thunk_FUN_04983f60(*(undefined8 *)puVar1);
      FUN_06411a74();
      lVar2 = FUN_04a88cb8();
      if (lVar2 != 0) {
        FUN_05dd59a0(lVar2,*(undefined8 *)PTR_DAT_0ac6a8d8);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


