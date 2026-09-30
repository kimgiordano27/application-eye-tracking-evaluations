/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_CheckAdditionalContent
ENTRY_POINT: 0559bac8
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonSerializer__get_CheckAdditionalContent(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((DAT_071c2903 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d09430);
    DAT_071c2903 = 1;
  }
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar1 == 0) {
    uVar2 = FUN_0559b8b0(param_1);
    uVar3 = FUN_0559b6cc(param_1);
    uVar2 = FUN_05465414(uVar2,*(undefined8 *)PTR_DAT_06d09430,uVar3,0);
    *(undefined8 *)(param_1 + 0x58) = uVar2;
    thunk_FUN_02f411dc((long *)(param_1 + 0x58),uVar2);
    lVar1 = *(long *)(param_1 + 0x58);
  }
  return lVar1;
}


