/*
FUNCTION_NAME: OVRPlugin$$OverrideExternalCameraStaticPose
ENTRY_POINT: 033c1394
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__OverrideExternalCameraStaticPose(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  thunk_FUN_01dd295c(*(undefined8 *)(param_1 + 0x158));
  uVar1 = thunk_FUN_01de27b8();
  uVar2 = thunk_FUN_01dd295c(StringLiteral_1240);
                    /* try { // try from 033c13b8 to 034c13c7 has its CatchHandler @ 033c1490 */
  FUN_032870b8(uVar1,uVar2,0);
  uVar2 = thunk_FUN_01dd295c(StringLiteral_8805);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar1,uVar2);
}


