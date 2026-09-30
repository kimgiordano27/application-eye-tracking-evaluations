/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_OverrideExternalCameraStaticPose
ENTRY_POINT: 063b71ac
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_44_0__ovrp_OverrideExternalCameraStaticPose
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  long unaff_x19;
  long unaff_x20;
  undefined4 uVar1;
  
  FUN_0373b518(*(undefined8 *)(param_4 + 0x400));
  *(undefined1 *)(unaff_x20 + 0x762) = 1;
  if (*(long *)(unaff_x19 + 0x90) != 0) {
    uVar1 = FUN_075b96ec(*(long *)(unaff_x19 + 0x90),0);
    *(undefined4 *)(unaff_x19 + 0x98) = uVar1;
    *(undefined4 *)(unaff_x19 + 0x9c) = param_2;
    *(undefined4 *)(unaff_x19 + 0xa0) = param_3;
    uVar1 = FUN_054d3f84(*(undefined4 *)(unaff_x19 + 0x20),*(undefined4 *)(unaff_x19 + 0x24));
    *(undefined4 *)(unaff_x19 + 0x28) = uVar1;
    *(undefined4 *)(unaff_x19 + 0x98) = uVar1;
    if (*(long *)(unaff_x19 + 0x90) != 0) {
      FUN_075b97b4(uVar1,*(undefined4 *)(unaff_x19 + 0x9c),*(undefined4 *)(unaff_x19 + 0xa0),
                   *(long *)(unaff_x19 + 0x90),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


