/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector3>$$EndInvoke
ENTRY_POINT: 05836c44
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;functionality_gaze_interaction_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector3>__EndInvoke(void)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x21;
  
  if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_03ac4090();
  }
  iVar1 = FUN_04a438a4(unaff_x19 + 0x38);
  if (iVar1 != -1) {
    lVar2 = *(long *)(unaff_x21 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03ac4090();
    }
    System_Array_InternalEnumerator<NetworkAnimator_AnimatorParamCache>__System_Collections_IEnumerator_Reset
              (unaff_x19 + 0x38,iVar1,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x40));
  }
  if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
    FUN_03ac4090();
  }
  FUN_04a43a9c(unaff_x19 + 0x20);
  return;
}


