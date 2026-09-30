/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_GetCustomCameraAnchorPose
ENTRY_POINT: 0516b7c0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_GetCustomCameraAnchorPose(long param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  (**(code **)(param_1 + 600))
            (param_2,*(undefined4 *)(unaff_x21 + 0x18),*(undefined8 *)(param_1 + 0x260));
  plVar1 = *(long **)(unaff_x19 + 0x10);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x1c8))
              (plVar1,*(undefined1 *)(unaff_x20 + 0x29),*(undefined8 *)(*plVar1 + 0x1d0));
    if (*(long **)(unaff_x19 + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(unaff_x19 + 0x10) + 0x1e8))();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


