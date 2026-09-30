/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetSeatedZeroPoseToStandingAbsoluteTrackingPose$$Invoke
ENTRY_POINT: 03366690
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8 OVR_OpenVR_IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose__Invoke(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int in_w8;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  if (in_w8 == 0) {
    FUN_01de115c();
    *(undefined1 *)(unaff_x20 + 0xb0) = 1;
  }
  uVar1 = *(undefined4 *)(unaff_x20 + 0x24);
  if (*(int *)(*(long *)StringLiteral_1369 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar2 = FUN_0336670c(uVar1);
  *unaff_x19 = uVar2;
  thunk_FUN_01e10808();
  return *unaff_x19;
}


