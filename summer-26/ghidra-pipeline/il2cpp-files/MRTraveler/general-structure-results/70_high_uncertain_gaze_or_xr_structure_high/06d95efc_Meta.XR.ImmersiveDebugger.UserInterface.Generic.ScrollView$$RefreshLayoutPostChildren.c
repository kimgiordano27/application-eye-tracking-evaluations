/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ScrollView$$RefreshLayoutPostChildren
ENTRY_POINT: 06d95efc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ScrollView__RefreshLayoutPostChildren
               (long param_1)

{
  undefined *puVar1;
  long *unaff_x20;
  ulong uVar2;
  long unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  FUN_03c8f898(*(undefined8 *)(param_1 + 0x998));
  FUN_03c8f898(PTR_DAT_08e69550);
  *(undefined1 *)(unaff_x21 + 0xa85) = 1;
  puVar1 = PTR_DAT_08e8f998;
  in_stack_00000040 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_0701df84(&stack0x00000008,0);
  uVar2 = (ulong)&stack0x00000020 | 8;
  in_stack_00000030 = in_stack_00000010;
  in_stack_00000028 = in_stack_00000008;
  in_stack_00000038 = in_stack_00000018;
  thunk_FUN_03d233cc(uVar2,0);
  thunk_FUN_03d233cc(&stack0x00000040);
  in_stack_00000020 = CONCAT44(in_stack_00000020._4_4_,0xffffffff);
  FUN_0453b30c(uVar2,&stack0x00000020,*(undefined8 *)puVar1);
  FUN_0701e00c(uVar2,0);
  return;
}


