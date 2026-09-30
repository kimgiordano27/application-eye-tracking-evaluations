/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$OnSerializing
ENTRY_POINT: 05614cf8
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


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__OnSerializing
          (long param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 unaff_w20;
  
  FUN_055b294c(param_2,0);
  if (param_1 != 0) {
    if (DAT_071bcab6 == '\0') {
      FUN_02f07e70(PTR_DAT_06d18938);
      DAT_071bcab6 = '\x01';
    }
    uVar2 = FUN_0546365c(param_1,0);
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    uVar3 = FUN_055b21bc(param_3,0);
    uVar2 = FUN_05614a30(uVar2,uVar1,unaff_w20,uVar3,param_4);
    return uVar2;
  }
  *param_4 = 0;
  return 0;
}


