/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetRawZeroPoseToStandingAbsoluteTrackingPose$$Invoke
ENTRY_POINT: 05c599a0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose__Invoke(long *param_1)

{
  undefined *puVar1;
  int in_w9;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = **(undefined8 **)(*param_1 + 0xb8);
  uVar2 = *(undefined4 *)(*(undefined8 **)(*param_1 + 0xb8) + 1);
  if (in_w9 == 0) {
    FUN_03188a78(PTR_DAT_070ce558);
    *(undefined1 *)(unaff_x20 + 0xbbe) = 1;
  }
  puVar1 = PTR_DAT_070ce558;
  *unaff_x19 = uVar3;
  *(undefined4 *)(unaff_x19 + 1) = uVar2;
  uVar3 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
  *(undefined8 *)((long)unaff_x19 + 0x14) = (*(undefined8 **)(*(long *)puVar1 + 0xb8))[1];
  *(undefined8 *)((long)unaff_x19 + 0xc) = uVar3;
  return;
}


