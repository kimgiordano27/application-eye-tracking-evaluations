/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EnsureArrayContract
ENTRY_POINT: 04d46fe8
PROGRAM: vrealmfunverse-libil2cpp.so
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
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EnsureArrayContract
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint unaff_w24;
  long unaff_x26;
  long *unaff_x29;
  
  FUN_049c0938(param_2,param_3,*param_1);
  puVar1 = (undefined8 *)(*(long *)(*unaff_x29 + 0xb8) + 0x30);
  *puVar1 = param_2;
  thunk_FUN_02bb0e9c(puVar1,param_2);
  uVar2 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06332588);
  FUN_04d46178(uVar2,0,unaff_w24 & 1,param_2);
  if (unaff_x26 == 0) {
    FUN_04d46484();
  }
  else {
    FUN_04d462fc();
  }
  return uVar2;
}


