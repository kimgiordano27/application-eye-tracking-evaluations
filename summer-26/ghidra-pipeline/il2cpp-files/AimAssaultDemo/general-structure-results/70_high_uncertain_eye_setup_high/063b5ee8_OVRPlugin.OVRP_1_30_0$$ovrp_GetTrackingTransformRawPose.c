/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_GetTrackingTransformRawPose
ENTRY_POINT: 063b5ee8
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


void OVRPlugin_OVRP_1_30_0__ovrp_GetTrackingTransformRawPose
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6)

{
  long *plVar1;
  long unaff_x19;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = (**(code **)(param_1 + 0x298))(param_6,*(undefined8 *)(param_1 + 0x2a0));
  *(undefined4 *)(unaff_x19 + 0x98) = uVar2;
  *(undefined4 *)(unaff_x19 + 0x9c) = param_3;
                    /* try { // try from 063b5efc to 064b5f07 has its CatchHandler @ 063b60f0 */
  *(undefined4 *)(unaff_x19 + 0xa0) = param_4;
  *(undefined4 *)(unaff_x19 + 0xa4) = param_5;
                    /* try { // try from 063b5f08 to 064b5f63 has its CatchHandler @ 063b5bc0 */
  uVar3 = FUN_054d3f84(*(undefined4 *)(unaff_x19 + 0x20),*(undefined4 *)(unaff_x19 + 0x24));
  plVar1 = *(long **)(unaff_x19 + 0x90);
  *(int *)(unaff_x19 + 0x28) = (int)uVar3;
  *(int *)(unaff_x19 + 0xa4) = (int)uVar3;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x063b5f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2a8))
              (*(undefined4 *)(unaff_x19 + 0x98),*(undefined4 *)(unaff_x19 + 0x9c),
               *(undefined4 *)(unaff_x19 + 0xa0),uVar3,plVar1,*(undefined8 *)(*plVar1 + 0x2b0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


