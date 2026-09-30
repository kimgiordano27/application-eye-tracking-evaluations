/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_GetCurrentTrackingTransformPose
ENTRY_POINT: 063b5e6c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] OVRPlugin_OVRP_1_30_0__ovrp_GetCurrentTrackingTransformPose(void)

{
  long *plVar1;
  long unaff_x19;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined1 in_q3 [16];
  undefined8 uVar4;
  
  uVar4 = in_q3._8_8_;
  uVar3 = in_q3._0_8_;
  plVar1 = *(long **)(unaff_x19 + 0x90);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x298))(plVar1,*(undefined8 *)(*plVar1 + 0x2a0));
    auVar2._8_8_ = uVar4;
    auVar2._0_8_ = uVar3;
    return auVar2;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 063b5e94 to 064b5e97 has its CatchHandler @ 063b6080 */
  FUN_0373b7b4();
}


