/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContract$$InvokeOnSerialized
ENTRY_POINT: 04f25d70
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 Newtonsoft_Json_Serialization_JsonContract__InvokeOnSerialized(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined4 unaff_w21;
  short unaff_w24;
  double in_stack_00000020;
  
  uVar1 = FUN_04f240dc(param_1,unaff_w21);
  if ((unaff_w24 == 0x66) && ((uVar1 & 1) == 0)) {
    FUN_04f2908c();
LAB_04f26114:
    uVar2 = 0;
  }
  else {
    if (0.0 <= *(double *)(unaff_x19 + 0x18)) {
      if (in_stack_00000020 != *(double *)(unaff_x19 + 0x18)) {
        thunk_FUN_02cea4e8(*(undefined8 *)PTR_DAT_065c9808,&stack0x00000004);
        FUN_04f290e8();
        goto LAB_04f26114;
      }
    }
    else {
      *(double *)(unaff_x19 + 0x18) = in_stack_00000020;
    }
    uVar2 = 1;
  }
  return uVar2;
}


