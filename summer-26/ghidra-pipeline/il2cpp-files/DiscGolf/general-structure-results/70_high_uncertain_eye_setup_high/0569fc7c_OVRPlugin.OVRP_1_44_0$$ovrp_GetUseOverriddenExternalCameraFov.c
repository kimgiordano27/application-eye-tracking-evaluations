/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetUseOverriddenExternalCameraFov
ENTRY_POINT: 0569fc7c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_44_0__ovrp_GetUseOverriddenExternalCameraFov(void)

{
  long unaff_x19;
  long lVar1;
  long *unaff_x20;
  
  FUN_02d965b8();
  *(undefined1 *)(unaff_x19 + 0x89d) = 1;
  lVar1 = **(long **)(*unaff_x20 + 0xb8);
  if (lVar1 == 0) {
    lVar1 = thunk_FUN_02dd3144(*(undefined8 *)
                                System_Threading_ThreadPoolWorkQueue_SparseArray<ThreadPoolWorkQueue_WorkStealingQueue>_TypeInfo
                              );
    FUN_0569fcdc();
    **(long **)(*unaff_x20 + 0xb8) = lVar1;
    LeanTween__value(*(undefined8 *)(*unaff_x20 + 0xb8),lVar1);
  }
  return lVar1;
}


