/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeAnonymousType<object>
ENTRY_POINT: 03354bac
PROGRAM: hellodot-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_JsonConvert__DeserializeAnonymousType<object>
          (long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_3 + 0x38);
  if (lVar5 == 0) {
    FUN_02ce09d4(param_3);
    lVar5 = *(long *)(param_3 + 0x38);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = FUN_033cf7e0(*(undefined8 *)(param_1 + 0x30),param_2,*(undefined8 *)(lVar5 + 8));
  lVar5 = *(long *)(*(long *)(param_3 + 0x38) + 0x18);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02ce0978(lVar5);
  }
  uVar4 = thunk_FUN_02cea894(lVar5);
  FUN_04300788(uVar4,uVar1,uVar2,uVar3,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x20));
  return uVar4;
}


