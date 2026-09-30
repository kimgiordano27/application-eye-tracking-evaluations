/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_GetCustomCameraAnchorPose
ENTRY_POINT: 033f3ca8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_49_0__ovrp_Media_GetCustomCameraAnchorPose(void)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *unaff_x19;
  long *unaff_x20;
  
  puVar1 = StringLiteral_1718;
  lVar3 = *(long *)StringLiteral_1718;
  if (*unaff_x19 == lVar3) {
    lVar5 = lVar3;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar3 = *unaff_x19;
      lVar5 = *(long *)puVar1;
    }
    if (*(long *)(lVar3 + 0x40) != *(long *)(lVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7df0c();
    }
    plVar4 = (long *)thunk_FUN_01de290c();
    bVar2 = *unaff_x20 == *plVar4;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


