/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetUseOverriddenExternalCameraStaticPose
ENTRY_POINT: 02c523b4
PROGRAM: sharks-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_44_0__ovrp_GetUseOverriddenExternalCameraStaticPose(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long *unaff_x20;
  
  FUN_017fc350(PTR_DAT_037f6d98);
  *(undefined1 *)(unaff_x19 + 0x13c) = 1;
  lVar1 = **(long **)(*unaff_x20 + 0xb8);
  if (lVar1 == 0) {
    uVar2 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_037f6d98);
    FUN_02c108e4(uVar2,0);
    FUN_01818258(*(undefined8 *)(*unaff_x20 + 0xb8),uVar2,0);
    lVar1 = **(long **)(*unaff_x20 + 0xb8);
  }
  return lVar1;
}


