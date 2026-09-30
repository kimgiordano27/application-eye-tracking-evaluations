/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_SetCustomCameraAnchorPose
ENTRY_POINT: 01db7434
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_SetCustomCameraAnchorPose(long *param_1)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  long lVar4;
  
  if ((DAT_0247da28 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234bca8);
    FUN_00fdc2e4(PTR_DAT_0235a690);
    FUN_00fdc2e4(PTR_DAT_0235a698);
    FUN_00fdc2e4(PTR_DAT_0235a6a0);
    FUN_00fdc2e4(PTR_DAT_0235a678);
    DAT_0247da28 = 1;
  }
  if (param_1 != (long *)0x0) {
    lVar4 = *param_1;
    bVar3 = *(byte *)(*(long *)PTR_DAT_0234bca8 + 0x130);
    if ((*(byte *)(lVar4 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_0234bca8)) {
      bVar3 = *(byte *)(*(long *)PTR_DAT_0235a678 + 0x130);
      if ((*(byte *)(lVar4 + 0x130) < bVar3) ||
         ((*(long *)(*(long *)(lVar4 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_0235a678 ||
          (plVar1 = param_1 + 3, *plVar1 == 0)))) goto LAB_01db7518;
      plVar2 = param_1 + 4;
      param_1 = (long *)param_1[2];
      FUN_01db751c(*plVar1,*plVar2);
    }
    if (param_1 != (long *)0x0) {
      FUN_01db7214(param_1,0);
      return;
    }
  }
LAB_01db7518:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


