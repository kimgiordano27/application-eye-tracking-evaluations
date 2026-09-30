/*
FUNCTION_NAME: Oculus.Interaction.Body.PoseDetection.OVRBodyPoseSkeletonProvider$$<OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonPoseData>g__EnsureLength|9_0<OVRPlugin.Quatf>
ENTRY_POINT: 039efbb0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider__<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_9_0<OVRPlugin_Quatf>
               (void)

{
  undefined4 uVar1;
  long lVar2;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  
  if ((*unaff_x19 != 0) && (unaff_w21 < *(int *)(*unaff_x19 + 0x18))) {
    return;
  }
  uVar1 = FUN_06bdf11c(unaff_w21 + 1,0);
  if (*unaff_x19 != 0) {
                    /* WARNING: Could not recover jumptable at 0x039efc04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x10))();
    return;
  }
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_032934b8();
  }
  lVar2 = FUN_032d5d3c(lVar2,uVar1);
  *unaff_x19 = lVar2;
  thunk_FUN_0333a630();
  return;
}


