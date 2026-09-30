/*
FUNCTION_NAME: FUN_059c2384
ENTRY_POINT: 059c2384
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long FUN_059c2384(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if ((DAT_06dc153e & 1) == 0) {
    FUN_02d965b8(OVRTelemetryConstants_OVRManager_TypeInfo);
    FUN_02d965b8(OVRUnityHumanoidSkeletonRetargeter_JointAdjustment_TypeInfo);
    DAT_06dc153e = 1;
  }
  plVar1 = (long *)(param_1 + 0x20);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
                    /* try { // try from 059c23c4 to 05ac23cf has its CatchHandler @ 059c2480 */
    lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                OVRUnityHumanoidSkeletonRetargeter_JointAdjustment_TypeInfo);
                    /* try { // try from 059c23d4 to 05ac23db has its CatchHandler @ 059c2478 */
                    /* try { // try from 059c23e0 to 05ac23e3 has its CatchHandler @ 059c2460 */
    FUN_0400f984(lVar2,*(undefined8 *)OVRTelemetryConstants_OVRManager_TypeInfo);
                    /* try { // try from 059c23e8 to 05ac23eb has its CatchHandler @ 059c245c */
                    /* try { // try from 059c23f0 to 05ac23f3 has its CatchHandler @ 059c2458 */
    *plVar1 = lVar2;
    LeanTween__value(plVar1,lVar2);
  }
                    /* try { // try from 059c23f8 to 05ac23fb has its CatchHandler @ 059c244c */
                    /* try { // try from 059c2400 to 05ac2403 has its CatchHandler @ 059c2448 */
  return lVar2;
}


