/*
FUNCTION_NAME: Oculus.Interaction.Body.PoseDetection.OVRBodyPoseSkeletonProvider$$<OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonPoseData>g__EnsureLength|9_0<OVRPlugin.Vector3f>
ENTRY_POINT: 03c1b394
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16]
Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider__<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_9_0<OVRPlugin_Vector3f>
          (undefined1 (*param_1) [16],long param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_2 + 0x38) == 0) {
    FUN_02fe925c(PTR_DAT_06f995a8);
    if (*(long *)(param_2 + 0x38) == 0) {
      FUN_02feb320(param_2);
    }
  }
  lVar4 = *(long *)*param_1;
  if (lVar4 != 0) {
    uVar2 = FUN_03e26578(**(undefined8 **)(param_2 + 0x38));
    iVar1 = *(int *)(lVar4 + 0x38);
    if (iVar1 < *(int *)(lVar4 + 0x3c)) {
      *(ulong *)(*(long *)(lVar4 + 0x30) + (long)iVar1 * 8) = uVar2 & 0xffffffff;
      *(int *)(lVar4 + 0x38) = *(int *)(lVar4 + 0x38) + 1;
    }
    else {
      lVar3 = *(long *)(*(long *)PTR_DAT_06f995a8 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02feb2c4();
      }
      FUN_04ce0b98((long *)(lVar4 + 0x30),iVar1 + 1,0,
                   *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18));
      *(ulong *)(*(long *)(lVar4 + 0x30) + (long)iVar1 * 8) = uVar2 & 0xffffffff;
    }
    if (*(long *)*param_1 != 0) {
      *(undefined1 *)(*(long *)*param_1 + 0xc4) = 0;
      return *param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


