/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetDeviceToAbsoluteTrackingPose$$EndInvoke
ENTRY_POINT: 07d1669c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetDeviceToAbsoluteTrackingPose__EndInvoke(long param_1)

{
  long lVar1;
  int in_w8;
  long *unaff_x19;
  long *unaff_x20;
  
  if (in_w8 == 0) {
    thunk_FUN_044a54b4();
    param_1 = *unaff_x20;
  }
  if (*(int *)(*(long *)(param_1 + 0xb8) + 0x120) != 1) {
    return;
  }
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  if (DAT_0a526107 == '\0') {
    FUN_04447ba8(PTR_DAT_09f34920);
    DAT_0a526107 = '\x01';
  }
  lVar1 = *unaff_x20;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar1 = *unaff_x20;
  }
  if (**(long **)(lVar1 + 0xb8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x07d16720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x19 + 0x1c8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


