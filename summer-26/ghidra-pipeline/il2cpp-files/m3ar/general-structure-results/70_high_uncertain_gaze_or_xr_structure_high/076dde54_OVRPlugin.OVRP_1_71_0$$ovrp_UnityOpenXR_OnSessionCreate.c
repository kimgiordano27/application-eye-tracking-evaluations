/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionCreate
ENTRY_POINT: 076dde54
PROGRAM: m3ar-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionCreate(void)

{
  undefined8 *unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000018;
  
  if (*(char *)(unaff_x21 + 0xe16) == '\0') {
    FUN_0403162c(PTR_DAT_08f65568);
    *(undefined1 *)(unaff_x21 + 0xe16) = 1;
  }
  uVar1 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_08f65568 + 0xb8) + 0x18);
  uVar2 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_08f65568 + 0xb8) + 0x20);
  *unaff_x19 = in_stack_00000000;
  *(undefined4 *)(unaff_x19 + 1) = in_stack_00000008;
  *(ulong *)((long)unaff_x19 + 0x14) = CONCAT44(in_stack_00000018,uVar2);
  *(undefined8 *)((long)unaff_x19 + 0xc) = uVar1;
  return unaff_w20 & 1;
}


