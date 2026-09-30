/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetRawZeroPoseToStandingAbsoluteTrackingPose$$EndInvoke
ENTRY_POINT: 01ff9a30
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose__EndInvoke
               (undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  
  puVar1 = PTR_DAT_027c3af8;
  if ((*(byte *)(unaff_x20 + 0x2c9) & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027c3af8);
    thunk_FUN_01279b34(PTR_DAT_027bef80);
    *(undefined1 *)(unaff_x20 + 0x2c9) = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  lVar2 = FUN_01fe729c(param_1,0);
  if (lVar2 != 0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_027bef80 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  FUN_01f405a0(param_1,0);
  FUN_01ff8308();
  return;
}


