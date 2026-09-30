/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetTrackingTransformRelativePose
ENTRY_POINT: 0577f514
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_38_0__ovrp_GetTrackingTransformRelativePose(void)

{
  undefined *puVar1;
  void *__ptr;
  undefined8 uVar2;
  long *unaff_x21;
  long unaff_x22;
  
  FUN_02f07e70(PTR_DAT_06d36fa0);
  *(undefined1 *)(unaff_x22 + 0x410) = 1;
  puVar1 = PTR_DAT_06d36fa0;
                    /* try { // try from 0577f52c to 0587f53b has its CatchHandler @ 0577f5ac */
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
                    /* try { // try from 0577f544 to 0587f557 has its CatchHandler @ 0577f5b4 */
  __ptr = (void *)FUN_057759cc();
  uVar2 = FUN_0577f590();
                    /* try { // try from 0577f558 to 0587f5a3 has its CatchHandler @ 0577f470 */
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*(long *)puVar1);
  }
  free(__ptr);
  return uVar2;
}


