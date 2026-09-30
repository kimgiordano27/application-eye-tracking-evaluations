/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$GetMatchingConverter
ENTRY_POINT: 08e0ca40
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__GetMatchingConverter(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  FUN_08d895f0(uVar3,0);
  lVar2 = FUN_04a7ee78();
  puVar1 = PTR_DAT_0ac6a688;
  if (lVar2 != 0) {
    FUN_05dd59a0(lVar2,*(undefined8 *)PTR_DAT_0ac6a6b0);
    thunk_FUN_04983f60(*(undefined8 *)puVar1);
    FUN_06411a74();
    FUN_05b06028();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


