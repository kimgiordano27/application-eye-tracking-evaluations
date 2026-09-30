/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeObject
ENTRY_POINT: 07a4a5fc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeObject
          (undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 unaff_w23;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long in_stack_00000008;
  
  uVar1 = FUN_07a49da0(&stack0x00000008,param_2,unaff_w23);
  if ((uVar1 & 1) == 0) {
LAB_07a4a660:
    uVar2 = 0;
  }
  else {
    lVar3 = in_stack_00000008 - unaff_x25;
    if (lVar3 < 0) {
      lVar3 = lVar3 + 1;
    }
    if (lVar3 >> 1 < unaff_x27 >> 0x20) {
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uVar1 = FUN_07a4a680();
      if ((uVar1 & 1) == 0) goto LAB_07a4a660;
    }
    uVar2 = 1;
  }
  return uVar2;
}


