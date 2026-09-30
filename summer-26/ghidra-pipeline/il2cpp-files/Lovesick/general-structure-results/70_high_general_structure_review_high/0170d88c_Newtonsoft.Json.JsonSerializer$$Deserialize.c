/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize
ENTRY_POINT: 0170d88c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_JsonSerializer__Deserialize
               (long param_1,undefined4 param_2,undefined4 param_3,long param_4,uint param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((DAT_037789e9 & 1) == 0) {
    thunk_FUN_00d48444(System_Func<Spectrum_Point,_float>_TypeInfo);
    DAT_037789e9 = 1;
  }
  if (param_1 != 0) {
    iVar2 = thunk_FUN_00d402ac(0);
    param_1 = param_1 + iVar2;
  }
  puVar1 = System_Func<Spectrum_Point,_float>_TypeInfo;
  if (param_4 == 0) {
    uVar3 = 0;
    param_4 = 0;
  }
  else {
    iVar2 = thunk_FUN_00d402ac(0);
    uVar3 = *(undefined4 *)(param_4 + 0x10);
    param_4 = param_4 + iVar2;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_00d9037c(param_1,param_2,param_3,param_4,uVar3,param_5 & 1);
  return;
}


