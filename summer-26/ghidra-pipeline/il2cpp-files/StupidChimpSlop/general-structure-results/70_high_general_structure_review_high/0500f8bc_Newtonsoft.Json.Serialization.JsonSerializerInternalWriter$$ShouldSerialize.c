/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldSerialize
ENTRY_POINT: 0500f8bc
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldSerialize(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  undefined4 unaff_w24;
  long unaff_x25;
  long *unaff_x26;
  long in_stack_00000008;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02dabd98(param_1);
  }
  uVar1 = FUN_0500f08c(&stack0x00000008,unaff_x25 + ((unaff_x19 << 0x20) >> 0x1f),unaff_w24);
  if ((uVar1 & 1) == 0) {
LAB_0500f938:
    uVar2 = 0;
  }
  else {
    lVar3 = in_stack_00000008 - unaff_x25;
    if (lVar3 < 0) {
      lVar3 = lVar3 + 1;
    }
    if (lVar3 >> 1 < (unaff_x19 << 0x20) >> 0x20) {
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar1 = FUN_0500f958();
      if ((uVar1 & 1) == 0) goto LAB_0500f938;
    }
    uVar2 = 1;
  }
  return uVar2;
}


