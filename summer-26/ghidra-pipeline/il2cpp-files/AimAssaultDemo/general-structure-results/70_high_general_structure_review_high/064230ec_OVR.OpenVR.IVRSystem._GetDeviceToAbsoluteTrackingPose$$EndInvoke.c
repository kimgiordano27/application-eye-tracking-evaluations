/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetDeviceToAbsoluteTrackingPose$$EndInvoke
ENTRY_POINT: 064230ec
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetDeviceToAbsoluteTrackingPose__EndInvoke(long param_1,long param_2)

{
  long lVar1;
  int in_w9;
  long *unaff_x19;
  
  if (in_w9 != 0) {
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      param_2 = *unaff_x19;
      param_1 = *(long *)(param_2 + 0xb8);
    }
    if (*(int *)(param_1 + 0x118) == 1) {
      if (*(int *)(*(long *)PTR_DAT_07d97428 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_0647e870(0);
      return;
    }
  }
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar1 = FUN_0646d8d4(0);
  if (lVar1 != 0) {
    FUN_0765aaac(lVar1,0);
    return;
  }
  return;
}


