/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_OverrideExternalCameraStaticPose
ENTRY_POINT: 0339c250
PROGRAM: gunraiders-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_44_0__ovrp_OverrideExternalCameraStaticPose(long param_1)

{
  long unaff_x20;
  long lVar1;
  undefined1 uStack0000000000000034;
  
  (**(code **)(param_1 + 0x138))();
  lVar1 = *(long *)(unaff_x20 + 200);
  uStack0000000000000034 = 1;
  thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fa08,&stack0x00000034);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40));
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


