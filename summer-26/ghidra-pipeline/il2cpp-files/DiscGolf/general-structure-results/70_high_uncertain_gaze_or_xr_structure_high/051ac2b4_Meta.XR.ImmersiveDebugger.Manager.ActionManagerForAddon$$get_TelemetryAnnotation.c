/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ActionManagerForAddon$$get_TelemetryAnnotation
ENTRY_POINT: 051ac2b4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_ActionManagerForAddon__get_TelemetryAnnotation
               (long param_1,undefined8 param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
  uVar1 = *(ushort *)(param_1 + 0x135);
  if ((uVar1 & 1) == 0) {
    FUN_02dcfd18(param_1);
    param_1 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(ushort *)(param_1 + 0x135);
  }
  in_stack_00000028 = *(undefined4 *)(unaff_x20 + 0x14);
  if ((uVar1 & 1) == 0) {
    param_1 = FUN_02dcfd18(param_1);
  }
  uVar2 = thunk_FUN_02dd2d7c(*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x30),&stack0x00000028);
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  FUN_05488220(&stack0x00000018,param_2,uVar2,0);
  thunk_FUN_02dd2d7c(*(undefined8 *)PTR_DAT_069fc6f8);
  return;
}


