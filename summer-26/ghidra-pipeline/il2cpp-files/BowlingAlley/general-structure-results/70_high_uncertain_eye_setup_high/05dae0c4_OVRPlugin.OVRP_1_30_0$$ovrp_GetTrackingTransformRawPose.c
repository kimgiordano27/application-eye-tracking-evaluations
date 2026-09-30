/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_GetTrackingTransformRawPose
ENTRY_POINT: 05dae0c4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_30_0__ovrp_GetTrackingTransformRawPose
               (ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  void *__ptr;
  long *unaff_x21;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072b1a48);
    thunk_FUN_032e1da0(PTR_DAT_0727e478);
    *(undefined1 *)(unaff_x22 + 0x5b0) = 1;
  }
  puVar1 = PTR_DAT_0727e478;
                    /* try { // try from 05dae100 to 05eae107 has its CatchHandler @ 05dae1c4 */
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  __ptr = (void *)FUN_05d92b8c(param_3);
  FUN_05dae148(param_2,__ptr);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  free(__ptr);
  return;
}


