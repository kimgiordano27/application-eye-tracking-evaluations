/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_SetHeadsetControllerPose
ENTRY_POINT: 03167b40
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_SetHeadsetControllerPose(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  
  lVar2 = *(long *)(unaff_x19 + 0x20);
  uVar1 = thunk_FUN_01afaadc(*param_1);
  FUN_02fd7524();
  if (lVar2 != 0) {
    FUN_029bbc54(lVar2,uVar1,*(undefined8 *)PTR_DAT_03d807d8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


