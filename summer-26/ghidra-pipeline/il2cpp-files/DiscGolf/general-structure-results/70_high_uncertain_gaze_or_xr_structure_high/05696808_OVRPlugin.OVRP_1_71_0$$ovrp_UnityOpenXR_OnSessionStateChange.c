/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionStateChange
ENTRY_POINT: 05696808
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x056968b4) */

void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionStateChange(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 uVar2;
  int unaff_w20;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  undefined8 *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  in_stack_00000020 = FUN_0540bf88();
  uVar1 = FUN_0540beb8(&stack0x00000020,0);
  uVar1 = FUN_05533a00(uVar1,unaff_w20 << 1,0);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x38);
  if (*(int *)(*(long *)PTR_DAT_06a0f1a0 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_05654f00(uVar2,unaff_w22,uVar1,unaff_w21,0);
  FUN_0540bf9c(&stack0x00000020,0);
  if (in_stack_00000028._4_1_ != '\0') {
    thunk_FUN_02da42ec(*in_stack_00000018,0);
  }
  return;
}


