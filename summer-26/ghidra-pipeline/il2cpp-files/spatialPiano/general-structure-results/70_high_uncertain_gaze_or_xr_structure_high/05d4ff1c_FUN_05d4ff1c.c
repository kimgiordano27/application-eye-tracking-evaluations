/*
FUNCTION_NAME: FUN_05d4ff1c
ENTRY_POINT: 05d4ff1c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_10;validity_or_gating_hits_2;functionality_permission_setup
*/


void FUN_05d4ff1c(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = 
  Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_9_0<OVRPlugin_Vector3f>__
  ;
  puVar2 = 
  Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_9_0<OVRPlugin_Quatf>__
  ;
  puVar1 = Method_OVRBody_OnPermissionGranted__;
  if ((DAT_06bc38d8 & 1) == 0) {
    FUN_02f08768(
                Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_9_0<OVRPlugin_Vector3f>__
                );
    FUN_02f08768(
                Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_9_0<OVRPlugin_Quatf>__
                );
    FUN_02f08768(Method_OVRBody_OnPermissionGranted__);
    DAT_06bc38d8 = 1;
  }
  FUN_03379434(param_1,param_1 + 0x28,param_2,*(undefined4 *)(param_1 + 0x10),*(undefined8 *)puVar1)
  ;
  FUN_03379434(param_1,param_1 + 0x38,param_2,*(undefined4 *)(param_1 + 0x10),*(undefined8 *)puVar1)
  ;
  FUN_03379208(param_1,param_1 + 0x48,param_2,*(undefined4 *)(param_1 + 0x10),*(undefined8 *)puVar2)
  ;
  FUN_0337914c(param_1,param_1 + 0x58,param_2,*(undefined4 *)(param_1 + 0x10),*(undefined8 *)puVar3)
  ;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  return;
}


