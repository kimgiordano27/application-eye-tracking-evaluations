/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetDeviceToAbsoluteTrackingPose$$Invoke
ENTRY_POINT: 07d165b8
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


void OVR_OpenVR_IVRSystem__GetDeviceToAbsoluteTrackingPose__Invoke(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  long unaff_x20;
  
  FUN_04447ba8();
  *(undefined1 *)(unaff_x20 + 0xd08) = 1;
  lVar1 = *unaff_x19;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar1 = *unaff_x19;
  }
  lVar2 = *(long *)(lVar1 + 0xb8);
  if (*(char *)(lVar2 + 0x1bc) != '\0') {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar1 = *unaff_x19;
      lVar2 = *(long *)(lVar1 + 0xb8);
    }
    if (*(int *)(lVar2 + 0x120) == 1) {
      if (*(int *)(*(long *)PTR_DAT_09f26d38 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_07d710a8(0);
      return;
    }
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  lVar1 = FUN_07d60060(0);
  if (lVar1 != 0) {
    FUN_095d8374(lVar1,0);
    return;
  }
  return;
}


