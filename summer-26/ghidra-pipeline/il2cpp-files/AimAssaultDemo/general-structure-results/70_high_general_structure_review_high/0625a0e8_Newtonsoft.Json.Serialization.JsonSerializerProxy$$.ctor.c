/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$.ctor
ENTRY_POINT: 0625a0e8
PROGRAM: AimAssaultDemo-libil2cpp.so
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
Newtonsoft_Json_Serialization_JsonSerializerProxy___ctor
          (long param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if (DAT_08255bd1 == '\0') {
      FUN_0373b518(PTR_DAT_07d98650);
      DAT_08255bd1 = '\x01';
    }
    uVar2 = FUN_060be1d4(param_1,0);
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    if (DAT_08255bd1 == '\0') {
      FUN_0373b518(PTR_DAT_07d98650);
      DAT_08255bd1 = '\x01';
    }
    uVar3 = FUN_060be1d4(param_2,0);
    uVar2 = FUN_061985cc(uVar2,uVar1,uVar3,*(undefined4 *)(param_2 + 0x10),param_3,0,param_4,0);
    return uVar2;
  }
  *param_4 = 0;
  return 0;
}


