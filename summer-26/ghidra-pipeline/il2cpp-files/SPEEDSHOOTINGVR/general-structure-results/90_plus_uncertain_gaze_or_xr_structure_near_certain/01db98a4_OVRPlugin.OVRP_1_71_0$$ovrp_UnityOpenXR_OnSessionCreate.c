/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionCreate
ENTRY_POINT: 01db98a4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01db9920) */

void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionCreate(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *unaff_x21;
  long lVar3;
  long unaff_x23;
  undefined8 in_stack_00000008;
  
  uVar2 = thunk_FUN_010400dc(**(undefined8 **)(param_1 + 0x758));
  FUN_01897f9c(uVar2,*(undefined8 *)PTR_DAT_0235a750);
  FUN_00ff754c();
  lVar3 = *unaff_x21;
  thunk_FUN_00ffe618();
  if (lVar3 != 0) {
    in_stack_00000008._4_1_ = '\0';
    FUN_01da75d8(lVar3,(long)&stack0x00000008 + 4);
    FUN_018986f0(lVar3);
    if (in_stack_00000008._4_1_ != '\0') {
      FUN_0102a860(lVar3);
    }
  }
  thunk_FUN_00ffe618();
  iVar1 = FUN_00ff76b8(unaff_x23 + 0x3c);
  if (iVar1 == 0) {
    FUN_01db8fc4();
  }
  return;
}


