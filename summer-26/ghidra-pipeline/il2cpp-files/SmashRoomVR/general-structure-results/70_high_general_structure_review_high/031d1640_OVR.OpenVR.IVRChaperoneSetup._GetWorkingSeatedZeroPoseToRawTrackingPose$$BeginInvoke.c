/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingSeatedZeroPoseToRawTrackingPose$$BeginInvoke
ENTRY_POINT: 031d1640
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8
OVR_OpenVR_IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose__BeginInvoke(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int in_w8;
  long unaff_x20;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(unaff_x20 + 0xe8);
  if (in_w8 == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_031c3bfc();
  uVar1 = FUN_031c34b8();
  uVar2 = thunk_FUN_01afaadc(*puVar3);
  FUN_031e43e8(uVar2,uVar1,0);
  return uVar2;
}


