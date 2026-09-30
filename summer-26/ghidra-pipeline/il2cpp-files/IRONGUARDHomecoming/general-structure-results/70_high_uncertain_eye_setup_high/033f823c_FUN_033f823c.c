/*
FUNCTION_NAME: FUN_033f823c
ENTRY_POINT: 033f823c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_6;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


long FUN_033f823c(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = param_1;
  if ((DAT_0483263e & 1) == 0) {
    lVar2 = thunk_FUN_01efb3a4(
                              Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                              );
    DAT_0483263e = 1;
  }
  lVar2 = FUN_033f82fc(lVar2,param_2,param_3,param_4,*(undefined8 *)(param_1 + 0x20));
  puVar1 = 
  Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
  ;
  if (lVar2 == 0) {
    if (*(int *)(param_1 + 0x58) != 0x7f) {
      lVar2 = *(long *)
               Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
      ;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar2 = *(long *)puVar1;
      }
      if (**(long **)(lVar2 + 0xb8) != 0) {
        lVar2 = FUN_033f82fc(lVar2,param_2,param_3,param_4,
                             *(undefined8 *)(**(long **)(lVar2 + 0xb8) + 0x20));
        return lVar2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar2 = 0;
  }
  return lVar2;
}


